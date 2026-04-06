#include <string>

#include <vector>
#include <iostream>
using namespace std;


struct Student {
    string firstname;
    string lastname;
    string studentId;

};

struct Assignment {
    string name;
    int sumofpoints;

};


class Gradebook {
private:

    vector<Student> students;
    vector<Assignment> assignments;
    vector<vector<int>> grade;

    int findstudentindex(const std::string& studentId) const;
    int findassignmentindex(const std::string& nameofassignment) const;
public:
    bool addstudent(const string& firstname,const string& lastname, const string& studentId);
    bool addassignment(const string& nameofassignment, int sumofpoints);
    bool enteryourgrade(const string studentId, const string& nameofassignment, int grade);
    string report() const;


};
