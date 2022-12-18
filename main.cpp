//
// Created by mrozb on 14.12.2022.
//
#include <iostream>
#include "question.h"



using namespace std;

int main()
{
    int numb_of_quest = 5;
    int summ = 0;
    Question quest1[numb_of_quest];
    for(int i=0; i<=numb_of_quest;i++)
    {
        quest1[i].questnumb=i+1;
        quest1[i].load();
        quest1[i].ask();
        quest1[i].check();
        summ+=quest1[i].points;

    }
    cout<<"end of quiz you got :"<<summ<<" points"<<endl;


}