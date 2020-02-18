#include <iostream>

using namespace std;

#ifndef INPUTVERIFICATION_HPP
#define INPUTVERIFICATION_HPP

class verifyInput {
    private:
        string input;
        int uwfID;

    public:
        verifyInput(string input);
        verifyInput(int uwfID);
        verifyInput(string input, int uwfID);
        bool validUsernameCheck(string username);
        bool validUWFid(int id);
        bool validAlternateID(string alternateID);
}

#endif