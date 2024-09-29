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
// remind to put space between class name and number
void classFinder(string className, string* classList, string* classesToTake, int size) {
   // debug: printClassList("", classesToTake, size);
    for (int j = 0; j < size; j++) {
        if (className == classList[j]) {
            classesToTake[j] = "";
        }
    }
    // debug: printClassList("", classesToTake, size);
}

void optionalClassAllocator(string program, string className, string* classesToTake, int size) {
    if (program == "UC Davis Computer Science") {
        // modified ready className
        if (className[0] == '#' && className[1] == '#') {
            for (int j = 0; j < size; j++) {
                if (classesToTake[j][0] == '#' && classesToTake[j][1] == '#') {
                    classesToTake[j] = "";
                }
            }
        }
        else if (className[0] == '#') {
            for (int j = 0; j < size; j++) {
                if (classesToTake[j][0] == '#' && classesToTake[j][1] != '#') {
                    classesToTake[j] = "";
                }
            }
        }
    }
}

string askClassTaken() {
    cout << "What classes have you taken from the list above?" << endl;
    cout << "If a class has special marking with #/*, include that in your answer"  << endl;
    cout << "Enter class name one by 1: (0 to stop)" << endl;

    string className;
    
    getline(cin,className);
    
    for (auto& x : className) {
        x = toupper(x);
    }
    return className;
}


int main(int argc, const char * argv[]) {
    string BerkeleyCS[] = {"MATH 3A", "MATH 3B", "MATH 3E",
                           "MATH 3F", "CIS 25", "CIS 27", "CIS 61"};
    string BerkeleyEECS[] = {"MATH 3A", "MATH 3B", "MATH 3C",
                             "MATH 3E", "MATH 3F", "CIS 25",
                             "CIS 27", "CIS 61", "PHYSICS 4A",
                             "PHYSICS 4B", "ENGL 1A", "ENGL 1B"};
    string BerkeleyDS[] = {"MATH 3A", "MATH 3B", "MATH 3E", "MATH 3F",
                           "CIS 25", "CIS 27", "CIS 61", "CIS 118"};
    string DavisCS[] = {"MATH 3A", "MATH 3B", "MATH 3C",
                        "MATH 3E", "MATH 11", "#CIS 6", "#CIS 61",
                        "##CIS 25", "##CIS 36A", "##CIS 36B", "CIS 27", "CIS 20"};
    string DavisDS[] = {"MATH 3A", "MATH 3B", "MATH 3C" ,
                        "MATH 3E", "MATH 13", "#CIS 6", "#CIS 61"};
    string IrvineCS[] = {"MATH 3A", "MATH 3B", "MATH 3E",
                         "#*CIS 6", "#*CIS 25", "##*CIS 36A", "##*CIS 36B", "CIS 20"};
    string IrvineDS[] = {"MATH 3A", "MATH 3B", "MATH 3C", "MATH 3E", "MATH 13",
                         "#*CIS 6", "#*CIS 25", "##*CIS 36A", "##*CIS 36B", "CIS 20"}; // comment instructions
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
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = BerkeleyCS[i];
        }
        string classTaken = "scdasfas"; // random string
        cout << endl;
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, BerkeleyCS, classesToTake, size);
        }
        printClassList(program, classesToTake, size);
        // "" no matching class
        // remove -- later and white space
    }
    else if (program == "UC Berkeley EECS"){
        int size = sizeof(BerkeleyEECS) / sizeof(BerkeleyEECS[0]);
        printClassList(program, BerkeleyEECS, size);
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = BerkeleyEECS[i];
        }
        string classTaken = "scdasfas"; // random string
        cout << endl;
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, BerkeleyEECS, classesToTake, size);
        }
        printClassList(program, classesToTake, size);
    }
    else if (program == "UC Berkeley Data Science") {
        int size = sizeof(BerkeleyDS) / sizeof(BerkeleyDS[0]);
        printClassList(program, BerkeleyDS, size);
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = BerkeleyDS[i];
        }
        string classTaken = "scdasfas"; // random string
        cout << endl;
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, BerkeleyDS, classesToTake, size);
        }
        printClassList(program, classesToTake, size);
    }
    else if (program == "UC Davis Computer Science") {
        int size = sizeof(DavisCS) / sizeof(DavisCS[0]);
        printClassList(program, DavisCS, size);
        cout << "Pay attention:\n" << "For UC Davis Compsci, you can choose between CIS 6 or CIS 61.";
        cout << " You can also choose between CIS 25, CIS 36A, or CIS 36B\n";
        cout << "In total, you only need 2 CIS classes from the two areas" << endl;
        
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = DavisCS[i];
        }
        string classTaken = "scdasfas"; // random string
        cout << endl;
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, DavisCS, classesToTake, size);
            optionalClassAllocator("UC Davis Computer Science", classTaken, classesToTake, size);
        }
        printClassList(program, classesToTake, size);
    }
    else if (program == "UC Davis Data Science") {
        int size = sizeof(DavisDS) / sizeof(DavisDS[0]);
        printClassList(program, DavisDS, size);
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = DavisDS[i];
        }
        string classTaken = "scdasfas"; // random string
        cout << endl;
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, DavisDS, classesToTake, size);
        }
        printClassList(program, classesToTake, size);
    }
    else if (program == "UC Irvine Computer Science"){
        int size = sizeof(IrvineCS) / sizeof(IrvineCS[0]);
        printClassList(program, IrvineCS, size);
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = IrvineCS[i];
        }
        string classTaken = "scdasfas"; // random string
        cout << endl;
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, IrvineCS, classesToTake, size);
        }
        printClassList(program, classesToTake, size);
    }
    else if (program == "UC Irvine Data Science"){
        int size = sizeof(IrvineDS) / sizeof(IrvineDS[0]);
        printClassList(program, IrvineDS, size);
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = IrvineDS[i];
        }
        string classTaken = "scdasfas"; // random string
        cout << endl;
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, IrvineDS, classesToTake, size);
        }
        printClassList(program, classesToTake, size);
    }
    
    return 0;
}

