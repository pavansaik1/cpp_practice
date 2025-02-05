#include <iostream>
using namespace std;
#include <list>
class Ytchannel{
private:   
    string ChannelName;
    string OwnerName;
    int Subscribers = 0;
    list <string> Publishedvideos;
public:
    Ytchannel(string name,string ownername){
        ChannelName = name;
        OwnerName = ownername;
    }
    void subscribe(){
        Subscribers++;
    }
    void unsubscribe(){
        Subscribers--;
    }
    void publishvideos(string title){
        Publishedvideos.push_back(title);
    }
    void giveinfo(){
        cout<<"Channel Name: "<<ChannelName<<endl;
        cout<<"OwnerName: "<<OwnerName<<endl;
        cout<<"subscribers: "<<Subscribers<<endl;
        cout<<"published videos: "<<endl;
        for(string titles : Publishedvideos){
            cout << titles <<endl;
        }
    }
};
class CookingChannel : public Ytchannel{
public:    
    CookingChannel(string name,string ownername) : Ytchannel(name,ownername){

    }
    

};   
int main(){    
    CookingChannel ch1("kps cooking","kps");
    ch1.subscribe();
    ch1.publishvideos("biryani making");
    ch1.publishvideos("chicken biryani making");
    ch1.giveinfo();
    // Ytchannel ytchannel1("kps tutoial","kps");
    // ytchannel1.subscribe();
    // ytchannel1.publishvideos("calculus");
    // ytchannel1.publishvideos("applied numerical method");
    // ytchannel1.giveinfo();
}         
    

