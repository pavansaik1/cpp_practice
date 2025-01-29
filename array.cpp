#include <iostream>
using namespace std;
int main(){
    int luckynumbers[]= {0,1,2,3,4,5,6,7,8,9,10};
    luckynumbers[12]=23;
    cout<<luckynumbers[0]<<endl;
    cout<<luckynumbers[12];
    //if u want to take finite numbers in array,
    //u can initate luckynumbers as luckuynumbers[20].
    return 0;
}