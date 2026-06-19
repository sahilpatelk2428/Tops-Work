#include<iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    void markDelivered()
    {
        isDelivered = true;
        cout<<"Order Delivered"<<endl;
    }
};

int main()
{
    FoodOrder f;

    f.orderId = 101;
    f.restaurantName = "Pizza Hut";
    f.isDelivered = false;

    f.markDelivered();
}
