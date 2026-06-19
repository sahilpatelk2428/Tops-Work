#include <iostream>
using namespace std;

class UserProfile
{
private:
    string phoneNumber;

public:
    void setPhoneNumber(string p)
    {
        phoneNumber = p;
    }

    string getPhoneNumber()
    {
        return phoneNumber;
    }
};

int main()
{
    UserProfile u;

    u.setPhoneNumber("9876543210");

    cout << "Phone Number: "
         << u.getPhoneNumber();
}
