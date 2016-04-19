#pragma once
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class StudentRecord
{
public:
	StudentRecord(string name, int ID, vector<string> classes);
	StudentRecord(string name, int ID, string classes);
	StudentRecord(string name, int ID);
	StudentRecord(string name);
	StudentRecord(int ID);
	StudentRecord();
	~StudentRecord();
	string getName();
	void setName(string name);

	vector<string> getClasses();
	void addClass(string classIn);
	void removeClass(string classIn);
	void setClasses(vector<string> classes);
	bool containsClass(string classIn);
	bool inClassWith(StudentRecord classmate);
	string StudentRecord::sharedClass(StudentRecord classmate);
	vector<string> StudentRecord::sharedClasses(StudentRecord classmate);

	int getID();
	void setID(int ID);
private:
	string name;
	int ID;
	vector<string> classes;
};
