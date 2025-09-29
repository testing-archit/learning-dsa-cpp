// 5. Write a C++ program where you take a sentence as an input from the user and
// output each word of a sentence in a separate line

// Sample Test Case
// Sample Input: This is a program to get the idea of control statements
// Sample Output:
// This
// is
// a
// program
// to
// get
// the
// idea
// of
// control
// statements





#include <iostream>
#include <string>
using namespace std;



int main (){

    int num = 0 ;

    string line ;

    cout << "Enter the line please"<<endl;
    getline(cin,line);


    cout << line << endl ; 
    for (int i = 0; i < 10; i++){
        cout << i ;
    }


    return 0;
}