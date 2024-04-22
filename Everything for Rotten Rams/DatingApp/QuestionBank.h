//
// Created by Brian Baker on 10/18/23.
//

#ifndef TIMBER_QUESTIONBANK_H
#define TIMBER_QUESTIONBANK_H

#include <iostream>
#include <string>
#include <vector>
#include "Question.h"
#include "Answer.h"
using namespace std;

class QuestionBank {
public:
    vector<Question> bank;

    QuestionBank(){
        bank = {
                {1, "Do you prefer dogs or cats?", {
                    "Dogs",
                    "Cats",
                    "I love all animals",
                    "Animals are dirty"
                }},
                {2, "Do you like being the center of attention?", {
                    "Yes",
                    "Sometimes",
                    "Never"
                }},
                {3, "Do you like to go out?", {
                    "All the time, party!",
                    "Most weekends",
                    "Occasionally, but I like staying home as well",
                    "I never go out, I like my couch too much"
                }},
                {4, "How important are kids to you?", {
                    "The most important thing in the world",
                    "I care about them, but need time away too",
                    "I hate kids"
                }},
                {5, "Are you a clean or messy person?", {
                    "Cleanliness is next to godliness",
                    "I like things organized",
                    "Depends on the day",
                    "I'm a bit disorganized",
                    "I like to live like a hobo"
                }},
                {6, "What are your politics?", {
                    "AOC calls me too liberal",
                    "Liberal",
                    "Lean left",
                    "Middle of the road independent",
                    "Lean right",
                    "Conservative",
                    "Ted Cruz has my number",
                    "I don't care about any of this"
                }}
        };
    }
};


#endif //TIMBER_QUESTIONBANK_H
