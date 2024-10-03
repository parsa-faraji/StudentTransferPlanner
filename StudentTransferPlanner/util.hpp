//
//  util.hpp
//  StudentTransferPlanner
//
//  Created by Parsa Faraji on 10/2/24.
//

#ifndef util_hpp
#define util_hpp
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// function declarations
string getName();
int getMajorChoice();
void printSketch();
int getSchoolChoice();
void printWelcomeMessage();
string findMajorTitle(int majorChoice);
string findSchoolName(int schoolChoice);
void printClassList(string* classes, int size);
void classFinder(string className, string* classList, string* classesToTake, int size);
void optionalClassAllocator(string program, string className, string* classesToTake, int size);
void printClassTakenMessage();
string askClassTaken();
bool checkClassOrder(int num ,string* classesToTake);
void showProgramReqs(string programName, string* requiredClasses, string* classesToTake, int size);
void educationPlanGenerator(string studentName, string* classesToTake, int size);
void programDeterminator(string name, string program);
bool checkClassOrder(int num ,string* classesToTake);

#include <stdio.h>

#endif /* util_hpp */
