#ifndef CHEF_H
#define CHEF_H
#include <iostream>

using namespace std;


class CHEF
{
public:
    CHEF(string);
    ~CHEF();
    void makeSalad();
    void makeSoup();

protected:
    string name;



};

#endif // CHEF_H
