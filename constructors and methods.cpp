#include<iostream>
#include <list>
using namespace std;
class Ytchannel{
public:    
    string Name;
    string Ownername;
    int Subscriberscount;
    list <string> publishedvideos;
    Ytchannel(string name,string ownername){
        Name = name;
        Ownername = ownername;
        Subscriberscount = 10000;
    }
    void giveinfo(){
        cout<<"channel name: "<<Name<<endl;
        cout<<"ownername: "<<Ownername<<endl;
        cout<<"subcount: "<<Subscriberscount<<endl;

    }
};
int main(){
    Ytchannel ytchannel1("kps tutorials","pavan sai.k");
    ytchannel1.giveinfo();
    Ytchannel ytchannel2("code beauty","elisa");
    ytchannel2.Subscriberscount = 200000;
    //giving specifically the certain subscribers to channel 2 by using class methods
    ytchannel2.giveinfo();

}