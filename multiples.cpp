#include<iostream>
#include<string>

using namespace std;


int main(){


    int number;
    int i =1 ;

    cout<<"Enter the number: " <<endl;
    cin>> number;

    for (i ;i<=number;i++){
        if(number%i == 0 ){
            cout<< i<< endl ; 
        }
    }

    
    return 0 ; 
}