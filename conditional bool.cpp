#include <iostream>
using namespace std;
int main(){
    bool ismale = false;
    bool istall = false;
    if(ismale && istall ){
        cout << "you are male and also tall \n";
    }else if (ismale && !istall){
        cout << "you are male but not tall \n";
    }else if (!ismale && istall){
        cout << "you are not male but  tall \n";
    }else{
        cout <<"you are not male and not tall \n";
    }
    return 0;
}