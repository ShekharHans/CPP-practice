#include <iostream>
using namespace std;
#include "class.cpp" //declear class file
int main()
{

    // create objects statically
    student s1;
    student s2;
    student s3, s4, s5;

    // to input value object's properties statically
    s1.rollNumber = 12;
    s1.age = 21;
    // s1.marks=22; //private acess

    cout << s1.rollNumber << endl;
    cout << s1.age << endl;;
    cout<<"s1 marks : "<<s1.getMarks()<<endl; //by creating getM arks() function we can acess the private properties in objects

    // by function 
    s1.display();


    // create object dynimacally
    student *s6 = new student;

    // to input value of object's properties dynamically
    (*s6).rollNumber = 123;
    (*s6).age = 25;
    cout << (*s6).rollNumber << endl;
    cout << (*s6).age << endl;
    cout<<"s6 marks : "<<(*s6).getMarks()<<endl;
    (*s6).display();


    // another process to input value object's properties dynamically
    s6->rollNumber=52;
    s6-> age=234;
    cout<<s6->rollNumber<<endl;
    cout<<s6->age<<endl;
    cout<<"s6 marks : "<<s6->getMarks()<<endl;
    s6->display();
    return 0;
}