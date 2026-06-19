#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

vector<Content> contentList;

void loadData()
{
    contentList.clear();

    ifstream file("content_list.txt");

    Content c;

    while(file >> c.title >> c.platform >> c.views >> c.status)
    {
        contentList.push_back(c);
    }

    file.close();
}

void saveData()
{
    ofstream file("content_list.txt");

    for(int i=0; i<contentList.size(); i++)
    {
        file << contentList[i].title << " "
             << contentList[i].platform << " "
             << contentList[i].views << " "
             << contentList[i].status << endl;
    }

    file.close();
}

void addContent()
{
    Content c;

    cout << "Enter Title: ";
    cin >> c.title;

    cout << "Enter Platform: ";
    cin >> c.platform;

    cout << "Enter Views: ";
    cin >> c.views;

    cout << "Enter Status: ";
    cin >> c.status;

    ofstream file("content_list.txt", ios::app);

    file << c.title << " "
         << c.platform << " "
         << c.views << " "
         << c.status << endl;

    file.close();

    cout << "Content Added\n";
}

void showContent()
{
    loadData();

    cout << "\nContent List\n";

    for(int i=0; i<contentList.size(); i++)
    {
        cout << i + 1 << ". "
             << contentList[i].title
             << " - "
             << contentList[i].platform
             << endl;
    }
}

void updateStatus()
{
    loadData();

    showContent();

    int num;
    cout << "Select item number: ";
    cin >> num;

    if(num > 0 && num <= contentList.size())
    {
        cout << "New Status: ";
        cin >> contentList[num - 1].status;

        saveData();

        cout << "Status Updated\n";
    }
}

void deleteContent()
{
    loadData();

    showContent();

    int num;
    cout << "Enter item number to delete: ";
    cin >> num;

    if(num > 0 && num <= contentList.size())
    {
        contentList.erase(contentList.begin() + num - 1);

        saveData();

        cout << "Item Deleted\n";

        showContent();
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Creator Dashboard Lite ---\n";
        cout << "1. Add Content\n";
        cout << "2. View Content\n";
        cout << "3. Update Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addContent();
                break;

            case 2:
                showContent();
                break;

            case 3:
                updateStatus();
                break;

            case 4:
                deleteContent();
                break;

            case 5:
                cout << "Good Bye";
                break;

            default:
                cout << "Wrong Choice";
        }

    } while(choice != 5);
}
