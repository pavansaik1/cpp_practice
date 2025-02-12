#include<iostream>
using namespace std;
#include<vector>
int main(){
    pair<int,int>pair1={2,3};
    cout<<pair1.first<<endl;
    cout<<pair1.second<<endl;

    pair<int,pair<int,string>>pair2={2,{1,"a"}};
    cout<<pair2.first<<endl;
    cout<<pair2.second.first<<endl;
    cout<<pair2.second.second<<endl;

    //building vectors using pairs;
    vector<pair<string,int>>vector1;
    vector1.push_back({"a",1});
    vector1.emplace_back("b",2);
    for(pair<string,int>value:vector1){
        cout<<value.first<< " "<<value.second<<endl;
    }
    cout<<endl;
}