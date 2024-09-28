//
//  main.cpp
//  StudentTransferPlanner
//
//  Created by Parsa Faraji on 9/18/24.
//

#include <iostream>
#include <iomanip>
using namespace std;

string getName() {
    string name;
    cout << "Please Enter your name: \n";
    getline(cin,name);
    return name;
}

int getMajorChoice(){
    cout << "Please select your major:\n";
    // If answer is EECS,  don't ask for school!
    cout << setw(20) << "1) Computer Science" << setw(20) << "2) Data Science" << "3) EECS (only UC Berkeley)" << endl;
    int majorChoice;
    cin >> majorChoice;
    return majorChoice;
}

int getSchoolChoice(){
    cout << "What school do you want to transfer to?(Choose from below)\n";
    cout << setw(20) << "1)UC Berekley" << setw(20) << "2)UC Davis" << setw(20) << "3)UC Irvine" << endl;
    int schoolChoice;
    cin >> schoolChoice;
    return schoolChoice;
}

void printWelcomeMessage() {
    cout << "************************************************************\n";
    cout << "Welcome!\n";
    cout << "This program is a Student Education Planner designed for \n";
    cout << "Peralta college students intending to transfer into Computer/Data \n";
    cout << "Science majors. Available Schools as of now are UC Berkeley, \n";
    cout << "UC Davis, and UC Irvine.\n";
    cout << "************************************************************\n";
}

string findMajorString(int majorChoice) {
    try {
        
        switch (majorChoice) {
            case 1:
                return "Computer Science";
            case 2:
                return "Data Science";
            case 3:
                return "EECS";
            default:
                return "0";
        }
    } catch(majorChoice)
    
}

    
int main(int argc, const char * argv[]) {
    printWelcomeMessage();
    getName();
    getMajorChoice();
    getSchoolChoice();

    
    return 0;
}
