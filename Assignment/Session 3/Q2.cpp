#include<iostream>
using namespace std;

class Product
{
public:
    string productName;
    int price;
    float rating;

    Product(string n, int p, float r)
    {
        productName = n;
        price = p;
        rating = r;
    }

    void displayInfo()
    {
        cout<<"Name: "<<productName<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Rating: "<<rating<<endl;
    }
};

int main()
{
    Product p("Mobile",15000,4.5);
    p.displayInfo();
}
