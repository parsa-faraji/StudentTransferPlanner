//
//  util.cpp
//  StudentTransferPlanner
//
//  Created by Parsa Faraji on 10/2/24.
//

#include "util.hpp"
using namespace std;

// returns the name of the student
string getName() {
    string name;
    cout << "SECTION 1: STUDENT NAME" << endl;
    cout << "------------------------------------------------------------\n";
    cout << "Please Enter your name: \n";
    cout << "Answer: ";
    getline(cin,name);
    
    return name;
}
// returns major choice as an integer
int getMajorChoice(){
    cout << "\n************************************************************\n";
    cout << "SECTION 2: STUDENT MAJOR" << endl;
    cout << "------------------------------------------------------------\n";
    cout << "Please select your major: (Choose from 1 - 3)\n\n";
    // If answer is EECS,  don't ask for school!
    // CSE Davis
    cout << left << setw(25) << "1) Computer Science" << setw(25) << "2) Data Science" << setw(25) << "3) EECS(UC Berkeley)" << endl;
    int majorChoice;
    cout << "Answer: ";
    cin >> majorChoice;
    return majorChoice;
}


// returns school choice as integer
int getSchoolChoice(){
    cout << "************************************************************\n";
    cout << "SECTION 3: STUDENT'S INTENDED SCHOOL" << endl;
    cout << "------------------------------------------------------------\n";
    cout << "What school do you want to transfer to?(Choose from 1 - 3)\n\n";
    cout << setw(18) << "1)UC Berekley" << setw(18) << "2)UC Davis" << setw(18) << "3)UC Irvine";
    printSketch();
    int schoolChoice;
    cout << "\nAnswer: ";
    cin >> schoolChoice;
    return schoolChoice;
}

// prints a welcome message about the program to the user
void printWelcomeMessage() {
    
    // get the timestamp for the current date and time
    time_t timestamp;
    time(&timestamp);

    cout << "Today's Date & Time: " << endl;
    // display the date and time represented by the timestamp
    cout << ctime(&timestamp) << endl;
    cout << "************************************************************\n";
    cout << "Welcome!\n";
    cout << "This program is a Student Education Planner designed for \n";
    cout << "students at Peralta colleges intending to transfer into Computer/Data \n";
    cout << "Science undergraduate programs. Available Schools as of now are UC Berkeley, ";
    cout << "UC Davis, and UC Irvine.\n";
    cout << "************************************************************\n";
}


// converts major choice from int to string
string findMajorTitle(int majorChoice) {
        switch (majorChoice) {
            case 1:
                return "Computer Science";
            case 2:
                return "Data Science";
            case 3:
                return "EECS";
            default:
                cout << "\n^^^Invalid selection^^^\n";
                cin.clear();
                // discard the invalid input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                // if invalid, prompt again
                return(findMajorTitle(getMajorChoice()));
        }
}
// converts school choice from int to string
string findSchoolName(int schoolChoice) {
    switch (schoolChoice) {
        case 1:
            return "UC Berkeley";
        case 2:
            return "UC Davis";
        case 3:
            return "UC Irvine";
        default:
            cout << "\n^^^Invalid selection^^^\n";
            cin.clear();
            // discard the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            // if invalid, prompt again
            return(findSchoolName(getSchoolChoice()));
    }
}

// prints the list of classes from an array
void printClassList(string* classes, int size) {
    cout << "************************************************************\n";
    int j = 1;
    for (int i = 0; i < size; i++) {
        cout << classes[i];
        if ((i != size - 1) && (classes[i] != ""))
            cout << " - ";
        if (j % 4 == 0)
            cout << "\n";
        j++;
    }
    if ((j-1) % 4 != 0)
        cout << endl;
    cout << "************************************************************\n";
}

