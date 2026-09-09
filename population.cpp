// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.

#include<iostream>
using namespace std;

int main(){
    //we shall increase by births
    unsigned int population = 312032486;
    //for births
    int births = (365*24*3600/7);
    //for deaths
    int deaths = (365*24*3600/13);
    //for immigrants
    int immigrants = (365*24*3600/45);
    //now we iterate through the 5 years
    for(int i=0;i<5;i++){
        population += (births - deaths + immigrants);
        cout << "The population after " << i +1 << " years is: " <<population << endl;
    }
    return 0;
}