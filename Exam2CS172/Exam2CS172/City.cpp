//
//  City.cpp
//  Exam2CS172
//
//  Created by Heidi Wiebers on 11/10/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <cctype>
#include <vector>
using namespace std;
#include "City.hpp"
#include "Citizen.hpp"
// I affirm that all code given below was written solely by me, Heidi Wiebers, and that any help I received adhered to the rules stated for this exam.

    
    //Creates a new city with the given name
    //When the city is created you need to restore
    //it's population from a file.
    //Hint: You will want to make the file name
    //be based on the name of the city.
City::City(string cityName)
{
    
}
    
    //This is the destructor for the city.  When
    //this city is destroyed, save the population of
    //the city to a file so that you can restore
    //it in the constructor the next time that
    //a city with this name is created.
City::~City()
{
    
}
    
    //Returns the city name
string City::getCityName()
{
    return cityName;
}
    
    //Returns the number of citizens in this city
int City::populationSize()
{
    return 0;
}
    
    //Returns the citizen at the given index.
Citizen* City::getCitizenAtIndex(int index)
{
    return 0;
}
    
    //Adds a citizen to this city. You will need to
    //make a copy of this citizen so that you make
    //sure to keep it around for the life of the city.
void City::addCitizen(Citizen* citizen)
{
    
}
    
    //Returns the citizen with the given id.
Citizen* City::getCitizenWithId(int id)
{
    return 0;
}
//Returns a vector of citizens that all have
//the given color as their favorite color.
//For example, if color is “Blue” this will return all citizens
//for this city who’s favorite color is Blue.
vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
    return Citizen;
}







