#include "voter.hpp"
#include <iostream>

using namespace std;

Voter::Voter()
{
    this.name = "";
    this.uwfID = 0;
    this.alternateID = "";
}

Voter::voter(string name, unsigned uwfID, string alternateID)
{
    this.name = name;
    this.uwfID = uwfID;
    this.alternateID = alternateID;
}

void Voter::setVoterID(string id)
{
    this.voterID = id;
}

void Voter::setVoterStation(int stationNum)
{
    this.voterStation = stationNum;
}
