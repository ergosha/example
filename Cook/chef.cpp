#include "chef.h"
#include <iostream>

using namespace std;


CHEF::CHEF(string s)
{
    name=s;
    cout<<"Chef " << this->name<<"konstruktori."<< endl;


}

CHEF::~CHEF()
{
cout<<"Chef " << this->name<<" destruktori."<<endl;

}



void CHEF::makeSalad()
{
cout <<"Chef" << this->name<<" makes salad."<<endl;

}

void CHEF::makeSoup(){
cout<<"Chef" << this->name<<" makes salad." <<endl;

}
