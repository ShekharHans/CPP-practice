#include <iostream>
using namespace std;
// Create class
class Student // Student is name of object
{
public:
    int rollNumber;

private:
    int age;

public:
    void display()
    {
        cout << age << " " << rollNumber << endl;
    }

    int getAge()
    {
        return age;
    }
    void setAge(int a)
    {
        age = a;
    }
};
