#include <iostream>
using namespace std;
class Water{
public:    
    string Name;
    string Place;
    string Quality;
    int Litre;
    int Cost;
    Water(string name,string place,string quality){
        Name = name;
        Place =place;
        Quality =quality;
    }
    void getinfo(){
        cout<<"water bottle name: "<<Name<<endl;
        cout<<"water bottle place: "<<Place<<endl;
        cout<<"water bottle cost: "<<Cost<<endl;
        cout<<"water bottle litre: "<<Litre<<endl;
        cout<<"water bottle quality: "<<Quality<<endl;
    }
};
int main(){
    Water first("rail neer","railway station","good");
    
    first.Litre = 1;
    first.Cost = 15;
    first.getinfo();
    


}