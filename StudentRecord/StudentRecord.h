#pragma once
#ifndef __STUDENTRECORD
#define __STUDENTRECORD
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class StudentRecord
{
public:
	//constructors
	StudentRecord(string name, int ID, vector<string> classes);
	StudentRecord(string name, int ID, string classes);
	StudentRecord(string name, int ID);
	StudentRecord(string name);
	StudentRecord(int ID);
	StudentRecord();
	//deconstructor
	~StudentRecord();
	//get and set names
	string getName();
	void setName(string name);
	//methods for modifying classes
	vector<string> getClasses();
	void addClass(string classIn);
	void removeClass(string classIn);
	void setClasses(vector<string> classes);
	bool containsClass(string classIn);
	//check if classmate shares a class
	bool inClassWith(StudentRecord classmate);
	string StudentRecord::sharedClass(StudentRecord classmate);
	vector<string> StudentRecord::sharedClasses(StudentRecord classmate);
	//get and set ID
	//NOTE: may need to move to protected to work with database
	int getID();
	void setID(int ID);
private:
	string name;
	int ID;
	vector<string> classes;
};

#endif