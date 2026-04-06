#include <iostream>
#include <limits>
#include "src/hello.hpp"


using namespace std;

void mainmenushowcase() {

    std::cout<<""<<"\n";
    std::cout<<"[Gradebook]"<<"\n";
    std::cout<<""<<"\n";
    cout<<"1. Add a student"<<"\n";
    cout<<"2. Add a assignment"<<"\n";
    cout<<"3. Enter a grade"<<"\n";
    cout<<"4. Get report"<<"\n";
    cout<<"5. Leave, thanks for using the program!"<<"\n";
    std::cout<<""<<"\n";
    std::cout<<"-----------------"<<"\n";
    cout<<"Select one of the following options:"<<"\n";

}

int main() {

    Gradebook gradebook;
    int userselection = -1;

    while (userselection != 0) {
        mainmenushowcase();

        if (!(cin >> userselection)) {
            std::cin.clear();
            std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
            std::cout<<"Wrong user input.";
            continue;

        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (userselection == 1) {
            std::string firstname;
            std::string lastname;
            std::string studentid;


            cout<<"Enter students first name: ";
            getline(cin, firstname);

            cout<<"Enter student last name: ";
            getline(cin, lastname);

            cout<<"Enter student id: ";
            getline(cin, studentid);

            if (gradebook.addstudent(firstname, lastname, studentid)) {
                std::cout<<"Success! Your student is now in this class.";
            }else {
                std::cout<<"Can't add this student in.";
            }
        }else if (userselection == 2) {
            std::string assignmentname;
            int sumofpoints;

            cout<<"Enter assignment name: ";
            getline(cin, assignmentname);

            cout<<"Enter number of full points: ";
            cin>>sumofpoints;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if (gradebook.addassignment(assignmentname, sumofpoints)) {
                std::cout<<"Success! Assignment had been added to the system.";
            }else {
                std::cout<<"Can't add this assignment.";
            }
        }else if (userselection == 3) {

            string studentid;
            string assignmentname;
            int grade;

            std::cout<<"Enter the student id: ";
            getline(cin, studentid);

            std::cout<<"Enter the assignment name: ";
            getline(cin, assignmentname);


            std::cout<<"Enter the grade: ";
            cin>>grade;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if (gradebook.enteryourgrade(studentid, assignmentname, grade)) {
                std::cout<<"Grade has been entered into the system.";

            }else {
                std::cout<<"Can't enter this grade.";
            }


        } else if (userselection ==4) {
            std::cout<<"\n"<<gradebook.report()<<"\n";
        } else if (userselection ==0) {
            std::cout<<"Thanks for using the program!";
        }else {
            "This selection does not exist.\n";
        }
    }
    return 0;
};
