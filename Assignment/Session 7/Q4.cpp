#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("wishlist.txt");

    string product;
    int price;

    for(int i=1; i<=3; i++)
    {
        cout << "Enter product name: ";
        cin >> product;

        cout << "Enter price: ";
        cin >> price;

        file << product << " " << price << endl;
    }

    file.close();

    ifstream read("wishlist.txt");

    cout << "\nWishlist:\n";

    while(read >> product >> price)
    {
        cout << product << " - Rs." << price << endl;
    }

    read.close();
}
