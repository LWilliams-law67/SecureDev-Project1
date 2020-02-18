#include <iostream>
#include <fstream>
#include <vector>

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
        void writeFile(Vector voters);
        void readFile(Vector voters);
}

#endif