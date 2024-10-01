//
//  main.cpp
//  StudentTransferPlanner
//
//  Created by Parsa Faraji on 9/18/24.
//


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;
// USE FUNCTION PROTOYTPING

// create several files for functions
// give campus sepcfic advice
// Give campus suggestions lol
// Apply order in taking classes

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

void printCampanille(){
    cout << endl;
    std::cout << "         /\\"                << std::endl;
    std::cout << "        /  \\"               << std::endl;
    std::cout << "       /    \\"              << std::endl;
    std::cout << "      /      \\"             << std::endl;
    std::cout << "     /        \\"            << std::endl;
    std::cout << "    /          \\"           << std::endl;
    std::cout << "   /            \\"          << std::endl;
    std::cout << "  /              \\"         << std::endl;
    std::cout << " /                \\"        << std::endl;
    std::cout << "/__________________\\"        << std::endl;
    std::cout << " |    CAMPANILE  |"       << std::endl;
    std::cout << " |               |"        << std::endl;
    std::cout << " |    ________   |"       << std::endl;
    std::cout << " |   |        |  |"       << std::endl;
    std::cout << " |   |        |  |"       << std::endl;
    std::cout << " |   |        |  |"       << std::endl;
    std::cout << " |   |        |  |"       << std::endl;
    std::cout << " |   |________|  |"       << std::endl;
    std::cout << " |               |"        << std::endl;
    std::cout << " |               |"        << std::endl;
    std::cout << " |               |"            << std::endl;
    std::cout << " |               |"            << std::endl;
    std::cout << "   ////////////"        << std::endl;
    std::cout << "  //////////////"         << std::endl;
    std::cout << " ////////////////"       << std::endl;
    std::cout << "///////////////////"       << std::endl;
}

void printDavis() {
        cout << endl;
        std::cout << "          _____         " << std::endl;
        std::cout << "        /      \\       " << std::endl;
        std::cout << "       |  UC    |      " << std::endl;
        std::cout << "       |  DAVIS |      " << std::endl;
        std::cout << "       \\______/       " << std::endl;
        std::cout << "           |||         " << std::endl;
        std::cout << "           |||         " << std::endl;
        std::cout << "           |||         " << std::endl;
        std::cout << "           |||         " << std::endl;
        std::cout << "           |||         " << std::endl;
        std::cout << "         /    \\        " << std::endl;
        std::cout << "        /      \\       " << std::endl;
        std::cout << "       /        \\      " << std::endl;
        std::cout << "      /          \\     " << std::endl;
        std::cout << "     / WATER TOWER\\    " << std::endl;
        std::cout << "    /_____________ \\   " << std::endl;
}

void printIrvine(){
    cout << endl;
    std::cout << "        .-^-.-^-.-.       " << std::endl;
    std::cout << "     .-'            '-.    " << std::endl;
    std::cout << "   .'                  '.   " << std::endl;
    std::cout << "  /                      \\  " << std::endl;
    std::cout << " |    UC IRVINE          | " << std::endl;
    std::cout << "  \\                    /   " << std::endl;
    std::cout << "   '.                .'     " << std::endl;
    std::cout << "     '-.__________.-'       " << std::endl;
    std::cout << "          /      \\          " << std::endl;
    std::cout << "         /        \\         " << std::endl;
    std::cout << "        /          \\        " << std::endl;
    std::cout << "       /            \\       " << std::endl;
    std::cout << "      /______________\\      " << std::endl;
    std::cout << "     IRVINE SPECTRUM      " << std::endl;
}

void printSketch(){
    cout << endl;
    std::cout << "         /\\"                << "          _____         " << std::endl;
    std::cout << "        /  \\"               << "        /      \\       " << std::endl;
    std::cout << "       /    \\"              << "       |  UC    |      " << std::endl;
    std::cout << "      /      \\"             << "       |  DAVIS |      " << std::endl;
    std::cout << "     /        \\"            << "       \\______/       " << std::endl;
    std::cout << "    /          \\"           << "           |||         " << std::endl;
    std::cout << "   /            \\"          << "           |||         " << std::endl;
    std::cout << "  /              \\"         << "           |||         " << std::endl;
    std::cout << " /                \\"        << "           |||         " << std::endl;
    std::cout << "/____UC Berkeley___\\"       << "           |||         " << std::endl;
    std::cout << " |    CAMPANILE  |"          << "         /    \\        " << std::endl;
    std::cout << " |               |"          << "        /      \\       " << std::endl;
    std::cout << " |    ________   |"          << "       /        \\      " << std::endl;
    std::cout << " |   |        |  |"          << "      /          \\     " << std::endl;
    std::cout << " |   |        |  |"          << "     / WATER TOWER\\    " << std::endl;
    std::cout << " |   |        |  |"          << "    /_____________ \\   " << std::endl;
    std::cout << " |   |        |  |"       << std::endl;
    std::cout << " |   |________|  |"       << std::endl;
    std::cout << " |               |"        << std::endl;
    std::cout << " |               |"        << std::endl;
    std::cout << " |               |"            << std::endl;
    std::cout << " |               |"            << std::endl;
    std::cout << "   ////////////"        << std::endl;
    std::cout << "  //////////////"         << std::endl;
    std::cout << " ////////////////"       << std::endl;
    std::cout << "///////////////////"       << std::endl;
   
}

