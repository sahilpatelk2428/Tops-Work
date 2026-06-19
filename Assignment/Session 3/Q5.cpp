#include <iostream>
#include <fstream>
using namespace std;

class Playlist
{
    string name;

public:
    Playlist()
    {
        name = "My Playlist";
    }

    ~Playlist()
    {
        ofstream file("autosave.txt");
        file << name;
        file.close();

        cout << "Playlist auto-saved." << endl;
    }
};

int main()
{
    Playlist p;
}
