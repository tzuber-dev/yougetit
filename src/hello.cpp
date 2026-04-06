#include <string>


#include <sstream>
#include <iostream>
#include "hello.hpp"

using namespace std;

int Gradebook::findstudentindex(const std::string &studentId) const {
    for (int x=0; x < static_cast<int>(students.size()); x++) {
        if (students[x].studentId == studentId) {
            return x;
        };
    };
    return -1;
};


int Gradebook::findassignmentindex(const std::string &assignmentName) const {
     for (int c=0; c < static_cast<int>(assignments.size()); c++) {
         if (assignments[c].name == assignmentName){
             return c;
         };
     };
    return -1;
};


bool Gradebook::addstudent(const string &firstname, const string &lastname, const string &studentId) {

    if (findstudentindex(studentId) != -1) {
        return false;
    };

    Student newstudent;
    newstudent.firstname = firstname;
    newstudent.lastname = lastname;
    newstudent.studentId = studentId;

    students.push_back(newstudent);
    grade.push_back(vector<int>(assignments.size(),-1));
    return true;
};


bool Gradebook::addassignment(const string &nameofassignment, int sumofpoints) {
    if (sumofpoints < 0) {
        return false;
    };
    if (findassignmentindex(nameofassignment) != -1) {
        return false;

    };

    Assignment newassignment;
    newassignment.name = nameofassignment;
    newassignment.sumofpoints = sumofpoints;
    assignments.push_back(newassignment);

    for (int f =0; f < static_cast<int>(grade.size()); f++) {
       grade[f].push_back(-1);
    };
    return true;

};


bool Gradebook::enteryourgrade(const string studentId, const string &nameofassignment, int grade) {
    int indexofstudent = findstudentindex(studentId);


    int assignmentindex = findassignmentindex(nameofassignment);


    if (indexofstudent == -1 || assignmentindex == -1) {
        return false;
    };

    if (grade<0 || grade>assignments[assignmentindex].sumofpoints) {
        return false;
    };


    //grade[indexofstudent][assignmentindex] = grade;
    //return true;

};


string Gradebook::report() const {
    std::ostringstream oss;


    oss<<"Last Name, First Name, Id of Student";


    for (int h=0; h < static_cast<int>(assignments.size()); h++) {
        oss<<","<<assignments[h].name<<" ("<<assignments[h].sumofpoints<<")";

    }
    oss<<"\n";

    for (int j=0; j < static_cast<int>(students.size()); j++) {


        oss<<students[j].lastname<<",";
        oss<<students[j].firstname<<",";
        oss<<students[j].studentId<<",";

        for (int y=0; y < static_cast<int>(assignments.size()); y++) {


            if (grade[j][y] == -1) {
                oss<<",none";
            }else {
                oss<<","<<grade[j][y];
            }

        }
        if (j != static_cast<int>(students.size() -1)) {
          oss<<"\n";
        }

    }
    return oss.str();

};
