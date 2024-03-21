#pragma once
#include<iostream>
#include<vector>
#include "Course.h"

using namespace std;


class Student
{
private:

	string studentID;
	string Name;
	string Email;
	vector <Course> CoursesEnrolled;

public:

	void setStudentID(string studentID)
	{
		this->studentID = studentID;
	}

	void setName(string Name)
	{
		this->Name = Name;
	}

	void setEmail(string Email)
	{
		this->Email = Email;
	}

	string getStudentID()
	{
		return this->studentID;
	}

	string getName()
	{
		return this->Name;
	}

	string getEmail()
	{
		return this->Email;
	}

	vector <Course> getCoursesEnrolled()
	{
		return this->CoursesEnrolled;
	}

	void EnrollCourse(Course newCourse)
	{
		this->CoursesEnrolled.push_back(newCourse);
	}




	void ViewEnrolledCourses()
	{
		for (auto it : this->CoursesEnrolled)
		{
			cout << "\n\nCourse Code: " << it.getCourseCode();
			cout << "\n\nCourse Name: " << it.getCourseName();
			//cout << "\n\nCourse Teacher: " << it.getTeacher();
		}
	}


};