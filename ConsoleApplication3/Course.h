#pragma once
using namespace std;
#include<string>
class Course
{
private:
    string courseName;
    int courseCode;
public:
    Course(){
        courseName = "";
        courseCode = 0;
    }
    Course(string name, int code){
        courseName = name;
        courseCode = code;
    }
    void setCourseName(string name){
        courseName = name;
    }
    string getCourseName(){
        return courseName;
    }
    void setCourseCode(int code){
        courseCode = code;
    }
    int getCourseCode(){
        return courseCode;
    }
};

