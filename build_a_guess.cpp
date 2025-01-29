#include <iostream>
using namespace std;
int main(){
    int secret_num = 7;
    int guess;
    bool outofguesses = false;
    while(secret_num != guess){
        cout <<"enter the guess : " <<endl;
        cin>>guess;
    }
    cout<<"you win";
    return 0; 
    //this is infinite guesses....u can try 1/0 times..
}