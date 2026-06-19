#include<iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int id, string name, bool delivered)
    {
        orderId = id;
        restaurantName = name;
        isDelivered = delivered;
    }
};

int main()
{
    FoodOrder f(101, "Pizza Hut", false);

    cout<<"Order ID: "<<f.orderId<<endl;
    cout<<"Restaurant: "<<f.restaurantName<<endl;
    cout<<"Delivered: "<<f.isDelivered<<endl;
}
