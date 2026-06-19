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

class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    Podcaster(string u, string p)
        : SocialMediaUser(u)
    {
        podcastName = p;
    }

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode "
             << episodeTitle
             << " published on "
             << podcastName << endl;
    }
};

int main()
{
    Podcaster p("Sahil", "Talk Time");
    p.publishEpisode("Career Tips");
}
