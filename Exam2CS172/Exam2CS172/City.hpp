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
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
#include <stdio.h>

class City
{
private:
    string cityName;
public:
    
    //Creates a new city with the given name
    //When the city is created you need to restore
    //it's population from a file.
    //Hint: You will want to make the file name
    //be based on the name of the city.
    City(string cityName);
    
    //This is the destructor for the city.  When
    //this city is destroyed, save the population of
    //the city to a file so that you can restore
    //it in the constructor the next time that
    //a city with this name is created.
    ~City();
    
    //Returns the city name
    string getCityName();
    
    //Returns the number of citizens in this city
    int populationSize();
    
    //Returns the citizen at the given index.
    Citizen* getCitizenAtIndex(int index);
    
    //Adds a citizen to this city. You will need to
    //make a copy of this citizen so that you make
    //sure to keep it around for the life of the city.
    void addCitizen(Citizen* citizen);
    
    //Returns the citizen with the given id.
    Citizen* getCitizenWithId(int id);
    
    //Returns a vector of citizens that all have
    //the given color as their favorite color.
    //For example, if color is “Blue” this will return all citizens
    //for this city who’s favorite color is Blue.
    vector<Citizen*> getCitizensForFavoriteColor(string color);
};

#endif /* City_hpp */








