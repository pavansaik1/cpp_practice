#include<iostream>
using namespace std;
#include<memory>
//constructor and destructor in unq ptr
class MyClass{
    public:
    MyClass(){
        cout<<"constructor invoked"<<endl;
    }
    ~MyClass(){
        cout<<"destructor invoked"<<endl;
    }
};
int main(){
    unique_ptr<MyClass>unptr3 = make_unique<MyClass>();
    return 0;
}