#include <iostream>
using namespace std;

// Put the person struct here
struct person {
string firstName;
string lastName;
};


int main() {
	// Create two instances of person here, and assign the names.
person person1;
person1.firstName = "Dorian";
person1.lastName = "Gray";

person person2;
person2.firstName = "Charlie";
person2.lastName = "Brown";






	// Add the prints here
    cout << "Person 1's first name is " << person1.firstName << ", and their last name is " << person1.lastName << endl;
     cout << "Person 2's first name is " << person2.firstName << ", and their last name is " << person2.lastName << endl;


	return 0;
}
