#include <iostream>
using namespace std;

// Person class 
class Person
{
public:
    virtual void introduce() 
    {
        cout << "���� ���" << endl;
    }
    virtual ~Person() {}
};

// studnet class 
class Student : virtual public Person
{
public:
    // intro() overriding
    void introduce() override
    {
        cout << "���� �л�" << endl;
    }
};

// engineer class 
class Teacher : virtual public Person 
{
public:
    // introduce() overriding 
    void introduce() override 
    {
        cout << "���� ����" << endl;
    }
};

// ���߻��
class StudentTeacher : public Student, public Teacher
{
public:
    // introduce() overriding
    void introduce() override 
    {
        cout << "���� �л�, ���� ����" << endl;
    }
};



int main() {
    Person* per;
    Student stu;
    Teacher tea;
    StudentTeacher snt;

    //student 
    per = &stu;
    per ->introduce();

    //teacher 
    per = &tea;
    per -> introduce();

    //student teacher 
    per = &snt;
    per -> introduce();

    return 0;
}
