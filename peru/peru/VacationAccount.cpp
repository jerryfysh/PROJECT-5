#include "VacationAccount.h"

// Constructor
VacationAccount::VacationAccount(int EmployeeID)
{
    mID = EmployeeID;
}

// To access (getters)
int VacationAccount::getID()
{
    return mID;
}
double VacationAccount::getBalance()
{
    return mBalance;
}

// To mutate (setters)
bool VacationAccount::addVacationToAccount(BloodDonation donation)
{
    bool Vacation = true;
    if (donation.getID() != mID || mID == -1) {
        Vacation = false;
        return Vacation;
    }
    if (donation.getWeight() == -1 || donation.getAge() == -1) {
        Vacation = false;
        return Vacation;
    }
    mBalance = mBalance + 4;
    return Vacation;
}
