#include "fileHandler.hpp"

FileHandler::FileHandler(string fileName)
{
    this.fileName = fileName;
}

FileHandler::openFile()
{
    file.open(fileName);
}

FileHandler::closeFile()
{
    file.close(fileName);
}

FileHandler::writeFile(Vector voters)
{
    //Cycle through vector
    
    //Stringify Voter.

    //Write line of stringified Voter to file.

}

FileHandler::readFile(Vector voters)
{
    //while !eof
        //parse name (string) delimiter ',' or ' '
        //parse UWF ID (unsigned) delimiter ',' or ' '
        //parse alternate ID (string) delimiter ',' or '\n'
        //create Voter
        //populate Voter to vector

}