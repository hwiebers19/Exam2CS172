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
#include <fstream>
#include <vector>
using namespace std;
#include "City.hpp"
#include "Citizen.hpp"
// I affirm that all code given below was written solely by me, Heidi Wiebers, and that any help I received adhered to the rules stated for this exam.

//function to get the string being used
string getaString(string& aString)
{
    string AString = aString.substr(0, aString.at(' '));
    aString.erase(0, aString.at(' ') + 1);
    return aString;
    
}
    
/*Creates a new city with the given name When the city is created you need to restore
it's population from a file. Hint: You will want to make the file name
be based on the name of the city.*/
City::City(string cityName)
{
    string line;
    ifstream fix;
    this->cityName = cityName;
    string fileName;
    fileName = cityName + ".txt";
    fix.open(fileName.c_str());
        
    if (!fix.fail())
    {
        while (getline(fix, line))
        {
        citizens->push_back(Citizen(stoi(getaString(line)), getaString(line), getaString(line), getaString(line)));
        }
    }
    

}

/*This is the destructor for the city.  When this city is destroyed, save the population of
the city to a file so that you can restore it in the constructor the next time that a city with this name is created.*/
City::~City()
{
    ofstream keep;
    keep.open(fileName.c_str());
    
    for (int i = 0; i < citizens->size(); i++)
    {
        keep << to_string((*citizens)[i].getId()) << " " << (*citizens)[i].getFirstName() << " " << (*citizens)[i].getLastName() << " " << (*citizens)[i].getFavoriteColor() << " " << endl;
    }
    
    delete citizens;
}
    
//returns city name
string City::getCityName()
{
    return cityName;
}
    
//returns number of citizens in city
int City::populationSize()
{
    return citizens->size();
}
    
//returns citizen at given index.
Citizen* City::getCitizenAtIndex(int index)
{
    return &(*citizens)[index];
}
    
/*Adds a citizen to this city. You will need to make a copy of this citizen so that you make
sure to keep it around for the life of the city.*/
void City::addCitizen(Citizen* citizen)
{
    citizens->push_back(Citizen(citizen));
}

//returns citizen with given id.
Citizen* City::getCitizenWithId(int id)
{
    for (int i = 0; i < citizens->size(); i++)
    {
        if ((*citizens)[i].getId() == id)
        {
            return &((*citizens)[i]);
        }
    }
    
    cout << "No citizen with ID " << id << " was found." << endl;
    return nullptr;
        
}

/*Returns a vector of citizens that all have the given color as their favorite color.
For example, if color is “Blue” this will return all citizens for this city who’s favorite color is Blue.*/
vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
    vector <Citizen*> sameFavoriteColorCitizens;
    return vector<Citizen*>();
}







