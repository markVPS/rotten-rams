
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <vector>
using namespace std;

class Movie{
private:
//Private Member Variables
    string title;
    string director;
    string genre;
    int year;
    int ratingCount;
    double rating;
    unsigned int id;
    static unsigned int nextId;
public:
    //Getters (Accessors)
    string getTitle();
    string getDirector();
    string getGenre();
    int getYear();

    //Setters (Mutators)
    void setTitle(string new_Title);
    void setDirector(string new_Director);
    void setGenre(string new_Genre);
    void setYear(int new_Year);
    void setRating(double rating);

    //Constructors
    Movie(string title_c, string director_c, string genre_c, int year_c, int ratingCount_c, double rating_c);
    Movie();

    //Public Member Functions
    void rate(int score);
    double getRating();
    void display();

};


#endif //MOVIE_H
