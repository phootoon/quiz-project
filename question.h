//
// Created by mrozb on 14.12.2022.
//

#ifndef QUIZ_PROJECT_QUESTION_H
#define QUIZ_PROJECT_QUESTION_H

#endif //QUIZ_PROJECT_QUESTION_H
#include <iostream>

using namespace std;

class Question
{
public:
    string content;
    string answ_a,answ_b,answ_c,answ_d;
    int questnumb;
    string goodansw;
    string useransw;
    int points = 0;

    void load();
    void ask();
    void check();
};