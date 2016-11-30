#include "Card.h"
using namespace std;
Card::Card(char[64] name,enum color,int value)
{
    //default values:
    name="ghoul";
    color=Grey;
    value=0;

    //ctor
    SetcardName(name);
    SetcardColor(Grey);
    SetcardValue(value);
    cout<<"Default Card"<<" Name:"<<GetcardName()<<"was created."<<endl;
}

Card::~Card()
{
    //dtor
    cout<<"Card "<<GetcardName()<<" was destructed"<<endl;
}


