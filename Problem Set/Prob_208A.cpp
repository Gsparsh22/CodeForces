#include <iostream>
#include <string>

using namespace std;

string restore_original_song(const string& remixed_song) {
    string original_song = remixed_song;

    size_t found = original_song.find("WUB");
    while (found != string::npos) {
        original_song.replace(found, 3, " ");
        found = original_song.find("WUB", found + 1);
    }

    size_t start = original_song.find_first_not_of(' ');
    size_t end = original_song.find_last_not_of(' ');

    original_song = original_song.substr(start, end - start + 1);

    return original_song;
}

int main() {
    
    string s;
    cin >>s;
    cout << restore_original_song(s) << endl;

    return 0;
}
