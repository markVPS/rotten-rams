#include "Movie.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

unsigned int Movie::nextId = 1000001;

//Getters (Accessors)
string Movie::getTitle(){
    return this->title;
}
string Movie::getDirector(){
    return this->director;
}
string Movie::getGenre(){
    return this->genre;
}
int Movie::getYear(){
    return this->year;
}

//Setters (Mutators)
void Movie::setTitle(string title){
    this->title = title;
}
void Movie::setDirector(string director){
    this->director = director;
}
void Movie::setGenre(string genre){
    this->genre = genre;
}
void Movie::setYear(int year){
    this->year = year;
}
void Movie::setRating(double rating){
    this->rating = rating;
}

//Constructors
Movie::Movie(string title, string director, string genre, int year, int ratingCount, double rating){
    this->title = title;
    this->director = director;
    this->genre = genre;
    this->year = year;
    this->ratingCount = ratingCount;
    this->rating = rating;
    this->id = Movie::nextId;
    Movie::nextId++;
}

Movie::Movie() : Movie("", "", "", 0, 0, 0){}

//Public Member Functions
void Movie::rate(int score){
    cout << ratingCount << "\n";
    ratingCount++;
    cout << ratingCount;
}
double Movie::getRating(){
    return rating;
}
void Movie::display(){
    cout << "Title: " << title << "\n";
    cout << "Director: " << director << "\n";
    cout << "Genre: " << genre << "\n";
    cout << "Year: " << year << "\n";
    cout << "Rating Count: " << ratingCount << "\n";
    cout << "Rating: " << rating << "\n";
}
