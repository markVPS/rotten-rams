#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "User.h"
#include "Answer.h"
#include "Question.h"
#include "QuestionBank.h"
using namespace std;

int main() {

    // Setup application
    QuestionBank questionBank;
    vector<User*> users;
    User *currentUser, *newUser;
    Answer newAnswer;
    string temp, response;
    int choice, selection, index;
    bool repeat = true;
    srand(time(NULL));

    // Create First User
    currentUser = User::createUser();
    users.push_back(currentUser);

    while(repeat){
        // Display main menu
        cout << "=================================================\n"
             << "Welcome " << currentUser->getName() << "\n"
             << "=================================================\n"
             << "1. Change User\n"
             << "2. Create New User\n"
             << "3. Answer Question\n"
             << "4. Display Potential Matches\n"
             << "5. Exit\n"
             << "=================================================\n"
             << "Enter choice: ";
        getline(cin, temp);
        choice = stoi(temp);

        // Perform Chosen Action
        switch(choice){
            case 1: // Switch Users
                cout << "-----------------------------------------\n"
                     << "Pick a User\n";
                for(int i = 0; i < users.size(); i++){
                    cout << i + 1 << ". " << users[i]->getName() << endl;
                }
                cout << "-----------------------------------------\n"
                     << "Enter user number: ";
                getline(cin, temp);
                selection = stoi(temp);
                if(selection <= users.size() && selection > 0)
                    currentUser = users[selection - 1];
                break;
            case 2: // Create New User
                newUser = User::createUser();
                users.push_back(newUser);
                break;
            case 3: // Answer Question
                if(currentUser->getAnswers().size() == questionBank.bank.size()){
                    cout << "You have already answered all of our questions.\n";
                    break;
                }
                index = rand() % questionBank.bank.size();
                while(currentUser->alreadyAnswered(questionBank.bank[index].id)) {
                    index = rand() % questionBank.bank.size();
                }
                questionBank.bank[index].displayQuestion();
                newAnswer.id = questionBank.bank[index].id;
                cout << "What is your answer?: ";
                getline(cin, temp);
                newAnswer.answer = stoi(temp);
                cout << "What answer would you like a potential partner to give?: ";
                getline(cin, temp);
                newAnswer.desiredAnswer = stoi(temp);
                cout << "How important is this to you?\n"
                     << "1. Irrelevant\n"
                     << "2. A Little Important\n"
                     << "3. Somewhat Important\n"
                     << "4. Very Important\n"
                     << "5. Mandatory\n"
                     << "Enter choice: ";
                getline(cin, temp);
                selection = stoi(temp);
                if(selection == 1)
                    newAnswer.importance = 0;
                else if(selection == 2)
                    newAnswer.importance = 1;
                else if(selection == 3)
                    newAnswer.importance = 10;
                else if(selection == 4)
                    newAnswer.importance = 50;
                else if(selection == 5)
                    newAnswer.importance = 250;
                else
                    newAnswer.importance  = 0;
                currentUser->getAnswers().push_back(newAnswer);
                break;
            case 4: // Display Potential Matches
                cout << "##########################################\n"
                     << "Potential Matches for " << currentUser->getName() << endl;
                for(int i = 0; i < users.size(); i++){
                    if(currentUser->satisfiesRequirements(*users[i])){
                        cout << fixed << setprecision(1)
                             << currentUser->compatibility(*users[i]) << "%  "
                             << users[i]->getName() << endl;
                    }
                }
                cout << "##########################################\n";
                break;
            default:
                repeat = false;
        }
    }

    return 0;
}
