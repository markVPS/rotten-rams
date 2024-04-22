#ifndef TIMBER_USER_H
#define TIMBER_USER_H

#include <iostream>
#include <string>
#include <vector>
#include "QuestionBank.h"
#include "Question.h"
#include "Answer.h"
using namespace std;

class User {
private:
    string name;
    string gender;
    int age;
    vector<string> preferredGenders;
    int minPreferredAge;
    int maxPreferredAge;
    vector<Answer> answers;
public:
    User(string name, string gender, int age){
        this->name = name;
        this->gender = gender;
        this->age = age;
    }

    User() : User("","",0) {}

    const string &getName() const {
        return name;
    }

    const string &getGender() const {
        return gender;
    }

    int getAge() const {
        return age;
    }

    const vector<string> &getPreferredGenders() const {
        return preferredGenders;
    }

    int getMinPreferredAge() const {
        return minPreferredAge;
    }

    int getMaxPreferredAge() const {
        return maxPreferredAge;
    }

    vector<Answer> &getAnswers() {
        return answers;
    }

    static User* createUser(){
        string name, gender, temp, repeat = ".";
        int age;
        cout << "=================================================\n"
             << "Enter name: ";
        getline(cin, name);
        cout << "Enter gender: ";
        getline(cin, gender);
        cout << "Enter age: ";
        getline(cin, temp);
        age = stoi(temp);
        User* user = new User(name, gender, age);
        while(!temp.empty()){
            cout << "Enter preferred genders (Empty to stop): ";
            getline(cin, temp);
            user->preferredGenders.push_back(temp);
        }
        cout << "Enter minimum age of desired partner: ";
        getline(cin, temp);
        user->minPreferredAge = stoi(temp);
        cout << "Enter maximum age of desired partner: ";
        getline(cin, temp);
        user->maxPreferredAge = stoi(temp);
        return user;
    }

    bool alreadyAnswered(unsigned int id){
        for(Answer answer : this->answers){
            if(id == answer.id)
                return true;
        }
        return false;
    }

    bool satisfiesRequirements(User& other){
        bool genderMatch = false, ageMatch = false;
        for(string gender : this->preferredGenders){
            if(gender == other.gender)
                genderMatch = true;
        }
        if(other.age >= this->minPreferredAge && other.age <= this->maxPreferredAge)
            ageMatch = true;
        return genderMatch && ageMatch;
    }

    double satisfiesDesires(User& other){
        int pointsPossible = 0;
        int points = 0;
        for(Answer myAnswer : this->answers){
            for(Answer theirAnswer : other.answers){
                if(myAnswer.id == theirAnswer.id){
                    pointsPossible += myAnswer.importance;
                    if (theirAnswer.answer == myAnswer.desiredAnswer){
                        points += myAnswer.importance;
                    }
                }
            }
        }
        return (double)points / pointsPossible;
    }

    int answersInCommon(User& other){
        int commonQuestions = 0;
        for(Answer myAnswer : this->answers){
            for(Answer theirAnswer : other.answers){
                if(myAnswer.id == theirAnswer.id){
                    commonQuestions++;
                }
            }
        }
        return commonQuestions;
    }

    double compatibility(User& other){
        double mySatisfaction = this->satisfiesDesires(other);
        double theirSatisfaction = other.satisfiesDesires(*this);
        double product = mySatisfaction * theirSatisfaction;
        return 100 * pow(product, (1.0 / this->answersInCommon(other)));
    }
};


#endif //TIMBER_USER_H
