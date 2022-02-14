#include <iostream>
#include <string>

using namespace std;

#ifndef CITY_H
#define CITY_H
#include<string>
class City {
public:
void setName(string name) {this -> name = name;}
void setPopulation(unsigned int population) {
this -> population = population;
}
string getName() const {return this-> name;}
unsigned int getPopulation() const {return this -> population;}
void printInfo() const {
cout<<"Name: "<<getName()<<endl;
cout<<"Population: "<<getPopulation()<<endl;
}
private:
string name;
unsigned int population;
};
#endif