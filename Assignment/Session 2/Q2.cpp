#include<iostream>
using namespace std;

class Playlist
{
public:
    bool isPublic;

    void togglePublic()
    {
        isPublic = !isPublic;
    }
};

int main()
{
    Playlist p;

    p.isPublic = true;
    cout<<"Before: "<<p.isPublic<<endl;

    p.togglePublic();
    cout<<"After First Toggle: "<<p.isPublic<<endl;

    p.togglePublic();
    cout<<"After Second Toggle: "<<p.isPublic<<endl;
}

