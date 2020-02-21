#include "fileHandler.hpp"

FileHandler::FileHandler(string fileName)
{
    this->fileName = fileName;
    openFile();
}

void FileHandler::openFile()
{
    try {
        file.open(fileName);
        if(!file)
        {
            file.open("output.dat",std::fstream::binary | std::fstream::trunc | std::fstream::out);    
            file.close();
            // re-open with original flags
            file.open("output.dat",std::fstream::binary | std::fstream::in | std::fstream::out);
        }
    } catch(exception err) {
        cout << "An error occured opening the file." << endl;
    }
}

void FileHandler::closeFile()
{
    try {
        file.close();
    } catch (exception err) {
        cout << "An error occured closing the file." << endl;
    }
}

void FileHandler::writeFile(vector<Voter> *voters)
{
    //Cycle through vector
    for(unsigned int i = 0; i < voters->size(); i++) {
        file << (*voters)[i].getVoterName() << " " << (*voters)[i].getVoterID() << " " << (*voters)[i].getVoterAlternate() << " ";
        file << (*voters)[i].getVoterID() << " " << (*voters)[i].getVoterStation() << endl;
    }
    
    //Stringify Voter.

    //Write line of stringified Voter to file.

}

void FileHandler::readFile(vector<Voter> *voters)
{
    //while !eof
        //parse name (string) delimiter ',' or ' '
        //parse UWF ID (unsigned) delimiter ',' or ' '
        //parse alternate ID (string) delimiter ',' or '\n'
        //create Voter
        //populate Voter to vector
    string name;
    unsigned int uwfID;
    string alternateID;

    while (!file.eof()) {
        
        file >> name;
        if(file.eof())
            break;
        file >> uwfID;
        file >> alternateID;

        voters->push_back(Voter(name, uwfID, alternateID));
    }
}