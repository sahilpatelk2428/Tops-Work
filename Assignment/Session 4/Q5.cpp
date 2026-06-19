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
    YouTuber(string u) : SocialMediaUser(u) {}
};

class Podcaster : public SocialMediaUser
{
public:
    Podcaster(string u) : SocialMediaUser(u) {}
};

class InstagramInfluencer : public SocialMediaUser
{
public:
    InstagramInfluencer(string u)
        : SocialMediaUser(u)
    {
    }

    void postStory(string storyTitle)
    {
        cout << username
             << " posted a new story: "
             << storyTitle << endl;
    }
};

int main()
{
    InstagramInfluencer i("Sahil");
    i.postStory("My Trip");
}
