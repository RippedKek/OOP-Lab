#include <iostream>

using namespace std;

class Student{
private:
    string firstName;
    string lastName;
    string studentID;
    string course;
    int marks;
    int birthYear;
    float gpa;
public:
    void initDetails(string fName, string lName, string ID, string crs, int mark, int year){
        firstName = fName;
        lastName = lName;
        studentID = ID;
        course = crs;
        marks = mark;
        birthYear = year;
    }
    int displayAge(){
        return 2023-birthYear;
    }
    float calculateGPA(){
        if(marks>=80)
            return 4;
        else if(marks<80 && marks >=75)
            return 3.7;
        else if(marks>=70 && marks<75)
            return 3.5;
        else if(marks>=60 && marks<70)
            return 3.3;
        else if(marks>=50 && marks<60)
            return 3;
        else if(marks>=40 && marks<50)
            return 2.5;
        else
            return 0;
    }
    float displayGPA(){
        gpa = calculateGPA();
        return gpa;
    }
    void willGraduate(){
        if(calculateGPA())
            cout << "Will Graduate!" << endl;
        else
            cout << "Will not graduate!" << endl;
    }
    float updatedGPA(){
        marks += marks * 0.1;
        displayGPA();
        if(gpa>4) return 4;
        else return gpa;
    }
    void printTranscript(){
        cout << "STUDENT DETAILS" << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
        cout << "Birth Year: " << birthYear << endl;
        cout << "Age: " << displayAge() << endl;
        cout << "Obtained Marks: " << marks << endl;
        cout << "GPA: " << displayGPA() << endl;
        cout << "Updated GPA: " << updatedGPA() << endl;
        willGraduate();
    }
};

int main(){
    Student stdn;

    stdn.initDetails("Tanjeeb","Meheran","210041202","OOP Lab",65,2002);
    stdn.printTranscript();

    return 0;
}