int getSchoolChoice(){
    cout << "What school do you want to transfer to?(Choose from below)\n";
    cout << setw(20) << "1)UC Berekley" << setw(20) << "2)UC Davis" << setw(20) << "3)UC Irvine";
    printCampanille();

    printDavis();
    
    printIrvine();
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
    if (program == "UC Davis Computer Science" || program == "UC Davis Data Science") {
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
    else if (program == "UC Irvine Computer Science" || program == "UC Irvine Data Science") {
        if (className[0] == '#' && className[1] != '#') {
            for (int j = 0; j < size; j++) {
                if (classesToTake[j][0] == '#' && classesToTake[j][1] == '#') {
                    classesToTake[j] = "";
                    // best path for student
                }
            }
        }
        else if (className[0] == '#' && className[1] == '#') {
            for (int j = 0; j < size; j++) {
                if (classesToTake[j][0] == '#' && classesToTake[j][1] != '#') {
                    classesToTake[j] = "";
                }
            }
        }
    }
}

void printClassTakenMessage(){
    cout << "What classes have you taken from the list above?" << endl;
    cout << "If a class has special marking with #/*, include that in your answer"  << endl;
}
string askClassTaken() {
    cout << "Enter class name one by one: (0 to stop)" << endl;
    
    string className;

    getline(cin,className);
    
    while (className == "") {
        getline(cin,className);
    }
    
    for (auto& x : className) {
        x = toupper(x);
    }
    return className;
}

int checkClassOrder(int i, string className, string* classesToTake, int size) {
    string mathSequence[] = {"MATH 3A", "MATH 3B", "MATH 3C"};
    string cisSequence[] = {"CIS 6", "CIS 25", "CIS 27"};
    string cisSequenceJava[] = {"CIS 36A", "CIS 36B"};
    string physSequence[] = {"PHYSICS 4A", "PHYSICS 4B", "PHYSICS 4C"};
    string englSequence[] = {"ENGL 1A", "ENGL 1B"};
    
    if (className == "MATH 3B" || className == "MATH 3C") {
        for (int i = 0; i < size; i++) {
            if (className == classesToTake[i]) {
                return i - 1;
            }
        }
    }
    
    else if (className == "CIS 25" || className == "CIS 27") {
        for (int i = 0; i < size; i++) {
            if (className == classesToTake[i]) {
                return i - 1;
            }
        }
    }
    else if (className == "PHYSICS 4B" || className == "PHYSICS 4C") {
        for (int i = 0; i < size; i++) {
            if (className == classesToTake[i]) {
                return i - 1;
            }
        }
    }
    else if (className == "ENGL 1B") {
        for (int i = 0; i < size; i++) {
            if (className == classesToTake[i]) {
                return i - 1;
            }
        }
    }
    return i;
}
    
// add semester and some fancy details
void educationPlanGenerator(string studentName, string* classesToTake, int size) {
    int classes;
    cout << "How many classes do you want to take per semester? \n";
    cin >> classes;
    string classSchedule[classes];
    long elapsedSeconds = time(0);
    srand(elapsedSeconds);
    int randNum;
    int currentClassNum = 0;
    int classesLeft = size;
    
    for (int i = 0; i < size; i++) {
        if (classesToTake[i] == "") {
            classesLeft--;
        }
    }
    
    int semesterNumber = 1;
    
    // do some formatting to put it at the center
    cout << "Customized Student Education Plan for " << studentName << ":\n";
    // message readiness for transfer
    while (classesLeft > 0){
//        cout << randNum;
//        cout << endl;
        cout << "Semester " << semesterNumber << ":\n"; // move it !!
        if (classesLeft <= classes) {
            for (int i = 0; i < size; i++) {
                if (classesToTake[i] != "") {
                    cout << classesToTake[i] << "\n";
                }
            } // give warning for taking too many classes at once
            break;
        }
        else {
            currentClassNum = 0;
            while (currentClassNum < classes) {
                // size
                randNum = (rand() % size);
              //  cout << "\n" << randNum << "\n";
                if (classesToTake[randNum] != "") {
                    //classSchedule[randNum] = classesToTake[randNum];
                    classesLeft--;
                    currentClassNum++;
                    cout << classesToTake[randNum] << endl;
                    classesToTake[randNum] = "";
                }
            }
        }
        semesterNumber++;
    }
    
}
// Make main function super small
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
        cout << "Here's a list of all classes you need to take at Peralta:" << endl;
        printClassList(program, BerkeleyCS, size);
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = BerkeleyCS[i];
        }
        string classTaken = "scdasfas"; // random string
        printClassTakenMessage();
        while (classTaken != "0"){
//            cout << "before: " << classTaken << endl;
            classTaken = askClassTaken();
//            cout << "after: " << classTaken << endl;
            classFinder(classTaken, BerkeleyCS, classesToTake, size);
        }
        cout << "Here are all classes you should take later on before you transfer." << endl;
        printClassList(program, classesToTake, size);
        
        educationPlanGenerator(name, classesToTake, size);
        // "" no matching class
        // remove -- later and white space
    }
    else if (program == "UC Berkeley EECS"){
        int size = sizeof(BerkeleyEECS) / sizeof(BerkeleyEECS[0]);
        cout << "Here's a list of all classes you need to take at Peralta:" << endl;
        printClassList(program, BerkeleyEECS, size);
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = BerkeleyEECS[i];
        }
        string classTaken = "scdasfas"; // random string
        printClassTakenMessage();
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, BerkeleyEECS, classesToTake, size);
        }
        cout << "Here are all classes you should take later on before you transfer." << endl;
        printClassList(program, classesToTake, size);
        educationPlanGenerator(name, classesToTake, size);
    }
    else if (program == "UC Berkeley Data Science") {
        int size = sizeof(BerkeleyDS) / sizeof(BerkeleyDS[0]);
        cout << "Here's a list of all classes you need to take at Peralta:" << endl;
        printClassList(program, BerkeleyDS, size);
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = BerkeleyDS[i];
        }
        string classTaken = "scdasfas"; // random string
        printClassTakenMessage();
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, BerkeleyDS, classesToTake, size);
        }
        cout << "Here are all classes you should take later on before you transfer." << endl;
        printClassList(program, classesToTake, size);
        educationPlanGenerator(name, classesToTake, size);
    }
    else if (program == "UC Davis Computer Science") {
        int size = sizeof(DavisCS) / sizeof(DavisCS[0]);
        cout << "Here's a list of all classes you need to take at Peralta:" << endl;
        printClassList(program, DavisCS, size);
        cout << "Pay attention:\n" << "For UC Davis Compsci, you can choose between CIS 6 or CIS 61.";
        cout << " You can also choose between CIS 25, CIS 36A, or CIS 36B\n";
        cout << "In total, you only need 2 CIS classes from the two areas" << endl;
        
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = DavisCS[i];
        }
        string classTaken = "scdasfas"; // random string
        printClassTakenMessage();
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, DavisCS, classesToTake, size);
            optionalClassAllocator("UC Davis Computer Science", classTaken, classesToTake, size);
        }
        cout << "Here are all classes you should take later on before you transfer." << endl;
        printClassList(program, classesToTake, size);
        educationPlanGenerator(name, classesToTake, size);
        // error offering both CIS 6 and CIS 61 when nothing entered!
    }
    else if (program == "UC Davis Data Science") {
        int size = sizeof(DavisDS) / sizeof(DavisDS[0]);
        cout << "Here's a list of all classes you need to take at Peralta:" << endl;
        printClassList(program, DavisDS, size);
        // ADD WARNING MESSAGE Davis
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = DavisDS[i];
        }
        string classTaken = "scdasfas"; // random string
        printClassTakenMessage();
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, DavisDS, classesToTake, size);
            optionalClassAllocator("UC Davis Data Science", classTaken, classesToTake, size);
        }
        cout << "Here are all classes you should take later on before you transfer." << endl;
        printClassList(program, classesToTake, size);
        educationPlanGenerator(name, classesToTake, size);
    }
    else if (program == "UC Irvine Computer Science"){
        int size = sizeof(IrvineCS) / sizeof(IrvineCS[0]);
        cout << "Here's a list of all classes you need to take at Peralta:" << endl;
        // ADD WARNING MESSAGE IRVINE
        printClassList(program, IrvineCS, size);
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = IrvineCS[i];
        }
        string classTaken = "scdasfas"; // random string
        printClassTakenMessage();
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, IrvineCS, classesToTake, size);
            optionalClassAllocator("UC Irvine Computer Science", classTaken, classesToTake, size);
            
        }
        cout << "Here are all classes you should take later on before you transfer." << endl;
        printClassList(program, classesToTake, size);
        educationPlanGenerator(name, classesToTake, size);
    }
    else if (program == "UC Irvine Data Science"){
        int size = sizeof(IrvineDS) / sizeof(IrvineDS[0]);
        cout << "Here's a list of all classes you need to take at Peralta:" << endl;
        // ADD WARNING MESSAGE IRVINE
        printClassList(program, IrvineDS, size);
        string classesToTake[size];
        for (int i = 0; i < size; i++) {
            classesToTake[i] = IrvineDS[i];
        }
        string classTaken = "scdasfas"; // random string
        printClassTakenMessage();
        while (classTaken != "0"){
            classTaken = askClassTaken();
            classFinder(classTaken, IrvineDS, classesToTake, size);
            optionalClassAllocator("UC Irvine Data Science", classTaken, classesToTake, size);
        }
        cout << "Here are all classes you should take later on before you transfer." << endl;
        printClassList(program, classesToTake, size);
        educationPlanGenerator(name, classesToTake, size);
    }
    return 0;
}

