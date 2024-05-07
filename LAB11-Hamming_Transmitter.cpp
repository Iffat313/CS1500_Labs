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
    int s1,s2,s4, num;
    cout << "Enter a decimal number: ";
    cin >> num;
    int decimal[7];
    
    int seven = num%2;  // 12 % 2 = 0
    int seven_1 = num/2; // 12/2 = 6
    
    int six = seven_1%2;   //6%2 = 0
    int six_1 = seven_1/2;  // 6/2 = 3
    
    int five = six_1%2; //3%2 = 1
    int five_1 = six_1/2; // 3/2 = 1
    
    int three = five_1%2;
    
    //cout << seven << six << five << three;
    
    s1 = (three + five + seven) % 2;
    s2 = (three + six + seven) % 2;
    s4 = (five + six + seven) % 2;
    
    decimal[0] = s1;
    decimal[1] = s2;
    decimal[2] = three;
    decimal[3] = s4;
    decimal[4] = five;
    decimal[5] = six;
    decimal[6] = seven;
    
    cout << "Here is a your original decimal number: " << num;
    
    cout << endl;
    
    
    int array[7] = {0,0,0,0,0,0,0};
    int binary[7];
    int correct[4];
    int error_location = 0;
    for(int i  = 0; i<7; i++){
        binary[i] = decimal[i];
    }
    
    
    int p1,p2,p4; 
    
    //priority check to see if there is an error
    p1 = (binary[0] + binary[2] + binary[4] + binary[6])%2;
    p2 = (binary[1] + binary[2] + binary[5] + binary[6])%2;
    p4 = (binary[3] + binary[4] + binary[5] + binary[6])%2;
    
    
    
    array[0] = p1;
    array[1] = p2;
    array[3] = p4;
    
    
    int leave = 0;
    for(int i = 0; i<7; i++){
        if(array[i] == 1){
             leave = 1;
        }
    }
    //step 1: indicating an error 
    if(leave == 0){
        cout << "There is no indicated error";
    }
    //step 2: If ther is an error, let's find the location
    else{
        
        for(int i = 0; i<7; i++){
            if(array[i] == 1){
               error_location = error_location + i + 1; 
            }
        }
        //step 3: repair
        if(binary[error_location-1] == 0){
            binary[error_location-1] = 1;
        }
        
        else{
            binary[error_location-1] = 0;
        }
    }
    
    
    correct[0] = binary[2] * 8;
    correct[1] = binary[4] * 4;
    correct[2] = binary[5] * 2;
    correct[3] = binary[6] * 1;
    
    int message = 0;
    for(int i  = 0; i<4; i++){
        message = message + correct[i]; 
    }
     
    if(leave == 1 ){
        cout << "There was an error, so here's the corrected version of the code: " << endl;
        for(int i = 0; i<7; i++){
            cout << binary[i];
        }
        cout << endl;
        cout << "Heres the message: " <<  message;
    
    }
    
    else{
        cout << ", so here's your version: " << endl;
        for(int i = 0; i<7; i++){
            cout << binary[i];
        }
        cout << endl;
        cout <<  "here's the message:  " << message;
    }
    

    return 0;
}

