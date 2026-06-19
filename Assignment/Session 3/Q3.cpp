#include <iostream>
using namespace std;

class Movie
{
public:
    string title;

    Movie(string t)
    {
        title = t;
    }

    Movie(const Movie &m)
    {
        title = m.title;
    }

    void show()
    {
        cout << "Movie: " << title << endl;
    }
};

int main()
{
    Movie m1("3 Idiots");
    Movie m2 = m1;

    cout << "Original Object" << endl;
    m1.show();

    cout << "Copied Object" << endl;
    m2.show();
}
