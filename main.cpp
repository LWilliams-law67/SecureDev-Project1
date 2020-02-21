#include "fileHandler.hpp"
#include "inputVerification.hpp"
#include <cstdlib>

using namespace std;

Voter* lookup(unsigned int id, vector<Voter>* voters)
{
  for(auto & element : *voters)
    if(element.getVoterUwfID() == id)
      return &element;

  return nullptr;
}

int main()
{
  // std::cout << "Hello World!";

  string infile = "input.dat";
  FileHandler infileHandler = FileHandler(infile);

  string outfile = "output.dat";
  FileHandler outfileHandler = FileHandler(outfile);

  VerifyInput verify = VerifyInput();

  vector<Voter> registeredVoters;
  vector<Voter> outputVoters;
  Voter* currentVoter = nullptr;

  infileHandler.readFile(&registeredVoters);

  string name, uwfID, alternateID;
  string uniqueVoterID;

  cout << "Welcome to voting registration." << endl;

  while(true)
  {
    cout << "Name: ";
    getline(cin, name);

    cout << "UWF ID: ";
    getline(cin, uwfID);

    cout << "Alternate ID: ";
    getline(cin, alternateID);

    if ( name == "" )
      break;
    
    bool allNums = true;
    for(string::size_type i = 0; i < uwfID.size(); i++)
    {
      if(!isdigit(uwfID[i]))
      {
        allNums = false;
        break;
      }
    }

    unsigned int id;
    if (allNums) 
    {
      id = stoi(uwfID, nullptr);
      currentVoter = lookup(id, &registeredVoters);
    }
    

    if( (currentVoter != nullptr) && verify.validNameCheck(name) && verify.validUWFid(id) && verify.validAlternateID(alternateID)) 
    {
      if( (currentVoter->getVoterName() == name) && (currentVoter->getVoterAlternate() == alternateID) )
      {
        for(string::size_type i = 0; i < 2; i++)
        {
          uniqueVoterID += alternateID[i];
          uniqueVoterID += uwfID[i];
          uniqueVoterID += name[i];
        }
        currentVoter->setVoterID(uniqueVoterID);
        currentVoter->setVoterStation( rand()%10+1 );

        cout << currentVoter->getVoterName() << " is assigned Voter ID " << currentVoter->getVoterID();
        cout << " at Voting Station " << currentVoter->getVoterStation() << endl;

        outputVoters.push_back(*currentVoter);
      }
      else
      {
        cout << "Invalid Entry!" << endl;
      }
      
    }
    else 
    {
      cout << "Invalid Entry!" << endl;
    }
    cout << endl;
  }

  outfileHandler.writeFile(&outputVoters);

  // for(unsigned int i = 0; i < outputVoters.size(); i++) {
  //   cout << outputVoters[i].getVoterName() << " " << outputVoters[i].getVoterUwfID() << " " << outputVoters[i].getVoterAlternate();
  //   cout << " " << outputVoters[i].getVoterID() << " " << outputVoters[i].getVoterStation() << endl;
  // }

  return 0;
}