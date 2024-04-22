#ifndef TIMBER_ANSWER_H
#define TIMBER_ANSWER_H

#include <string>
#include "Question.h"
using namespace std;

class Answer {
public:
    unsigned int id;
    int answer;
    int desiredAnswer;
    int importance;

    Answer(unsigned int id, int answer, int desiredAnswer, int importance){
        this->id = id;
        this->answer = answer;
        this->desiredAnswer = desiredAnswer;
        this->importance = importance;
    }

    Answer() : Answer(0,0,0,0) {};
};


#endif //TIMBER_ANSWER_H
