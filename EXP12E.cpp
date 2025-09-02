// EXPERIMENT 12E : DESTRUCTOR

#include <iostream>
using namespace std;
int count =0 ;

class destruct{
    public:
    destruct(){
        count ++;
        cout << "no of objects created :" << count << endl;
    }
    ~destruct(){
        count --;
        cout << "No of objects destroyed:" << count << endl;
    }
};

int main(void){
    destruct d1,d2,d3;
    return 0;
}

/*
OUTPUT :
no of objects created :1
no of objects created :2
no of objects created :3
No of objects destroyed:2
No of objects destroyed:1
No of objects destroyed:0
*/
