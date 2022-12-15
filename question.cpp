//
// Created by mrozb on 14.12.2022.
//
#include <iostream>
#include "question.h"
#include <fstream>
#include <cstdlib>

using namespace std;

void Question::load()
{
    fstream file;
    file.open("questions.txt",ios::in);

    if (file.good()==false)
    {
        cout<< "unreadable file";
        exit(0);
    }
    int linenum=(questnumb-1)*6+1;
    int actualnum=1;
    string line;

    while(getline(file,line))
    {

        if(linenum==actualnum)
            content=line;
        if(linenum+1==actualnum)
            answ_a=line;
        if(linenum+2==actualnum)
            answ_b=line;
        if(linenum+3==actualnum)
            answ_c=line;
        if(linenum+4==actualnum)
            answ_d=line;
        if(linenum+5==actualnum)
            goodansw=line;
        actualnum++;
    }
   file.close();
}
void Question::ask()
{
    cout<<endl<<content<<endl;
    cout<<answ_a<<endl;
    cout<<answ_b<<endl;
    cout<<answ_c<<endl;
    cout<<answ_d<<endl<<endl<<"answer";

}
void Question::check()
{
    if(useransw==goodansw)
    {
        points++;
    }

}