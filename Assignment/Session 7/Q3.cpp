#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string newsong;

    cout << "Enter new song: ";
    getline(cin, newsong);

    ofstream file("my_fav_songs.txt", ios::app);

    file << newsong << endl;

    file.close();

    cout << "Song added";
}
