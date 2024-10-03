//
//  main.cpp
//  StudentTransferPlanner
//
//  Created by Parsa Faraji on 9/18/24.
//

#include "util.hpp"

// main function
int main() {
    printWelcomeMessage();
    int repeat = 0;
    do {
        if (repeat == 1) {
            // get the timestamp for the current date and time
            time_t timestamp;
            time(&timestamp);
            
            // display the date and time represented by the timestamp
            cout << "Today's Date and Time:\n" << ctime(&timestamp) << endl;
        }
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
        
        
        programDeterminator(name, program);
        cout << "Do you want to start again?\n";
        cout << "Enter 1 for YES. Anything else will exit the program" << endl;
        cout << "Answer: ";

        cin >> repeat;
        cout << "************************************************************\n";
    } while (repeat == 1);
    
    return 0;
}

