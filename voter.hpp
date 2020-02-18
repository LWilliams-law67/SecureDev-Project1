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
        Voter();
        Voter(string name, int uwfID, string alternateID);
        void setVoterID(string id);
        void setVoterStation(int station);
}

#endif