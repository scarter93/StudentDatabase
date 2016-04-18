#include "StudentRecordDatabase.h"

void main() {
	StudentRecord bob("bob", 123);
	bob.addClass("Math102");

	StudentRecord billy("Billy", 56, "Chem101");
	billy.addClass("Calc203");

	cout << bob.getName() << "is taking " << bob.getClasses()[0] << endl;
	vector<StudentRecord> students;

	students.push_back(bob);
	students.push_back(billy);

	StudentRecordDatabase database(students);
	database.printDatabase();
}