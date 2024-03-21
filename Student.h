#pragma once
#include "Teacher.h"
#include "Student.h"

class Course
{
private:

	string CourseCode;
	string CourseName;
	Teacher teacher;
	vector <Student> StudentsEnrolled;

public:

	void setCourseCode(string CourseCode)
	{
		this->CourseCode = CourseCode;
	}

	void setCourseName(string CourseName)
	{
		this->CourseName = CourseName;
	}
	
	void setTeacher(Teacher teacher)
	{
		this->teacher = teacher;
	}

	string getCourseCode()
	{
		this->CourseCode = CourseCode;
	}

	string getCourseName()
	{
		return this->CourseName;
	}

	Teacher getTeacher()
	{
		return this->teacher;
	}

	vector <Student> getStudentsEnrolled()
	{
		return this->StudentsEnrolled;
	}

	void AddStudent(Student newStudent)
	{
		this->StudentsEnrolled.push_back(newStudent);
		cout << "\n\nStudent added Successfully.";
	}

	void RemoveStudent(Student newStudent)
	{
		int count = 0;

		for (auto it : this->StudentsEnrolled)
		{
			if (it.getStudentID() == newStudent.getStudentID())
			{
				auto it2 = find(StudentsEnrolled.begin(), StudentsEnrolled.end(), count);
				StudentsEnrolled.erase(it2);
				cout << "\n\nStudent Removed Successfully.";
				break;
			}
			cout << "\n\nStudent with this ID does not Exist";
		}
	}

	void ViewStudentsEnrolled()
	{
		int count = 0;
		for (auto it : StudentsEnrolled)
		{
			cout << "\n\n-------------Student " << count + 1 << "\n\n-------------";
			cout << "\n\nStudent ID: " << it.getStudentID();
			cout << "\n\nName: " << it.getName();
			cout << "\n\nEmail: " << it.getEmail();
		}
	}

};
