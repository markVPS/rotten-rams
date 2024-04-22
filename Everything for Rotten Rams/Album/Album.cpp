//
// Created by Brian Baker on 10/13/22.
//
#include "Album.h"
#include <iostream>
#include <string>
using namespace std;

double ex(double base, int exp){
    double result = 1;
    for(int i = 0; i < exp; i++){
        result *= base;
    }
    return result;
}

string input(string prompt){
    string temp = "";
    cout << prompt;
    getline(cin, temp);
    return temp;
}

string timeConvert(double duration){
    int mins = duration;
    int sec = (duration - mins) * 60;
    return to_string(mins) + ":" + to_string(sec);
}

double timeConvert(int mins, int sec){
    return mins + (sec * 0.01666667);
}

string runTime(album a){
    double total = 0;
    for(track t : a.trackList){
        total += t.duration;
    }
    return timeConvert(total);
}

void rate(album& a){
    int score = stoi(input("Enter rating: "));
    a.rating = ((a.rating * a.ratingCount) + score) / (a.ratingCount + 1);
    a.ratingCount++;
}

void print(album a){
    cout << "============================================\n"
         << a.title << endl
         << a.artist << "  (" << a.year << ")\n"
         << "============================================\n";
    for(track t : a.trackList){
        cout << t.title << " [" << timeConvert(t.duration) << "]\n";
    }
    cout << "============================================\n";
    cout << "Rating: " << a.rating << "  Run Time: " << runTime(a) << endl;
}











