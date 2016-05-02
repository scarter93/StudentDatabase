#pragma once
#ifndef __DATABASE
#define __DATABASE
#include <unordered_map>
#include <iostream>
#include "StudentRecord.h"

using namespace std;

class StudentRecordDatabase {

public:
	//constructors
	StudentRecordDatabase(vector<StudentRecord> &entries);
	StudentRecordDatabase(StudentRecord &entry);
	StudentRecordDatabase();
	//deconstructors
	~StudentRecordDatabase();
	//add and remove students
	bool addStudent(StudentRecord &entry);
	bool removeStudent(StudentRecord entry);
	//retrieve student data
	StudentRecord &getStudentRecord(int ID);
	//print database
	void printDatabase();
	//for updating classes for student, returns pointer to record
	StudentRecord* updateClasses(int ID, vector<string> classes);
	StudentRecord* updateClasses(int ID, string classIn);
	StudentRecord* removeClass(int ID, string classIn);
private:
	int numStudents;
	unordered_map<int, StudentRecord> hashTable;
};

#endif