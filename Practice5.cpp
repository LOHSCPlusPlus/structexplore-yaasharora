#include <iostream>
using namespace std;

struct person {
string firstName;
string lastName;
person();
person(string n1, string n2);
};

person::person (string first, string last) {
  cout << "In the other constructor" << endl;
  firstName = first;
  lastName = last;
}
void PrintPerson(person person) {
  cout << "Name is " << person.firstName << " " << person.lastName << endl;
}
void ChangeLastName(person &person, string newLastName) {
  person.lastName = newLastName;
}
int main() {
person person1;
PrintPerson(person1);
/*
 cout << "Person 1's first name is " << person1.firstName << ", and their last name is " << person1.lastName << endl;
person1.firstName = "Dorian";
person1.lastName = "Gray";
*/

person person2("Linus", "Van Pelt");
PrintPerson(person2);
/*
person person2;
cout << "Person 2's first name is " << person2.firstName << ", and their last name is " << person2.lastName << endl;
person2.firstName = "Charlie";
person2.lastName = "Brown";
*/

return 0;
}