#include <stdio.h>

struct Bio
{
    char description[100];
    int age;
};

struct InstaProfile
{
    char username[50];
    int followers;
    struct Bio bio;
};

int main()
{
    struct InstaProfile user =
    {
        "sahil_patel_17kp",
        1500,
        {"Student and Guddi's Husbund", 20}
    };

    printf("Username: %s\n", user.username);
    printf("Followers: %d\n", user.followers);
    printf("Bio: %s\n", user.bio.description);
    printf("Age: %d\n", user.bio.age);
}
