#include <iostream>
#include "Album.h"
using namespace std;

int main() {
//    string name = input("Enter your name: ");
//    int age = stoi(input("Enter your age: "));
//
//    cout << "Hello " << name << ", I see you are " << ex(age, 2) << " years old.\n";

//    string n = "13";
//    cout << "I know the answer is " + to_string(stoi(n) * 4) << endl;

    album foo;
    foo.rating = 0;
    foo.ratingCount = 0;
    foo.title = input("Enter Title: ");
    foo.artist = input("Enter Artist: ");
    foo.year = stoi(input("Enter Release Year: "));
    int trackNum = stoi(input("Enter number of tracks: "));
    for(int i = 0; i < trackNum; i++){
        track t;
        t.title = input("Enter title of Track: ");
        t.duration = stod(input("Enter length of track: "));
        foo.trackList.push_back(t);
    }

    for(int i = 0; i < 6; i++){
        rate(foo);
    }

    print(foo);

    return 0;
}
