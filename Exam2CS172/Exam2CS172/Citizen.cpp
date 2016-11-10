//
//  Citizen.cpp
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
#include "Citizen.hpp"

//Creates a new Citizen object with the passed in
//id, name, and favorite color
//Once a citizen is created, you can't change their id or name
//but you can change their favorite color
Citizen::Citizen(int id,string firstName, string lastName, string color)
{
    
}

//Creates a new Citizen object by copying data from the
//passed in citizen
Citizen::Citizen(Citizen* citizen)
{
    
}

//Returns the first name of this citizen
string Citizen::getFirstName()
{
    return firstName;
}

//Returns the last name of this citizen
string Citizen::getLastName()
{
    return lastName;
}

//Returns the id for this citizen
int Citizen::getId()
{
    return id;
}

//Returns the favorite color for this citizen
string Citizen::getFavoriteColor()
{
    return color;
}

//Sets the favorite color for this citizen
void Citizen::setFavoriteColor(string color)
{
    color = color;
}








