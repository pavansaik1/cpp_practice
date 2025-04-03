#include <iostream>
using namespace std;
int getmax(int num[],int size){
    int maxnum = num[0];
    for(int i = 1;i<size;i++){
        if(maxnum < num[i]){
            maxnum = num[i];
        }
    }
    return maxnum;
}
    void getminandmax(int num[],int size,int* min,int* max){
        for(int i = 1;i<size;i++){
            if(*max < num[i]){
                *max = num[i];
            }
            if(num[i]<*min){
                *min = num[i];
            }
        }
    }

int main(){
    int num[5] = {1,2,3,4,5};
    int max = num[0];
    int min = num[0];
    getminandmax(num,5,&min,&max);
    cout<<"max: "<<max<<endl;
    cout<<"min: "<<min<<endl;                                                                                                                                                                                                                                                                                                                                                                  getmax(num,5);
}