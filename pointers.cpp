#include <iostream>
using namespace std;
int main(){
    int n =5;
    cout<<"n: "<<n<<endl;
    cout<<"address of n: "<<&n<<endl;
    //creating a pointer
    int* ptr = &n;//makes address of n as ptr address
    cout<<"address of ptr: "<<ptr<<endl;
    cout<<"value of ptr: "<<*ptr<<endl;
    //changing the value of ptr
    *ptr = 15;
    cout<<" new value of ptr: "<<*ptr<<endl;
    cout<<"new value of n: "<<n<<endl;
    //note:pointers and variables must be of same type

}