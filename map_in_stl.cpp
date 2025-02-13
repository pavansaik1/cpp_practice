#include<iostream>
using namespace std;
#include<map>
int main(){
    map<string,int>map1;
    map1["tv"]=1000;
    map1["camera"]=2000;
    map1["phone"]=6000;
    map1.insert({"laptop",20000});
    map1.emplace("charger",60000);
    cout<<map1.count("laptop")<<endl;//no of keys of laptop
    map1.erase("tv");
    if(map1.find("camera")!=map1.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    for(auto p:map1){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
}


