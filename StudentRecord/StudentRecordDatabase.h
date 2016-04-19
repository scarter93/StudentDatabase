#pragma once
#include <unordered_map>
#include <iostream>
#include "StudentRecord.h"

using namespace std;

class StudentRecordDatabase {

public:
	StudentRecordDatabase(vector<StudentRecord> &entries);
	StudentRecordDatabase(StudentRecord &entry);
	StudentRecordDatabase();
	~StudentRecordDatabase();
	bool addStudent(StudentRecord &entry);
	bool removeStudent(StudentRecord entry);

	StudentRecord &getStudentRecord(int ID);

	void printDatabase();

	bool updateClasses(int ID, vector<string> classes);
	bool updateClasses(int ID, string classIn);
	bool removeClass(int ID, string classIn);
private:
	int numStudents;
	unordered_map<int, StudentRecord> hashTable;
};