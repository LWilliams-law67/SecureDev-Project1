#include "inputVerification.hpp"

using namespace std;

bool VerifyInput::validNameCheck(string name)
{
    // Booleans to hold the values of the verification of names.
    bool validCharacters = false;
    bool validLength = false;
    int nameLength = name.length();
    char nameArray[nameLength + 1];

    strcpy(nameArray, name.c_str());
    // Checks the individual characters within the name string for only letters and underscores.
    if (nameArray[strspn(nameArray, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz_")] == 0)
        validCharacters = true;

    // Checks the length/size of the string to verify that it does not reach 500 characters or more.
    if(name.size() < 500)
        validLength = true;

    // Function returns true if both the above validations pass.
    if(validCharacters && validLength)
        return true;
    
    // Function returns false automatically if both validations weren't successful.
    return false;

}

bool VerifyInput::validUWFid(unsigned int id)
{
    // Boolean to hold the value of whether the id is not less than zero.
    bool isNotLessThanZero = false;

    //Checks that the id is greater than zero and sets the boolean to true.
    if(id > 0)
        isNotLessThanZero = true;

    // return boolean after above validation.
    return isNotLessThanZero;
}

bool VerifyInput::validAlternateID(string alternateID)
{
    // Booleans to hold the values of the verification of alternateID.
    bool validCharacters = false;
    bool validLength = false;
    int alternateIDlength = alternateID.length();
    char alternateIDarray[ alternateIDlength + 1 ];

    strcpy(alternateIDarray, alternateID.c_str());

    // Checks the individual characters within the alternateID string for only letters, numbers, and underscores.
    if (alternateIDarray[strspn(alternateIDarray, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_")] == 0)
        validCharacters = true;

    // Checks the length/size of the string to verify that it does not reach 500 characters or more.
    if(alternateID.size() < 500)
        validLength = true;

    // Function returns true if both the above validations pass.
    if(validCharacters && validLength)
        return true;
    
    // Function returns false automatically if both validations weren't successful.
    return false;
}