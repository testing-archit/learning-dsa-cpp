#include<iostream>
#include<string>

using namespace std;


int main(){
    int reverse_number = 0 ;
    int number ;
    int last_digit;
    

    cout << "Enter the number: "<< endl;
    cin >> number;
    int orignal_number = number;

    while (number > 0 ){

        last_digit = number%10;
        number = number /10 ;

        reverse_number = (reverse_number * 10 ) + last_digit;


    }


   if (orignal_number == reverse_number){
    cout<< "True the number is palindrome";
   }
   else{
    cout << "False , the number is not palindrome plus doni is gandu";
   }


    
    return 0 ; 
}