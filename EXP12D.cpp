// EXPERIMENT 12D : COPYING CONSTRUCTORS

#include <iostream>
using namespace std;
#include <string>

class Student{
    int age;
    string name;

    public:
    Student(string n, int a){
        name = n;
        age = a;
    }
    Student (const Student &s){
        name = s.name;
        age = s.age;
        cout << "Copy Constructor Called. " << endl;
    }
    void display(){
        cout << "Name : " << name << endl << "Age : " << age << endl;
    }
};

int main(){
    Student a("Archisha", 19);
    Student b(a);
    a.display();

    cout << "Constructor Copied :" << endl;

    b.display();
    return 0;
}

/*
OUTPUT :
Copy Constructor Called. 
Name : Archisha
Age : 19
Constructor Copied :
Name : Archisha
Age : 19
*/
