//
// Created by mrozb on 14.12.2022.
//
#include <iostream>
#include "question.h"

using namespace std;

int main()
{
    Question quest1[5];
    for(int i=0; i<=4;i++)
    {
        quest1[i].questnumb=i+1;
        quest1[i].load();
        quest1[1].ask();
        quest1[i].check();

    }
    cout<<"end of quiz you got :"<<quest1->points<<"point"<<endl;


}