// prints a sketch of university attractions for display
void printSketch(){
    cout << endl;
    std::cout << "      /\\      " <<"     _____      " << "     . -^-.-^.    " << std::endl;
    std::cout << "     /  \\     " <<"    /     \\    " << "    .-         -.   " << std::endl;
    std::cout << "    /    \\    " <<"   | UC    |    " << "   /           \\   " << std::endl;
    std::cout << "   /      \\   " <<"   | DAVIS |    " << "   | UC IRVINE  |   " << std::endl;
    std::cout << "  /--------\\  " <<"    \\_____/    " << "     \\          /  " << std::endl;
    std::cout << " /    UCB   \\ " <<"      |||       " << "      '.     .'    " << std::endl;
    std::cout << " |Campanile |  " <<"     |||       " << "       /  \\      " << std::endl;
    std::cout << " |   ___    |  " <<"    /    \\     " << "       /    \\     " << std::endl;
    std::cout << " |  |   |   |  " <<"   /      \\    " << "      /      \\    " << std::endl;
    std::cout << " |  |___|   |  " <<"  /WaterTwr\\   " << "     /Spectrum\\   " << std::endl;
    std::cout << " |__________|  " <<" /__________\\  " << std::endl;

}
// determines the program taken by the user and generates ed plan accordingly
void programDeterminator(string name, string program) {
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
    
    if (program == "UC Berkeley Computer Science") {
        int size = sizeof(BerkeleyCS) / sizeof(BerkeleyCS[0]);
        string classesToTake[size];
        showProgramReqs(program, BerkeleyCS, classesToTake, size);
        educationPlanGenerator(name, classesToTake, size);

    }
    else if (program == "UC Berkeley EECS"){
        int size = sizeof(BerkeleyEECS) / sizeof(BerkeleyEECS[0]);
        string classesToTake[size];
        showProgramReqs(program, BerkeleyEECS, classesToTake, size);
        educationPlanGenerator(name, classesToTake, size);
    }
    else if (program == "UC Berkeley Data Science") {
        int size = sizeof(BerkeleyDS) / sizeof(BerkeleyDS[0]);
        string classesToTake[size];
        showProgramReqs(program, BerkeleyDS, classesToTake, size);
        educationPlanGenerator(name, classesToTake, size);
    }
    else if (program == "UC Davis Computer Science") {
        int size = sizeof(DavisCS) / sizeof(DavisCS[0]);
        string classesToTake[size];
        showProgramReqs(program, DavisCS, classesToTake, size);
        cout << "Classes marked with # are either/or, meaning taking one from the two is sufficient" << endl;
        cout << "************************************************************\n";
        educationPlanGenerator(name, classesToTake, size);
    }
    else if (program == "UC Davis Data Science") {
        int size = sizeof(DavisDS) / sizeof(DavisDS[0]);
        string classesToTake[size];
        showProgramReqs(program, DavisDS, classesToTake, size);
        cout << "Classes marked with # are either/or, meaning taking one from the two is sufficient" << endl;
        cout << "************************************************************\n";
        educationPlanGenerator(name, classesToTake, size);
    }
    else if (program == "UC Irvine Computer Science"){
        int size = sizeof(IrvineCS) / sizeof(IrvineCS[0]);
        string classesToTake[size];
        showProgramReqs(program, IrvineCS, classesToTake, size);
        cout << "Classes marked with same number of # belong to the same sequence," << endl;
        cout << "and among them classes marked with * should be completed together." << endl;
        cout << "************************************************************\n";
        educationPlanGenerator(name, classesToTake, size);
    }
    else if (program == "UC Irvine Data Science"){
        int size = sizeof(IrvineDS) / sizeof(IrvineDS[0]);
        string classesToTake[size];
        showProgramReqs(program, IrvineDS, classesToTake, size);
        cout << "Classes marked with same number of # belong to the same sequence," << endl;
        cout << "and among them classes marked with * should be completed together." << endl;
        cout << "************************************************************\n";
        educationPlanGenerator(name, classesToTake, size);
    }
}

// finds the class taken by the user and removes it from the list of classesToTake
void classFinder(string className, string* classList, string* classesToTake, int size) {
   // debug: printClassList("", classesToTake, size);
    for (int j = 0; j < size; j++) {
        if (className == classList[j]) {
            classesToTake[j] = "";
        }
    }
    // debug: printClassList("", classesToTake, size);
}

// makes sure a student doesn't take extra classes when they're optional (Class A OR Class B)
void optionalClassAllocator(string program, string className, string* classesToTake, int size) {
    if (program == "UC Davis Computer Science" || program == "UC Davis Data Science") {
        // identify if a class has optional marking (# / ##)
        if (className.substr(0,2) == "##") {
            for (int j = 0; j < size; j++) {
                if (classesToTake[j].substr(0,2) == "##") {
                    classesToTake[j] = "";
                }
            }
        }
        else if (className.substr(0,1) == "#") {
            for (int j = 0; j < size; j++) {
                if (classesToTake[j][0] == '#' && classesToTake[j][1] != '#') {
                    classesToTake[j] = "";
                }
            }
        }
    }
    else if (program == "UC Irvine Computer Science" || program == "UC Irvine Data Science") {
        if (className[0] == '#' && className[1] != '#') {
            for (int j = 0; j < size; j++) {
                if (classesToTake[j][0] == '#' && classesToTake[j][1] == '#') {
                    classesToTake[j] = "";

                }
            }
        }
        else if (className.substr(0,2) == "##") {
            for (int j = 0; j < size; j++) {
                if (classesToTake[j].substr(0,2) == "##") {
                    classesToTake[j] = "";
                }
            }
        }
    }
}

