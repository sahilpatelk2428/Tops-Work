#include<iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task(string t)
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }
};

class TaskList
{
public:
    Task tasks[10] = {Task(""),Task(""),Task(""),Task(""),Task(""),
                      Task(""),Task(""),Task(""),Task(""),Task("")};
    int count = 0;

    void addTask(string title)
    {
        tasks[count] = Task(title);
        count++;
    }

    void markTaskDone(int index)
    {
        tasks[index].markDone();
    }

    void showTasks()
    {
        for(int i=0;i<count;i++)
        {
            cout << tasks[i].title;

            if(tasks[i].isDone)
                cout << " (DONE)";
            else
                cout << " (PENDING)";

            cout << endl;
        }
    }
};

int main()
{
    TaskList list;

    list.addTask("Study");
    list.addTask("Project");
    list.addTask("Exercise");

    list.markTaskDone(1);

    list.showTasks();
}

