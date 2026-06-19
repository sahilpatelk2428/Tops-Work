#include <iostream>
using namespace std;

class Product
{
public:
    virtual void upload() = 0;
};

class Electronics : public Product
{
public:
    void upload()
    {
        cout << "Electronic item uploaded." << endl;
    }
};

class Clothing : public Product
{
public:
    void upload()
    {
        cout << "Clothing item uploaded." << endl;
    }
};

int main()
{
    Electronics e;
    Clothing c;

    e.upload();
    c.upload();
}
