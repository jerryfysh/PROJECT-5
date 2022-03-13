#include "BloodDonation.h"
using namespace std;

// Constructor
BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight)
{
        if (EmployeeID < 100000 || EmployeeID > 999999) { //extra validation, matching values below
            EmployeeID = -1;
        }
    string s = to_string(EmployeeID);
    for (int i = 0; i < 6; i++){
        if (s[i] >= 48 && s[i] <= 57) {
            continue;
        }
        else {
            EmployeeID = -1;
        }
    }
    
        mID = EmployeeID;
    
    
    if (EmployeeAge < 21 || EmployeeAge > 65) { //extra validation, matching values below
        
        mAge = -1;
    }
    else {
        mAge = EmployeeAge;
    }
    
    if (EmployeeWeight < 101.00 || EmployeeWeight > 280.00) { //extra validation, matching values below
        
        mWeight = -1;
    }
    else {
        mWeight = EmployeeWeight;
    }
    
}

// Accessor methods (getters)
int BloodDonation::getID()
{
    return mID;
}
int BloodDonation::getAge()
{
    return mAge;
}
double BloodDonation::getWeight()
{
    return mWeight;
}

// Mutator methods (setters)
void BloodDonation::setID(int EmployeeID) //validates the range of inputted value
{
    if (EmployeeID < 100000 || EmployeeID > 999999) {
        EmployeeID = -1;
    }


string s = to_string(EmployeeID);
for (int i = 0; i < 6; i++){
    if (s[i] >= 48 && s[i] <= 57) {
        continue;
    }
    else {
        EmployeeID = -1;
    }
}
    mID = EmployeeID;
}
void BloodDonation::setAge(int EmployeeAge) //validates the range of inputted value
{
    if (EmployeeAge < 21 || EmployeeAge > 65) {
        
        mAge = -1;
    }
    else {
        mAge = EmployeeAge;
    }
}
    

void BloodDonation::setWeight(double EmployeeWeight) //validates the range of inputted value
{
    if (EmployeeWeight < 101.00 || EmployeeWeight > 280.00) {
        
        mWeight = -1;
    }
    else {
        mWeight = EmployeeWeight;
    }
}
