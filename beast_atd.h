#pragma once
#include "animal_atd.h"
namespace Animals {
class Beast: public Animal
{
    Diet D;
public:
    void InData(ifstream & ifst);
    bool Out(ofstream & ofst);
};
}
