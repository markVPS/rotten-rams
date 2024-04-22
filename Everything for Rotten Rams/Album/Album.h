//
// Created by Brian Baker on 10/13/22.
//

#ifndef ARTICHOKEMUSIC_ALBUM_H
#define ARTICHOKEMUSIC_ALBUM_H

#include <string>
#include <vector>
using namespace std;

// Struct Declarations
struct track{
    string title;
    double duration;
};

struct album{
    string title;
    string artist;
    int year;
    double rating;
    int ratingCount;
    vector<track> trackList;
};


// Function Declarations
string input(string prompt);
double ex(double base, int exp);
string timeConvert(double duration);
double timeConvert(int mins, int sec);
string runTime(album a);
void rate(album& a);
void print(album a);


#endif //ARTICHOKEMUSIC_ALBUM_H
