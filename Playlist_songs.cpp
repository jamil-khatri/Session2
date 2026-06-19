#include <iostream>
#include <vector>
using namespace std;

class Playlist {
public:
    string name;
    vector<string> songs;

    void addSong(string songTitle) {
        songs.push_back(songTitle);
    }

    void showSongs() {
        cout << "Songs List:" << endl;

        for(int i = 0; i < songs.size(); i++) {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main() {
    Playlist p;

    p.name = "Hits";

    p.addSong("Song A");
    p.addSong("Song B");
    p.addSong("Song C");

    p.showSongs();

    return 0;
}
