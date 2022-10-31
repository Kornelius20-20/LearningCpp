#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<string> line2vec(string line, string delim) 
{
    // Method to take in a line from a file as a string and turn it into a vector of strings delimited by the provided delimiter

    int currentpos, delimpos;
    string item;
    vector<string> linlist;

        // get position of delimitter
        while (true) { 
            delimpos = line.find(delim,currentpos);
            if (delimpos == string::npos) { goto lineend;}

            item = line.substr(currentpos,delimpos-currentpos);
            linlist.push_back(item);
            currentpos = delimpos + 1;
        }
        lineend:
        currentpos = 0;

    return linlist;
}

vector<vector<string>> fileasmat(ifstream& File, string delim) 
{

    vector<vector<string>> splitlines;
    string line;

    while (getline(File, line)) {

        vector<string> linlist = line2vec(line,delim);
        splitlines.push_back(linlist);

    }

    return splitlines;

}

int main() {
    string tmp,line,item,x;
    int k = 0;

    // defining the delimiter
    string const delim = "\t";

    // Opening a file
    ifstream BedFile("Splice_Locations.bed");


    auto listoffile = fileasmat(BedFile,delim); 

    return 0;
}