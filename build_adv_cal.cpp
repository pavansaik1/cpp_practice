#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    char op;
    int result;
    cout<<"enter the num 1: \n";
    cin>>num1;
    cout<<"enter the num 2: \n";
    cin>>num2;
    cout<<"enter the operator: \n";
    cin>>op;
    if(op == '+'){
        result = num1 + num2;
    }else if(op == '-'){
        result = num1 - num2;
    }else if(op == '*'){
        result = num1 * num2;
    }else{
        result = num1 / num2;
    }
    cout<<result;
    return 0; 


}