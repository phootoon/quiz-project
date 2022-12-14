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
        switch (actualnum)
        {
            case linenum:
                content=line;
                break;
            case linenum+1:
                answ_a=line;
                break;
            case linenum+2:
                answ_b=line;
                break;
            case linenum+3:
                answ_c=line;
                break;
            case linenum+4:
                answ_d=line;
                break;
            case linenum+5:
                goodansw=line;
                break;
        }
    }
   plik.close
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