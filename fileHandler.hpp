#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "voter.hpp"

using namespace std;

#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

class FileHandler {
    private:
        string fileName;
        fstream file;

    public:
        FileHandler(string fileName);
        void openFile();
        void closeFile();
        void writeFile(vector<Voter> *voters);
        void readFile(vector<Voter> *voters);
};

#endif
