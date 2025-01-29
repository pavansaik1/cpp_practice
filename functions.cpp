#include <iostream>
using namespace std;
void sayhi(){
    cout<<"sayhi\n";
}
int cube(int num){
    return num*num*num;
}
char square(int num1){
    int result=num1*num1;
    return result;
}
int main(){
    sayhi();
    int answer=cube(3);
    cout<<answer;
    int sol = square(2);
    cout << sol;
    return 0;
}