// prints the message to screen for classesTaken
void printClassTakenMessage(){
    cout << "What classes have you taken from the list above?" << endl;
    cout << "(If a class has special marking with #/*, include that in your answer)"  << endl;
    cout << "(Use one space between subject and course number such as MATH 3A)" << endl;
}

// returns the className taken by the user
string askClassTaken() {
    cout << "Enter class name one by one: (0 to stop)" << endl;
    string className;

    getline(cin,className);
    
    while (className == "") {
        getline(cin,className);
    }
    // convert class name to uppercase
    for (auto& x : className) {
        x = toupper(x);
    }
    return className;
}

// checks class order to see if class of previous sequence has been taken
bool checkClassOrder(int num ,string* classesToTake){
    if (((classesToTake[num] == "MATH 3B") || (classesToTake[num] == "MATH 3C") || (classesToTake[num] == "CIS 27") || (classesToTake[num] == "##*CIS 36B") ||
        (classesToTake[num] == "#*CIS 25")) && (classesToTake[num-1] != "")){
        cout << classesToTake[num-1] << endl;
        classesToTake[num-1] = "";
        return true;
    }
    
    else
        return false;
}
    
// shows program course requirements for a specific undergrad program
void showProgramReqs(string programName, string* requiredClasses, string* classesToTake, int size) {
    cout << "************************************************************\n";
    cout << "SECTION 4: Courses Required for Transfer" <<endl;
    cout << "------------------------------------------------------------\n";
    
    cout << "Here's a list of all classes you need to take at Peralta:" << endl;
    printClassList(requiredClasses, size);
    for (int i = 0; i < size; i++) {
        classesToTake[i] = requiredClasses[i];
    }
    string classTaken = "scdasfas"; // random string
    printClassTakenMessage();
    while (classTaken != "0"){
        classTaken = askClassTaken();
        classFinder(classTaken, requiredClasses, classesToTake, size);
    }
    cout << "\nHere are all classes you should take later on before you transfer." << endl;
    printClassList(classesToTake, size);
}


// generates a random education plan for the user
void educationPlanGenerator(string studentName, string* classesToTake, int size) {

    cout << "SECTION 5: Customized Education Plan" <<endl;
    cout << "------------------------------------------------------------\n";
    int classesPerSemester;

    while (true) {
        cout << "How many classes do you want to take per semester? \n";
        cout << "Answer: ";
        cin >> classesPerSemester;

        if (cin.fail() || (classesPerSemester == 0)) {
            // clear the fail state
            cin.clear();
            // discard the invalid input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid number.\n";
        } else {
            // valid input, exit the loop
            break;
        }
    }
        
    long elapsedSeconds = time(0);
    srand(static_cast<unsigned int>(elapsedSeconds));
    int randNum;
    int currentClassNum = 0;
    int classesLeft = size;
    
    // update classesLeft based on classesToTake
    for (int i = 0; i < size; i++) {
        if (classesToTake[i] == "") {
            classesLeft--;
        }
    }
    
    int semesterNumber = 1;
    
    cout << "Customized Student Education Plan for " << studentName << ":\n";

    bool classOrder = false;
    
    while (classesLeft > 0){
//   debug:      cout << randNum;
//   debug:      cout << endl;
        cout << "~~Semester " << semesterNumber << ":\n";
        if (classesLeft <= classesPerSemester) {
            for (int i = 0; i < size; i++) {
                if (classesToTake[i] != "") {
                    cout << "+" << classesToTake[i] << "\n";
                }
            }
            break;
        }
        else {
            currentClassNum = 0;
            while (currentClassNum < classesPerSemester) {

                randNum = (rand() % size);
              //  debug: cout << "\n" << randNum << "\n";
                
                if (classesToTake[randNum] != "") {
                    classOrder = checkClassOrder(randNum, classesToTake);
                    //classSchedule[randNum] = classesToTake[randNum];
                    if (classOrder == false) {
                        cout << "+" << classesToTake[randNum] << endl;
                        classesToTake[randNum] = "";
                    }
                    classesLeft--;
                    currentClassNum++;
                }
            }
        }
        semesterNumber++;
        cout << "-----------\n";
    }
    cout << "************************************************************\n";
}
    
