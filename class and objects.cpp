#include <iostream>
#include <list>
using namespace std;
class ytchannel{
public:    //touse ouer arrtibutes in the next function
    string name;
    string ownername;
    int subscriberscount;
    list<string> publishersvideotitle;
};
int main(){
    ytchannel ytchannel1;
    ytchannel1.ownername = "pavan sai";
    ytchannel1.name = "kps maths tutorials";
    ytchannel1.subscriberscount = 50000;
    ytchannel1.publishersvideotitle = {"calculus","applied numerical method"};

    cout<<"ownername : "<<ytchannel1.ownername<<endl;
    cout<<"channel name: "<<ytchannel1.name<<endl;
    cout<<"subscriberscount: "<<ytchannel1.subscriberscount<<endl;
    cout<<"topics explained: "<<endl;
    for(string videotitle:ytchannel1.publishersvideotitle){
        cout<<videotitle<<endl;
    }
}