#include<iostream>
using namespace std;
#include "createClass.cpp"
int main()
{
    // create object statically
    Student s1; // s1 is name of object
    s1.getAge();
    // s1.age = 24;
    s1.rollNumber = 84;
    cout << "s1 Age : " << s1.getAge() << endl;
    cout << "s1 Roll Number : " << s1.rollNumber << endl;
    s1.display();

    // create object statically
    Student *s3 = new Student;
    // (*s3).age = 23;
    // (*s3).rollNumber = 101;
    s3->rollNumber = 101;
    s3->display(); // print age and rollnumber
    cout << "s1 age : " << s3->getAge() << endl;
    cout << "s1 Roll Number : " << s3->rollNumber << endl;
    return 0;
}