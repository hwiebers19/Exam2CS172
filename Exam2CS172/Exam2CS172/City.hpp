//
//  City.hpp
//  Exam2CS172
//
//  Created by Heidi Wiebers on 11/10/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef City_hpp
#define City_hpp
#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cctype>
#include <fstream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
#include <stdio.h>
#include "Citizen.hpp"
// I affirm that all code given below was written solely by me, Heidi Wiebers, and that any help I received adhered to the rules stated for this exam.

string getaString(string& aString);
//crreates a City class that initalizes the parts of the class (public and private)
class City
{
private:
    //initalizes
    string cityName;
    string fileName;
    vector <Citizen> * citizens = new vector <Citizen>;
    
public:
    //promises the public componants
    City(string cityName);
    ~City();
    string getCityName();
    int populationSize();
    Citizen* getCitizenAtIndex(int index);
    void addCitizen(Citizen* citizen);
    Citizen* getCitizenWithId(int id);
    vector<Citizen*> getCitizensForFavoriteColor(string color);
    
};

#endif /* City_hpp */









