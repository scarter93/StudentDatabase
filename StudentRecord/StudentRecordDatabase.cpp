#include "StudentRecordDatabase.h"

StudentRecordDatabase::StudentRecordDatabase(vector<StudentRecord> entries)
{
	if (entries.size() > 0) {
		numStudents = entries.size();
		for (int i = 0; i < entries.size(); i++) {
			hashTable[entries[i].getID()] = entries[i];
			cout << hashTable[entries[i].getID()].getName() << endl;
		}
	}
}

StudentRecordDatabase::StudentRecordDatabase(StudentRecord entry)
{
	if (entry.getID() >= 0 && entry.getName() != "") {
		numStudents = 1;
		hashTable[entry.getID()] = entry;
	}
}

StudentRecordDatabase::StudentRecordDatabase()
{
	numStudents = 0;
}

bool StudentRecordDatabase::addStudent(StudentRecord entry)
{
	if (hashTable.find(entry.getID()) == hashTable.end()) {
		hashTable[entry.getID()] = entry;
		return true;
	}
	return false;
}

bool StudentRecordDatabase::removeStudent(StudentRecord entry)
{
	if (hashTable.find(entry.getID()) != hashTable.end() && numStudents > 0) {
		hashTable.erase(entry.getID());
		return true;
	}
	return false;
}

void StudentRecordDatabase::printDatabase()
{	
	cout << "Name\t|\tID" << endl;
	if (numStudents > 0)
	{
		for (auto entry : hashTable) {
			StudentRecord temp = entry.second;
			cout << temp.getName() << "\t|\t" << entry.first << endl;
		}
	}
	cout << "End of database" << endl;
	
}

bool StudentRecordDatabase::updateClasses(StudentRecord student, vector<string> classes)
{

	return false;
}

bool StudentRecordDatabase::updateClasses(StudentRecord student, string classIn)
{
	return false;
}

bool StudentRecordDatabase::removeClasses(StudentRecord student, string classIn)
{
	return false;
}
