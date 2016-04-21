#include "StudentRecordDatabase.h"

void main() {
	StudentRecord bob("Bob", 123);
	bob.addClass("Math102");
	bob.addClass("Calc203");

	StudentRecord billy("Billy", 56, "Chem101");
	billy.addClass("Calc203");

	//cout << bob.getName() << "is taking " << bob.getClasses()[0] << endl;
	vector<StudentRecord> students;

	students.push_back(bob);
	students.push_back(billy);

	StudentRecordDatabase database(students);
	database.printDatabase();
	
	billy = *database.updateClasses(billy.getID(), "Math102");
	cout << "Billy and bob are in " << billy.sharedClass(bob) << " together" << endl;
	
	vector<string> sharedClasses = billy.sharedClasses(bob);

	for (string classShrd : sharedClasses) {
		cout << classShrd << endl;
	}

	/*StudentRecord& updateStudent = database.getStudentRecord(billy.getID());
	updateStudent.addClass("Math102");
	cout << database.getStudentRecord(billy.getID()).getClasses()[2] << endl;

	billy = updateStudent;
	cout << billy.containsClass("Math102") << endl;
	if (updateStudent.inClassWith(bob))
	{
		cout << "Billy and Bob are in a class together" << endl;
	}*/
	
}