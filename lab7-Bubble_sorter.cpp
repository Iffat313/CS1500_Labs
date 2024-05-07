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
    int num;
    int counter_1 = 1;
    int temp;
    int holder;
    int counter_3 = 3;
    cout << "How many elements are in this array?: ";
    cin >> num;
    int array[num];
    
    cout << endl;
    
    
    int enter;
    for(int i = 0; i<num; i++){
        cout << "enter the number for this element number " << i+1 << ": ";
        cin >> enter;
        array[i] = enter;
        
    }
    
    cout << endl;
    
    for(int i = 0; i<num; i++){
        for(int j = i+1; j<num; j++){
            counter_1++;
            if(array[i] > array[j]){
                holder = holder + counter_3;
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                
            }
            //break;
        }
    }
    
    cout << counter_1+ holder << " Actions performed";
    
    
    cout << endl;
    
    for(int i = 0; i<num; i++){
        cout << array[i] << " ";
    }
    

    return 0;
}


