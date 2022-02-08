#include <iostream>
using namespace std;

struct person {
string firstName;
string lastName;
person();
person(string n1, string n2);
};

person::person() {
  firstName = "unknown";
  lastName = "unknown";

}
person::person (string n1, string n2) {
  cout << "In the other constructor" << endl;
  firstName = n1;
  lastName = n2;

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

person person2("Linus", "Van Pelt");
PrintPerson(person2);
ChangeLastName(person2, "Torvalds");
PrintPerson(person2);

return 0;
}