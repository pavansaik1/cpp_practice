//return multiple values from functions using pointers
#include <iostream>
using namespace std;
int getmax(int numbers[],int size){
    int maxnum = numbers[0];
    for(int i = 1;i<size;i++){
        if(numbers[i]>maxnum){
            maxnum = numbers[i]; 
        }
    }
    return maxnum;
}
int getmin(int numbers[],int size){
    int minnum = numbers[0];
    for(int i =1,i<size;i++){
        if(numbers[i]<minnum){
            minnum = numbers[i];
        }
    }
    return minnum;

}

int main(){
    int numbers[5] = {1,2,3,4,5};
    cout<<getmax(numbers,5)<<endl;
    
}