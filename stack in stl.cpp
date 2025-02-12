#include<iostream>
using namespace std;
#include<stack>
//top,push,emplace,empty,swap,size
int main(){
    stack<int>stack1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    while(!stack1.empty()){
        cout<<stack1.top()<<" ";
        stack1.pop();
    }
    cout<<endl;

    stack<int>stack2;
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);

    stack<int>stack3;
    stack3.swap(stack2);//all elements of stack 2 comes to stack 3
    cout<<"stack 2 size:"<<stack2.size()<<endl;
    cout<<"stack 3 size:"<<stack3.size()<<endl;
    cout<<"stack3:"<<endl;
    while(!stack3.empty()){
        cout<<stack3.top()<<" ";
        stack3.pop();
    }
    cout<<endl;





}