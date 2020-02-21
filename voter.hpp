#include <iostream>
#include <string>

using namespace std;

#ifndef VOTER_HPP
#define VOTER_HPP

class Voter {
    private:
        string name;
        unsigned int uwfID;
        string alternateID;
        string voterID;
        int voterStation;

    public:
        Voter();
        Voter(string name, unsigned int uwfID, string alternateID);
        void setVoterID(string id);
        void setVoterStation(int station);
        string getVoterName();
        unsigned int getVoterUwfID();
        string getVoterAlternate();
        string getVoterID();
        int getVoterStation();
};

#endif
