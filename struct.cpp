#include <iostream>
using namespace std;

struct Person{
    
    string firstname;
    string lastname;
    int age;
    int salary;
};

int main(){

    Person p1;

    p1.firstname = "Victor";
    p1.lastname = "Oshimen";
    p1.age = 25;
    p1.salary = 6000000;

    cout << "First Name: " << p1.firstname << endl;
    cout << "Last Name: " << p1.lastname << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

 
    return 0;
}