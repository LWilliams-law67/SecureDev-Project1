#include <iostream>
#include <fstream>

using namespace std;

#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

class FileHandler {
    private:
        string fileName;
        ifstream infile;
        ofstream outfile;

    public:
        FileHandler(string fileName);
        void openFile(string fileName);
}

#endif