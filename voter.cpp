#include "voter.hpp"

using namespace std;

Voter::Voter()
{
    this->name = "";
    this->uwfID = 0;
    this->alternateID = "";
    this->voterID = "";
    this->voterStation = -1;
}

Voter::Voter(string name, unsigned int uwfID, string alternateID)
{
    this->name = name;
    this->uwfID = uwfID;
    this->alternateID = alternateID;
    this->voterID = "";
    this->voterStation = -1;
}

void Voter::setVoterID(string id)
{
    this->voterID = id;
}

void Voter::setVoterStation(int stationNum)
{
    this->voterStation = stationNum;
}

string Voter::getVoterName()
{
    return this->name;
}

unsigned int Voter::getVoterUwfID()
{
    return this->uwfID;
}

string Voter::getVoterAlternate()
{
    return this->alternateID;
}

string Voter::getVoterID()
{
    return this->voterID;
}

int Voter::getVoterStation()
{
    return this->voterStation;
}