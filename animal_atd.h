#pragma once

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

namespace Animals
{
enum Habitat { RIVER, SEA, LAKE };
enum Migration { MIGRATORY, NONMIGRATORY };
enum Diet { PREDATOR, HERBIVORE, INSECTIVOROUS };

class Animal
{
public:
    std::string Name;
    int Age;

    static Animal * In(ifstream & ifst);
    virtual bool InData(ifstream & ifst) = 0;
    virtual bool Out(ofstream & ofst) = 0;
    virtual int Type() = 0;
    virtual void OutFish(ofstream & ofst);
    virtual ~Animal();
    int LengthName();
    bool Compare (Animal * OtherAnimal);
};
}
