/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

vector<int>conversion;
vector<int>decimals;




int main()
{
    int decimal, base, temp;
   
    
    
    do{
        cout << "what is the decimal number?: ";
        cin >> decimal;
        temp = decimal;
        
        
        if(temp <= 0){
            break;
        }
        
        cout << "what is the base you want to convert this decimal number to?: ";
        cin >> base;
        
        decimals.push_back(temp);
        for(int i = decimal; i>0; i--){
            decimal = decimal/base;
        
                if(decimal == 0){
                break;
            }
        
            decimals.push_back(decimal);
        }
    
    
    
    
        int sizeofd = decimals.size();
    
    
        for(int i = 0; i<sizeofd; i++){
            int output = decimals[i]%base;
            conversion.push_back(output);
        
        
        }
        
    
        
        
        
        for(int i = conversion.size()-1; i>-1; i--){
            if(conversion[i] >= 10){
                char ch_2 = conversion[i];
                cout << ch_2;
            }
            else{
                cout << conversion[i] << "";
            }
            
        }
        
        cout << endl;
        
        
            conversion.clear();
        
        
        
            decimals.clear();
        

    }
    while(temp > 0);
    
    

    
    

    return 0;
}

