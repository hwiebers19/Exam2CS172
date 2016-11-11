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
// I affirm that all code given below was written solely by me, Heidi Wiebers, and that any help I received adhered to the rules stated for this exam.



//new person and gives them Id, name and favorite color using a pointer
Citizen::Citizen(int id,string firstName, string lastName, string color)
{
    this->id = id;
    this->firstName = firstName;
    this->lastName = lastName;
    this->color = color;
}


//uses data and pointers to create object citizen
Citizen::Citizen(Citizen* citizen)
{
    id = citizen->getId();
    firstName = citizen->getFirstName();
    lastName = citizen->getLastName();
    color = citizen->getFavoriteColor();
}

//returns first name of the citizen
string Citizen::getFirstName()
{
    return firstName;
}

//returns last name of the citizen
string Citizen::getLastName()
{
    return lastName;
}

//returns id for the citizen
int Citizen::getId()
{
    return id;
}

//returns favorite color for the citizen
string Citizen::getFavoriteColor()
{
    return color;
}

//sets favorite color for the citizen using a pointer
void Citizen::setFavoriteColor(string color)
{
    this->color = color;
}








