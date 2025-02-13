#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>
int main(){
    multimap<string,int>mp1;
    mp1.insert({"tv",10000});
    mp1.insert({"tv",10000});
    mp1.insert({"tv",10000});
    mp1.insert({"tv",10000});
    cout<<"mp1"<<endl;
    for(auto p:mp1){
        cout<<p.first<<" "<<p.second<<endl;
    }
    //i want to remove tv then;
    cout<<"mp2"<<endl;
    multimap<string,int>mp2;
    mp2.insert({"tv",10000});
    mp2.insert({"tv",10000});
    mp2.insert({"tv",10000});
    mp2.insert({"tv",10000});
    mp2.erase("tv");
    for(auto p:mp2){
        cout<<p.first<<" "<<p.second<<endl;
    }

    // i want to remove 1 tv then;
    cout<<"mp3"<<endl;
    multimap<string,int>mp3;
    mp3.insert({"tv",10000});
    mp3.insert({"tv",10000});
    mp3.insert({"tv",10000});
    mp3.insert({"tv",10000});
    mp3.erase(mp3.find("tv"));
    for(auto p:mp3){
        cout<<p.first<<" "<<p.second<<endl;
    }
    //unordered map
    cout<<"up1"<<endl;
    unordered_map<string,int>up1;
    up1.emplace("laptop",100000);
    up1.emplace("tv",20000);
    up1.emplace("camera",3000);
    for(auto p:up1){
        cout<<p.first<<" "<<p.second<<endl;
    }

}