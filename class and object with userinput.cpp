#include <iostream>
using namespace std;
#include <list>
class Ytchannel{
public:
    string Name;
    string Ownername;
    int Subcount;
    list<string> Publishedvideos;
};
int main(){
    Ytchannel channel1;
    cout<<"enter the channel name:\n";
    cin>> channel1.Name;
    getline(cin, channel1.Name);
    cout<<"enter the owner Name:\n";
    cin>>channel1.Ownername;
    getline(cin,channel1.Ownername);
    channel1.Publishedvideos ={"20","202"};
    cout<<"channel name: "<<channel1.Name<<endl;
    cout<<"owner Name: "<<channel1.Ownername<<endl;
    cout<<"published videos: "<<endl;
    for(string videos:channel1.Publishedvideos){
        cout<<videos<<endl;
    }

}
