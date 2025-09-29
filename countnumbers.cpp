#include<iostream>
#include<string>

using namespace std;


int main(){
    int number ;
    cout<< "Enter the number please: ";
    cin>> number ;

    long countednumber = 0  ;

   while(number>0){
    number = number/10;
    countednumber = countednumber +1 ; 
   }

   cout<< countednumber;

    
    return 0 ; 
}