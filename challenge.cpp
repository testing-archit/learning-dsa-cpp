//  Tea Information Display Write a program that declares variables 
//  to store the type of tea, its price per kilogram
//  (float), and its rating (char). 
//  Use data types effectively and print them in a formatted output 
//  using escape sequences.



// Tea Type: Green Tea
// Price: ₹350.50
// Rating: A



#include<iostream>
#include<string>

using namespace std;


int main(){

    string TeaType;
    char  Rating;
    float Price ;
    TeaType = "Green Tea";
    Price = 350.50;

    Rating = 'A';


    cout<<"Tea Type: " << TeaType <<"\n" <<"Price: "<<Price<<"\n" <<"Rating: "<<Rating;




    
    return 0 ; 
}