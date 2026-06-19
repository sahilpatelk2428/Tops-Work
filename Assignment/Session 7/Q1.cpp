#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file << "Perfect\n";
    file << "Believer\n";
    file << "Shape of You\n";
    file << "Faded\n";
    file << "Closer\n";

    file.close();

    cout << "Songs saved";
}
