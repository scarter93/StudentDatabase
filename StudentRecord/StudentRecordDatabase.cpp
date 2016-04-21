#include "StudentRecordDatabase.h"

StudentRecordDatabase::StudentRecordDatabase(vector<StudentRecord> &entries)
{
	if (entries.size() > 0) {
		numStudents = entries.size();
		for (int i = 0; i < entries.size(); i++) {
			hashTable.insert({ entries[i].getID(), entries[i] });
			//hashTable.insert()
			//hashTable[entries[i].getID()] = entries[i];
			//cout << hashTable[entries[i].getID()].getName() << endl;
		}
	}
}

StudentRecordDatabase::StudentRecordDatabase(StudentRecord &entry)
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

StudentRecordDatabase::~StudentRecordDatabase()
{
}

bool StudentRecordDatabase::addStudent(StudentRecord &entry)
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

StudentRecord &StudentRecordDatabase::getStudentRecord(int ID)
{
	if (hashTable.find(ID) != hashTable.end() && numStudents > 0) {
		return hashTable[ID];
	}
	//return StudentRecord();
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

StudentRecord* StudentRecordDatabase::updateClasses(int ID, vector<string> classes)
{
	if (hashTable.find(ID) != hashTable.end() && numStudents > 0) {
		StudentRecord *update = &hashTable[ID];
		for (int i = 0; i < classes.size(); i++) {
			update->addClass(classes[i]);
		}
		return update;
	}
	return NULL;
}

StudentRecord* StudentRecordDatabase::updateClasses(int ID, string classIn)
{
	if (hashTable.find(ID) != hashTable.end() && numStudents > 0) {
		StudentRecord *update = &hashTable[ID];
		update->addClass(classIn);
		return update;
	}
	return NULL;
}

StudentRecord* StudentRecordDatabase::removeClass(int ID, string classIn)
{
	if (hashTable.find(ID) != hashTable.end() && numStudents > 0) {
		StudentRecord *update = &hashTable[ID];
		update->removeClass(classIn);
		return update;
	}
	return NULL;
}