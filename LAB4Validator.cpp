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
    vector<int>nums;
    
    int A[16] = {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
    int B[16] = {0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1};
    int C[16] = {0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1};
    int D[16] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    
    int A2,B2,C2,D2;
    int counter = 0;
    int times;
    
    for(int i = 0; i<16; i++){
        counter = 0;
       
        if(A[i] <= B[i]){ //prop1
            counter++;
            A2 = A[i];
        }
        
        if(B[i] <= C[i]){ //prop2
            counter++;
            B2 = B[i];
        }
        
        if(C[i] <= D[i]){ //prop3
            counter++;
            C2 = C[i];
        }
        
        if(D[i] <= A[i] == 0){ //conclusion
            counter++;
            D2 = D[i];
            
        }
       
        
        if(counter == 4){
            nums.push_back(A2);
            nums.push_back(B2);
            nums.push_back(C2);
            nums.push_back(D2);
            times++;
            
            
        }
        

    }
    
    cout << "The argument went invalid this many times: " << times << endl;
    cout << "Here are the following inputs: " << endl;
    for(int i = 0; i<nums.size(); i++){
        if(i%4 == 0){
            cout << endl;
        }
        cout << nums[i];
    }
    return 0;
}

