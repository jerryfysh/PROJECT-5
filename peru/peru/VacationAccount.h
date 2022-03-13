#ifndef VacationAccount_h // stops duplicate definitions
#define VacationAccount_h // accesses the define directive to VacationAccount header file

#include "BloodDonation.h" // include to access BloodDonation type

class VacationAccount
{
public:
    // Constructor
    VacationAccount(int EmployeeID);

    // Accessor methods (getters)
    int getID();
    double getBalance();

    // Mutator methods (setters)
    bool addVacationToAccount(BloodDonation donation);

private:
    int mID;
    int mBalance = 0; 
};

#endif
