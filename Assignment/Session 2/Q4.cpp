#include<iostream>

using namespace std;

class Playlist
{
public:
    string songs[10];
    int count = 0;

    void addSong(string songTitle)
    {
        songs[count] = songTitle;
        count++;
    }

    void showSongs()
    {
        for(int i=0;i<count;i++)
        {
            cout<<songs[i]<<endl;
        }
    }
};

int main()
{
    Playlist p;

    p.addSong("Song 1");
    p.addSong("Song 2");
    p.addSong("Song 3");

    p.showSongs();
}
