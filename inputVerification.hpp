#include <iostream>
#include <cstring>

using namespace std;

#ifndef INPUTVERIFICATION_HPP
#define INPUTVERIFICATION_HPP

class VerifyInput {
    public:
        bool validNameCheck(string username);
        bool validUWFid(unsigned int id);
        bool validAlternateID(string alternateID);
};

#endif
