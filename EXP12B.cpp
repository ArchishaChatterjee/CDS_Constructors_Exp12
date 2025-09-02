// EXPERIMENT 12B : STUDENT CLASS WITH CONSTRUCTOR AND OUT-OF-CLASS MEMBER FUNCTION DEFINITIONS

#include <iostream>
using namespace std;

class student {
    public:
    int rno;
    char name[50];
    double fee;
    public:
    student();
    void display(); 

};

int main(){
    student s;
    s.display();

    return 0;
}

/*
OUTPUT :
Error
*/
