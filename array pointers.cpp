#include <iostream>
using namespace std;
int main(){
    int LuckyNumbers[5]={1,2,3,4,5};
    cout<<LuckyNumbers<<endl;//gives address of first number of the variable
    cout<<&LuckyNumbers[0]<<endl;
    cout<<*(LuckyNumbers)<<endl;
    cout<<*(LuckyNumbers + 1)<<endl;
    for(int i=0;i<=4;i++){
        cout<<LuckyNumbers[i]<< " ";
    }
    cout<<endl;
    //another way ;
    int Numbers[5];
    for(int i=0;i<=4;i++){
        cout<<"numbers: "<<endl; 
        cin>>Numbers[i];
    }
    for(int i=0;i<=4;i++){
        cout<<Numbers[i]<< " ";
    }
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*(Numbers + i)<< " ";
    }
    cout<<endl;

}