#include <iostream>
using namespace std;
class Ytchannel{
private:    
    string Name;
    string Ownername;
    int Subscribers = 0;
    string Bestfor;
public:       
     void getinfo(){

        cout<<"channel name: "<<Name<<endl;
        cout<<"owner name: "<<Ownername<<endl;
        cout<<"no of subscribers: "<<Subscribers<<endl;
        cout<<"best videos in channel: "<<Bestfor<<endl;   
    }
    void subscribe(){
        Subscribers++;
    }
    void unsubscribe(){
        Subscribers--;
    }
    void name(){
        Name = "codebauty";
    }
    void ownername(){
        Ownername = "elisa";
    }
};
int main(){
    Ytchannel ytchannel1;
    ytchannel1.name();
    ytchannel1.ownername();
    ytchannel1.subscribe();
    ytchannel1.getinfo();
    
}
