// EXPERIMENT 12C : DATE CLASS WITH PARAMETERIZED CONSTRUCTOR


#include <iostream>
using namespace std;

class construct{
    int a,b,c;
    public:
    construct (int m, int n, int o ){
        a = m;
        b = n;
        c = o;


    }
    void display(){
        cout << endl << "Day is = " << a << endl << "Month is = " << b << endl << "Year is = " << c << endl;
    }
};

int main(){
    int a,b,c;
    cout << "Enter today's date (DD/MM/YYYY): ";
    cin >> a >> b >> c;
    construct date(a,b,c);
    date.display();
    return 0;
}

/*
OUTPUT :
Enter today's date (DD/MM/YYYY): 28 08 2025

Day is = 28
Month is = 8
Year is = 2025
*/
