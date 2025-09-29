#include<iostream>
#include<string>

using namespace std;

class Teachers {
public :
    string name ;
    int age ;
    string sex ;
    int body_count;


    void inputDetails(){
        cout << "Enter the name: ";
        getline(cin,name);
        cout << "Enter the  age ";
        cin>>age;
        cout << "Enter the sex ";
        getline(cin,sex);
        cout << "Enter the name: ";
        getline(cin,name);
    }


             
    
};

int main() {
    Teachers t1;
    t1.name = "teacher1";
    t1.age = 29;
    t1.sex = "male";

    cout << t1.name << t1.age <<  t1.sex << endl;

    return 0;
}