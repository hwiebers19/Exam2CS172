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
//creates the Citizen class and promises the components (private and public)
class Citizen
{
private:
    //initilize
    int id;
    string firstName;
    string lastName;
    string color;
public:
    //promises the public componants 
    Citizen(int id,string firstName, string lastName, string color);
    Citizen(Citizen* citizen);
    string getFirstName();
    string getLastName();
    int getId();
    string getFavoriteColor();
    void setFavoriteColor(string color);
    
};
#endif /* Citizen_hpp */







