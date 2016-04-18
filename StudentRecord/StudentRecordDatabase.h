#pragma once
#include <unordered_map>
#include <iostream>
#include "StudentRecord.h"

using namespace std;

class StudentRecordDatabase {

public:
	StudentRecordDatabase(vector<StudentRecord> entries);
	StudentRecordDatabase(StudentRecord entry);
	StudentRecordDatabase();
	bool addStudent(StudentRecord entry);
	bool removeStudent(StudentRecord entry);
	void printDatabase();
	bool updateClasses(StudentRecord student, vector<string> classes);
	bool updateClasses(StudentRecord student, string classIn);
	bool removeClasses(StudentRecord student, string classIn);
private:
	int numStudents;
	unordered_map<int, StudentRecord> hashTable;
};