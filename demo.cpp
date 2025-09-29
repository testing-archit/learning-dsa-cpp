
// Write a C++ program to find the minimum price among three options for a product. Input
// prices using user-defined input to discover the most affordable choice, helping you make the
// best decision while shopping.




#include <iostream>
#include <string>

using namespace std;


int main(){
    float price1 ,price2 , price3 ;
    cout<<"Enter the price of price of a product from showroom1: "<<endl;
    cin>> price1;
     cout<<"Enter the price of price of a product from showroom2 : "<<endl;
    cin>> price2;
     cout<<"Enter the price of price of a product from showroom3: "<<endl;
    cin>> price3;

    float minimumPrice = price1;
    if(price1>price2){
        minimumPrice = price2;
    }

    if(minimumPrice > price3){
        minimumPrice = price3;
    }

    cout << "the minimum price is "<< minimumPrice << endl;

    if (minimumPrice == price1){
        cout << "Buy it from store1 ";
    }
    else if (minimumPrice == price2){
        cout << "Buy it from store2 ";
    }
    else {
        cout << "Buy it from store3 ";
    }
    return 0;
}