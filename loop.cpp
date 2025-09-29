#include<iostream>
#include<string>

using namespace std;

int main(){

    int i, j,space=0;
    
    for (j = 4; j >= 1; j--) {
        for (i = 0; i <= space; i++) {
            cout << " ";
             ; 
        }
        for (int k = 1 ; k <=j ; k++){
            cout << "* ";

            
        }

        cout<<endl;

        space  ++ ;
    }

    return 0;
}
