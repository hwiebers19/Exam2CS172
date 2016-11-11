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

//makes the city and the city name
City::City(string cityName)
{
    //initalize
    string line;
    ifstream fix;
    int personId = 0;
    string personFirstName;
    string personLastName;
    string personFavoriteColor;
    this->cityName = cityName;
    string fileName;
    //open file with city information
    fileName = cityName + ".txt";
    fix.open(fileName.c_str(),fstream::out | fstream::app);
    //if cant open then creates one
    if (!fix.fail())
    {
        while (getline(fix, line))
        {
            //this needs to put the people into the files for their city with their names and favorite colors
            personId = stoi(getaString(line));
            personFirstName = getaString(line);
            personLastName = getaString(line);
            personFavoriteColor = getaString(line);
            
            citizens->push_back(Citizen(personId, personFirstName, personLastName, personFavoriteColor));
        }
    }
    
    
    fix.close();

}
//I dont think this part works. I dont think Im adding to the file right.

//allows you to keep the info for a city but gets rid of it when not in use
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

//uses a pointer to make copy of person and adds them to city
void City::addCitizen(Citizen* citizen)
{
    citizens->push_back(Citizen(citizen));
}

//returns citizen with given id if found
Citizen* City::getCitizenWithId(int id)
{
    for (int i = 0; i < citizens->size(); i++)
    {
        if ((*citizens)[i].getId() == id)
        {
            return &((*citizens)[i]);
        }
    }
    return nullptr;
        
}


//finds and returns the people with given favorite color
vector<Citizen*> City::getCitizensForFavoriteColor(string color)
{
    vector <Citizen*> sameFavoriteColorCitizens;
    return vector<Citizen*>();
}







