# StudentRecordTracker
Student records and student records tracker written in C++.

## StudentRecord Class

Holds information on a student, name, ID, and classes.

Would be interesting to add a grades option with GPA/Average. Maybe add a year level and split classes into complete/uncomplete etc...

##StudentRecordDatabase Class

This is my take on a database for the StudentRecords class.

Currently uses a unordered_map (HashMap) to map student ID's to their records.

This might need some cleaning up, I'm not sure if I want to keep this hash or if theres a better mapping.

##TODO

Finsih up StudentRecordDatabase Class and add persitance layer and more detail to StudentRecord Class.
Add comments, expections and deconstructors.

