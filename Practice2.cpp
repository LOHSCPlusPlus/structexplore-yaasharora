#include <iostream>
using namespace std;

struct person {
string firstName;
string lastName;
person();
};

person::person() {
  firstName = "unknown";
  lastName = "unknown";

}

int main() {
person person1;
 cout << "Person 1's first name is " << person1.firstName << ", and their last name is " << person1.lastName << endl;
person1.firstName = "Dorian";
person1.lastName = "Gray";

person person2;
cout << "Person 2's first name is " << person2.firstName << ", and their last name is " << person2.lastName << endl;
person2.firstName = "Charlie";
person2.lastName = "Brown";


cout << "Person 1's first name is " << person1.firstName << ", and their last name is " << person1.lastName << endl;
cout << "Person 2's first name is " << person2.firstName << ", and their last name is " << person2.lastName << endl;

return 0;
}