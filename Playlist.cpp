#include <iostream>
using namespace std;

class Playlist {
public:
    string name;
    string createdOn;
    bool isPublic;
};

int main() {
    Playlist p;

    p.name = "My Favorites";
    p.createdOn = "2025-09-15";
    p.isPublic = true;

    cout << "Name: " << p.name << endl;
    cout << "Created On: " << p.createdOn << endl;
    cout << "Is Public: " << p.isPublic << endl;

    return 0;
}
