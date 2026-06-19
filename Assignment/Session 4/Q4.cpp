#include <iostream>
using namespace std;

class SocialMediaUser
{
public:
    string username;

    SocialMediaUser(string u)
    {
        username = u;
    }
};

class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    YouTuber(string u, string c)
        : SocialMediaUser(u)
    {
        channelName = c;
    }
};

class GamingYouTuber : public YouTuber
{
public:
    GamingYouTuber(string u, string c)
        : YouTuber(u, c)
    {
    }

    void streamGame(string gameName)
    {
        cout << username
             << " is now streaming "
             << gameName
             << " on "
             << channelName << endl;
    }
};

int main()
{
    GamingYouTuber g("Sahil", "Gaming Hub");
    g.streamGame("BGMI");
}
