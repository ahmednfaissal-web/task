#pragma once
#include "Course.h"
#include<iostream>
using namespace std;
#include<string>
class Exam :
    public Course
{private:
    float examScore;
	int examid;
	int examduration;
public:
    Exam();
    Exam(string name, int code, float score, int id, int duration):Course(name, code){
        examScore = score;
        examid = id;
        examduration = duration;
    };
	Exam(const Exam& other) : Course(other) {
		examScore = other.examScore;
		examid = other.examid;
		examduration = other.examduration;
	}
    void setExamScore(float score){
        examScore = score;
    }
    float getExamScore(){
        return examScore;
    }
};
