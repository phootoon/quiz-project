//
// Created by mrozb on 14.12.2022.
//
#include <iostream>
#include "question.h"
#include <shuffle_array.h>



//using namespace std;
//void shuffle_array(int *arr,int numofile)
//{
//    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
//    std::shuffle(arr,arr+numofile,std::default_random_engine(seed));
//}

int main()
{
    int numb_of_quest = 0;//max 20
    int summ = 0;
    int filequestsize = 20; //number of questions in file
    int accuracy=0;
    int questord[filequestsize];
    for (int  i = 0; i<filequestsize; i++)
    {
        questord[i]=i;
    }
    Shuffle_array(questord,filequestsize);

    try{
        if (numb_of_quest>20)
        {
            numb_of_quest = 20;
            cout << "lalal";
        }
        else if(numb_of_quest<=0)
        {
            numb_of_quest=1;
        }

    }
    catch (...)
    {
    }


    Question quest1[numb_of_quest];
    for(int i=0; i<numb_of_quest;i++)
    {
        int a = questord[i];
        quest1[i].questnumb=questord[i]+1;
        quest1[i].load();
        quest1[i].ask();
        quest1[i].check();
        summ+=quest1[i].points;

    }
    accuracy = summ*100/numb_of_quest;
    cout<<"end of quiz you got :"<<summ<<" points"<< " of "<<numb_of_quest<< " possible, which is "<< accuracy<<"%"<<endl;


}