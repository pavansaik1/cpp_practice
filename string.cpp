#include <iostream>
using namespace std;
int main(){
    cout << "hello world" << endl;
    cout << "hello world\n" ;
    string name ="pavan sai";
    int p;
    string k;
    cout << "" << name << " is my name \n";
    k=name.substr(0,2);
    p=name.length();
    cout << p ;
    cout << ""<<k<< "\n";
    cout << name.find("sai");
    cout << 10/3.0 ;
   
    return 0;
}