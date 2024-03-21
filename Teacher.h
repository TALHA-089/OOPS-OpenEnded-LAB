#pragma once
#include<iostream>
#include<vector>
#include "Course.h"
#include<string>

using namespace std;


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

	void removeCourse(Course& course) {
		int count = 0;
		for (auto it: coursesTaught) {
			if (it.getCourseCode() == course.getCourseCode() ){
				auto it1 = find(coursesTaught.begin(), coursesTaught.end(), count);
			    coursesTaught.erase(it1);
				cout << "\n\nCourse Removed!" << endl;
				break;
			}

			count++;
		}
	}

	void viewCourses() const {

		int count = 0;
		for (auto it : coursesTaught) {

			cout << "\n\n-------------Course " << count + 1 << "-------------- ";
			cout << "\n\nCourse Code: " << it.getCourseCode();
			cout << "\n\nCourse Name: " << it.getCourseName();


		}
		

	}



};




