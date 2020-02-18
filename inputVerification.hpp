#include <iostream>

using namespace std;

#ifndef INPUTVERIFICATION_HPP
#define INPUTVERIFICATION_HPP

class VerifyInput {
    public:
        bool validUsernameCheck(string username);
        bool validUWFid(unsigned id);
        bool validAlternateID(string alternateID);
}

#endif