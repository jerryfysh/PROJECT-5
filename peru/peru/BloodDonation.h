#ifndef BloodDonation_h // stops duplicate definitions
#define BloodDonation_h // accesses the define directive to BloodDonation header file
#include <string>

class BloodDonation
{
public:
    // Constructor
    BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight);

    // Accessor methods (getters)
    int getID();
    int getAge();
    double getWeight();

    // Mutator methods (setters)
    void setID(int EmployeeID);
    void setAge(int EmployeeAge);
    void setWeight(double EmployeeWeight);

private:
    int mID;
    int mAge;
    double mWeight;
};

class 



#endif
