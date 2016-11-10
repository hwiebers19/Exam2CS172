//
//  Citizen.hpp
//  Exam2CS172
//
//  Created by Heidi Wiebers on 11/10/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef Citizen_hpp
#define Citizen_hpp
#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
// I affirm that all code given below was written solely by me, Heidi Wiebers, and that any help I received adhered to the rules stated for this exam.

#include <stdio.h>

class Citizen
{
private:
    int id;
    string firstName;
    string lastName;
    string color;
public:
    
    //Creates a new Citizen object with the passed in
    //id, name, and favorite color
    //Once a citizen is created, you can't change their id or name
    //but you can change their favorite color
    Citizen(int id,string firstName, string lastName, string color);
    
    //Creates a new Citizen object by copying data from the
    //passed in citizen
    Citizen(Citizen* citizen);
    
    //Returns the first name of this citizen
    string getFirstName();
    
    //Returns the last name of this citizen
    string getLastName();
    
    //Returns the id for this citizen
    int getId();
    
    //Returns the favorite color for this citizen
    string getFavoriteColor();
    
    //Sets the favorite color for this citizen
    void setFavoriteColor(string color);
};
#endif /* Citizen_hpp */







