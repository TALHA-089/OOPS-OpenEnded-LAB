#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;





class Course;

class Teacher {

private:
	string teacherID;
	string name;
	string email;
	vector<Course> coursesTaught;


public:

	void setTeacherIO( string& teacherID) {


		this->teacherID = teacherID;

	}

	string getTeacherID() {


		return this->teacherID;
	}



	void setTeacherName(string& name) {

          
		this->name = name;

	}


	string getTeacherName() {

		return this->name;
	}

	void setTeacherEmail(string& email) {


		this->email = email;

	}

	string getTeacherEmail() {

		return this->email;
	}


	void AssignCourse( const Course& course){

		coursesTaught.push_back(course);

	}



};




