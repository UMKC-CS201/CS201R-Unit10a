#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "LinkedList.h"
#include "functions.h"
using namespace std;

void readFile(ifstream& inFile, LinkedList& L) {
    dataType tempPerson;
    string inStr, tempStr;
    vector <string> row;

    //read data file & add to linked list
    while (getline(inFile, inStr)) {
        stringstream inSS(inStr);
        row.clear();
        while (getline(inSS, tempStr, ',')) {
            row.push_back(tempStr);
        }
        tempPerson.type = row[0][0];
        tempPerson.lname = row[1];
        tempPerson.fname = row[2];
        try {
            tempPerson.age = stoi(row[3]);
            L.addNode(tempPerson);
        }
        catch (logic_error) {
            cout << "error in input" << endl;
            continue;
        }
    }
}