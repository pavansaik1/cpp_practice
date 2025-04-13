#include <iostream>
#include <memory>
using namespace std;
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
    //unique pointer{it can't be shared}
    unique_ptr<int>unptr1 = make_unique<int>(25);
    cout<<*unptr1<<endl;
    // unique_ptr<int>unptr2 = unptr1;{not posiible because it can't be shared}
    unique_ptr<int>unptr2 = move(unptr1);//moving the ownership
    cout<<*unptr2<<endl;
    cout<<*unptr1<<endl;//null pointer exception

    unique_ptr<MyClass>unptr3 = make_unique<MyClass>();
    
}