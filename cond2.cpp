#include <iostream>
using namespace std;
int max(int num1,int num2){
    int result;
    if(num1 > num2){
        result = num1;  
    }else if (num1 = num2){
        return num1;    
    }else{
        return num2;
    }   
    return result;
}
int main(){
    cout<<max(2,3);
    return 0;
}