#ifndef TIMBER_QUESTION_H
#define TIMBER_QUESTION_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Question {
public:
    unsigned int id;
    string questionText;
    vector<string> answerText;

    Question(unsigned int id, string questionText,
             vector<string> answerText){
        this->id = id;
        this->questionText = questionText;
        this->answerText = answerText;
    }

    Question() : Question(0,"",{""}) {};

    void displayQuestion(){
        cout << this->questionText << endl;
        for(int i = 0; i < this->answerText.size(); i++){
            cout << i + 1 << ". " << this->answerText[i] << endl;
        }
    }
};


#endif //TIMBER_QUESTION_H
