#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    int age;
    string name;

    Person()
    {
        cout << "hey yo i run fisrt" << endl;
    }
};

class Learner : Public : Person
{
private:
    int rollno;
    Learner()
    {
        cout << "hey yo i run for second time " << endl;
    }
    cout << "hey yo i run for second time " << endl;
};

int main()
{
    Learner s1;

    s1.name = "sudip";
    s1.age = 17;
    s1.rollno = 1234;

    cout << "\nname:" << s1.name << "\nage:" << s1.age << "\nroll.no:" << s1.rollno << endl;

    return 0;
}