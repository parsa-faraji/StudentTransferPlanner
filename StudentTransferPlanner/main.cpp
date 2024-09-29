//
//  main.cpp
//  StudentTransferPlanner
//
//  Created by Parsa Faraji on 9/18/24.
//

#include <iostream>
#include <iomanip>
#include <format> // introduced in C++ 20

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
    cout << left << setw(25) << "1) Computer Science" << setw(25) << "2) Data Science" << setw(25) << "3) EECS(UC Berkeley)" << endl;
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
    cout << "Science undergraduate programs. Available Schools as of now are UC Berkeley, \n";
    cout << "UC Davis, and UC Irvine.\n";
    cout << "************************************************************\n";
}

string findMajorTitle(int majorChoice) {
        switch (majorChoice) {
            case 1:
                return "Computer Science";
            case 2:
                return "Data Science";
            case 3:
                return "EECS";
            default:
                cout << "Invalid selection\n";
                return(findMajorTitle(getMajorChoice()));
        }
}

string findSchoolName(int schoolChoice) {
    switch (schoolChoice) {
        case 1:
            return "UC Berkeley";
        case 2:
            return "UC Davis";
        case 3:
            return "UC Irvine";
        default:
            cout << "Invalid selection\n";
            return(findSchoolName(getSchoolChoice()));
    }
}

void printClassList(string program, string* classes, int size) {
    cout << "************************************************************\n";
    cout << "Here are the list of classes for " << program << ":\n\n";
    int j = 1;
    for (int i = 0; i < size; i++) {
        cout << classes[i];
        if (i != size - 1)
            cout << " - ";
        if (j % 4 == 0)
            cout << "\n";
        j++;
    }
    if ((j-1) % 4 != 0)
        cout << endl;
    cout << "************************************************************\n";
}


int main(int argc, const char * argv[]) {
    string BerkeleyCS[] = {"Math 3A", "Math 3B", "Math 3E",
                           "Math 3F", "CIS 25", "CIS 27", "CIS 61"};
    string BerkeleyEECS[] = {"Math 3A", "Math 3B", "Math 3C",
                             "Math 3E", "Math 3F", "CIS 25",
                             "CIS 27", "CIS 61", "Physics 4A",
                             "Physics 4B", "ENGL 1A", "ENGL 1B"};
    string BerkeleyDS[] = {"Math 3A", "Math 3B", "Math 3E", "Math 3F",
                           "CIS 25", "CIS 27", "CIS 61", "CIS 118"};
    string DavisCS[] = {"Math 3A", "Math 3B", "Math 3C",
                        "Math 3E", "Math 11", "CIS 6 or 61",
                        "CIS 25 or 36A or 36B", "CIS 27", "CIS 20"};
    string DavisDS[] = {"Math 3A", "Math 3B", "Math 3C" ,
                        "Math 3E", "Math 13", "CIS 6 or 61"};
    string IrvineCS[] = {"Math 3A", "Math 3B", "Math 3E",
                         "CIS 6 & CIS 25 OR CIS 36A & CIS 36B", "CIS 20"};
    string IrvineDS[] = {"Math 3A", "Math 3B", "Math 3C", "Math 3E", "Math 13",
                         "CIS 6 & CIS 25 OR CIS 36A & CIS 36B", "CIS 20"};
    printWelcomeMessage();
    string name = getName();
    string major = findMajorTitle(getMajorChoice());
    string school;
    
    if (major == "EECS") {
        school = "UC Berkeley";
    }
    else {
        school = findSchoolName(getSchoolChoice());
    }
    string program = school + " " + major;

    
    if (program == "UC Berkeley Computer Science") {
        int size = sizeof(BerkeleyCS) / sizeof(BerkeleyCS[0]);
        printClassList(program, BerkeleyCS, size);
    }



    
    

    
    
    
    
    return 0;
}

