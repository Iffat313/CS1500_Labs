/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[5] = {2,4,6,8,10};
    int c[5] = {1,3,5,7,9};
    int d[5] = {1,2,3,5,7};
    cout << "Problem 1: ";
    //problem 1; intersect - AND;
    int e[10] = {1,2,3,0,5,0,7,0,0,0};
    for(int i = 0; i<10; i++){
        //cout<<(a[i]&&e[i])<<endl;
        if((a[i]&&e[i])==1){
            cout << e[i] << " " ;
        }
    }
    
    cout << endl;
    cout << "Problem 2: ";
    
    //problem 2:
    vector<int>f;
    for(int i = 0; i<5; i++){
        if((b[i]||c[i])==1){
            f.push_back(b[i]);
            f.push_back(c[i]);
        }
    }
    
    for(int i = 0; i<10; i++){
        if((f[i]&&a[i])==1){
            cout << a[i] << " ";
        }
    }
    
    
    cout << endl;
    cout << "Problem 3: ";
    
    //problem 3:
    //first inverse of c in respect of a;
    int carry_3[5];
    int carry_4[10];
    vector<int>test;
    vector<int>lol;
    int c_1[10] = {1,0,3,0,5,0,7,0,9,0};
    for(int i = 0; i<10; i++){
        if(c_1[i]!=a[i]){
            test.push_back(a[i]);
        }
    }
    

    
    for(int i = 0; i<5; i++){
        if((test[i]&&c[i])==1){
            lol.push_back(c[i]);
            lol.push_back(test[i]);
        }
    }
        
    for(int i = 0; i<10; i++){
        if((lol[i]&&a[i])==1){
        cout << lol[i] << " ";
        
        }
    }
    
    //problem 4: recall for removal the comparsion between the two arrays 
    //dont need to have the same number of elements but programming wise make it the same vai buff
    cout << endl;
    cout << "Problem 4: ";
    int d_1[10] = {1,2,3,0,5,0,7,0,0,0};
    for(int i = 0; i<10; i++){
        if(d_1[i]!=a[i]){
            cout << a[i] << " ";
        }
    }
    
    
    //problem 5:
    //first find inverse of a in respect to a:
    //inverse of a is a empty list
    vector<int>a_1;
    for(int i = 0; i<10; i++){
        if(a[i]==a[i]){
            continue;
        }
    }
    
    //now do c union d:
    vector<int>carry;
    int c_2[9] = {1,0,3,0,5,0,7,0,9};
    int d_2[9] = {1,2,3,0,5,0,7,0,0};
    for(int i = 0; i<9; i++){
        if((c_2[i] == 0) and (d_2[i] == 0)){
            continue;
        }
       
       else if(c_2[i]==d_2[i]){
            carry.push_back(c_2[i]);
        }
        
        
        else if(c_2[i] > d_2[i]){
            
            carry.push_back(c_2[i]);
        }
        
        else if(d_2[i] > c_2[i]){
            carry.push_back(d_2[i]);
        }
    }
    
    //now do union of a_1 and carry:
    

    cout << endl;
    cout << "Problem 5: ";
    
    int size = 0;
    for(int i = 0; i<carry.size(); i++){
        size++;
    }
    cout << "The size is: " << size;
    
    
    cout << endl;
    cout << "Problem 6: ";
    
    //problem 6:
    for(int i = 0; i<9; i++){
        if((c_2[i] == 0) and (d_2[i] == 0)){
            continue;
        }
        
        else if(c_2[i] == d_2[i]){
            cout << c_2[i] << " ";
        }
    }
    cout << endl;
    cout << "Problem 7: ";
    
    //problem 7:
    int b_1[10] = {0,2,0,4,0,6,0,8,0,10};
    int c_3[10] = {1,0,3,0,5,0,7,0,9,0};
    int size_1 = 0;
    for(int i = 0; i<10; i++){
        if(b_1[i] == c_3[i]){
            size_1++;
        }
    }
    cout << "The size is: " << size_1 << " therefore it is a empty set";
    
    cout << endl;
    cout << "Problem 8: ";
    
    //problem 8:
    //Compare one set a time, it's bascially union with all of them
    int a_x[10] = {1,2,3,4,5,6,7,8,9,10};
    int b_x[10] = {0,2,0,4,0,6,0,8,0,10};
    int c_x[10] = {1,0,3,0,5,0,7,0,9,0};
    int d_x[10] = {1,2,3,0,5,0,7,0,0,0};
    
    int array_x[10];
    int array_x1[10];
    int array_x2[10];
    for(int i = 0; i<10; i++){
        if(a_x[i] > b_x[i]){
            array_x[i] = a_x[i];
        }
        else{
            array_x[i] = a_x[i];
        }
    }
    
    for(int i = 0; i<10; i++){
        if(array_x[i] == c_x[i]){
            array_x1[i] = array_x[i];
        }
        else{
            array_x1[i] = array_x[i];
        }
    }
    
    for(int i = 0; i<10; i++){
        if(array_x1[i] == d_x[i]){
            array_x2[i] = d_x[i];
        }
        else{
            array_x2[i] = array_x1[i];
        }
    }
    
    for(int i = 0; i<10; i++){
        cout << array_x2[i] << " ";
    }
    
    
    
    
    

    return 0;
}

