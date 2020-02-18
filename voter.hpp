#include <iostream>

using namespace std;

#ifndef VOTER_HPP
#define VOTER_HPP

class Voter {
    private:
        string name;
        int uwfID;
        string alternateID;
        string voterID;
        int voterStation;

    public:
        voter(string name, int uwfID, string alternateID);
        bool setVoterID(string id);
        bool setVoterStation(int station);
}

#endif