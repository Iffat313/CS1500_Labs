/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

int main()
{
    //generate two random numbers
    srand(time(0)); 
    //This is the set up for generating randonm numbers.
    //It makes it to where we can reduce our chances of having repeated numbers 
    
    int first_card, second_card;
    //first and second card for user that is non repeated
    
    
    //create array
    int J = 10;
    int K = 10;
    int Q = 10;
    int A;
    
    //Deduce A value
    int r =  rand();
    if(r%11==0){
        A = 11;
    }
    else{
        A = 1;
    }
    
    //Create vector for the suit of cards 
    vector<int>deck = {2,3,4,5,6,7,8,9,10,J,K,Q,A};
        
    int first_number = 1 +(rand() % 13);
    
    //deck.erase(deck.begin());
    int z;
    
    if(first_number == 2){
        deck.erase(deck.begin());
        first_card = 2;
    }
    
    else if(first_number == 13){
        first_card = A;
        deck.pop_back();
    }
    
    else{
        first_card = first_number;
        z = first_number-2;
        deck.erase(deck.begin()+z);
        
    }
    
    int second_number  = 1 +(rand() % 12);
    
    second_card = second_number;
    
    
    
    int benefical, deterimental, total;
    //deck.insert(deck.begin()+z, first_number);
    //re add the missing element to grant all possibilities
    if(first_number == 2){
        deck.insert(deck.begin()+0,2);
    }
    
    else if(first_number == 13){
        deck.push_back(A);
    }
    
    else{
        deck.insert(deck.begin()+z, first_number);
    }
    
    total = first_card+second_card;
    int counter = total;
    for(int i = 0; i<12; i++){
        counter = counter + deck[i];
        if(counter <= 21){
            benefical++;
        }
        else{
            deterimental++;
        }
        counter = total;
    }
    
    int third_number = 1 + (rand() % 12);
    
    cout << "The odds of getting a benefical card are: " << benefical << " in 13";
    cout << endl;
    cout << "The odds of getting a deterimental card are: " << deterimental << " in 13";
    cout << endl;
    
    if(benefical>deterimental){
        cout << "It is a good idea to take card" << endl;
        cout << "This is your card: " << third_number << endl;
        total = total + third_number;
        cout << "Heres your total: " << total << endl;
        
    }
    
    else{
        cout << "It is a bad idea to take card" << endl;
        cout << "This is your card: " << third_number << endl;
        total = total + third_number;
        cout << "Heres your total: " << total;
    }
    

    


    return 0;
}


