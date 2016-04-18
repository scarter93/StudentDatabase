#include "StudentRecord.h"

StudentRecord::StudentRecord(string name,int ID, vector<string> classes)
{
	this->name = name;
	this->ID = ID;
	this->classes = classes;
}

StudentRecord::StudentRecord(string name, int ID, string classes)
{
	this->name = name;
	this->ID = ID;
	this->classes.push_back(classes);
}

StudentRecord::StudentRecord(string name, int ID)
{
	this->name = name;
	this->ID = ID;
}

StudentRecord::StudentRecord(string name)
{
	this->name = name;
}

StudentRecord::StudentRecord(int ID)
{
	this->ID = ID;
}

StudentRecord::StudentRecord()
{
	this->ID = NULL;
	this->name = "";
	//this->classes = NULL;
}

string StudentRecord::getName()
{
	return this->name;
}

void StudentRecord::setName(string name)
{
	this->name = name;
}

int StudentRecord::getID() {
	return this->ID;
}

void StudentRecord::setID(int ID)
{
	this->ID = ID;
}

vector<string> StudentRecord::getClasses() {
	return this->classes;
}

void StudentRecord::addClass(string classIn)
{
	if(find(classes.begin(),classes.end(),classIn) == classes.end())
		this->classes.push_back(classIn);
}

void StudentRecord::setClasses(vector<string> classes)
{
	this->classes = classes;
}

bool StudentRecord::containsClass(string classIn)
{
	if (find(classes.begin(), classes.end(), classIn) != classes.end()) {
		return true;
	}
	return false;
}
