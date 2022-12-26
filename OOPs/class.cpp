class student
{
public: // give acess public
    int rollNumber;
    int age;
    // give acess private
    private:
        int marks;
public:
    void display()
    {
        cout << age << " " << rollNumber<<" "<<marks;
    }
    //here we create getMarks() function to acess private properties
    int getMarks(){
        return marks;
    }
};

// if we didn't give acess it will be by default private acess