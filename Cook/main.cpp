#include <iostream>
#include "italianchef.h"
#include "chef.h"

using namespace std;

int main()
{
    CHEF kokki("Gordon Ramsay");
    kokki.makeSalad();
    kokki.makeSoup();

    return 0;
}
