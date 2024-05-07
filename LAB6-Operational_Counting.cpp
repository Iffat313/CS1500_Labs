/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int x;
    int y = 0;
    int counter_1 = 0;
    int counter_2 = 3;
    int hold;
    cout << "enter the number: ";
    cin >> x;
    
    for(int i = 1; i<x+1; i++){
        counter_1++;
        y = y + i;  
        
    }
    
    cout << "Here are the numbers added from 1 to " << x << ": " << y << endl;
    cout << "It took this many operations for the loop method: " << counter_1-1;
    
    cout << endl;
    cout << endl;
    
    
    hold =  (x*(x + 1)) / 2; //how many operations, not executions
    
    
    
    
    cout << "Here are the numbers added from 1 to " << x << ": " << hold << endl;
    cout << "It took this many operations for the formula version to occur: " << counter_2;

    return 0;
}