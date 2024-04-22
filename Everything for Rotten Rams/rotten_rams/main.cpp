#include <iostream>
using namespace std;
#include "Movie.h"

int main(){
    Movie movie1("City of God", "Fernando Meirelles", "Crime", 2002, 74, 81.4);
    Movie movie2("Come and See", "Elem Klimov", "War", 1985, 61, 87.6);
    Movie movie3("GoodFellas", "Martin Scorcese", "Crime", 1990, 125, 83.4);
    cout << "The rating for " << movie1.getTitle() << " is " << movie1.getRating() << "\n";
    cout << "All of the information the three movies will be listed here";
    movie1.display();
    movie2.display();
    movie3.display();
    cout << "Enter a rating for " << movie1.getTitle() << ": ";
    int user_score;
    cin >> user_score;
    movie1.rate(user_score);
    return 0;
}
