// Write a C++ program to find a sum of first n natural numbers (where n is defined by user)
// Sample Test Case
// Sample Input: Enter a positive number:5
// Sample Output: Sum = 15 Explanation Sum of first 5 natural numbers is 1+2+3+4+5


#include <iostream>
#include <string>


using namespace std;


int main(){

    int num; 
    cout<< "Enter the number: "<< endl;
    cin >> num ; 

    int i = 0 ;
    int sum = 0; 

    for (int i = 0; i <= num; i++) // Correct condition: i < 10
    {
       sum = sum + i ;  
    }

    cout << sum;
    return 0 ;
}

