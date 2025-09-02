// EXPERIMENT 12A : Student Class with constructor and member functions

#include <iostream>
#include <string>
using namespace std;

class student {
    public:
    int marks = 20 ;
    
    void display () {
        cout << endl << marks << endl;

    }
    
};

int main(){
    student s;
    s.display();



return 0;

}

/*
OUTPUT :
20
*/
