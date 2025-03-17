#include <iostream>
using namespace std;
class Phone{
    private:
    string Company;
    int cost = 10000;
    int ram;
    int weight;
    protected:
    string Modelname;
    public:
    Phone(string cn,string mn){
        Company = cn;
        Modelname = mn;
    }
    void Ram(){
        ram++;
    }
    void oram(){
        if(ram>0){
            ram--;
        }
    }
    void Weight(int Weight){
        weight = Weight;
    }
    void giveinfo(){
        cout<<Company<<endl;
        cout<<Modelname<<endl;
        cout<<cost<<endl;
        cout<<ram<<endl;
        cout<<weight<<endl;
    }
};
class Iphone:public Phone{
    public:
    Iphone(string name,string modelname):Phone(name,modelname){
    }
    void madein(){
        cout<<Modelname<<" was made in india"<<endl;
    }
};
int main(){
    Iphone iphone("iphone","16 pro max");
    Iphone iphone2("iphone","17 pro max");
    iphone.Ram();
    iphone.Ram();
    iphone.Ram();
    iphone.Ram();
    iphone.Ram();
    iphone.Ram();
    iphone.Ram();
    iphone.Ram();
    iphone.Weight(227);
    iphone.giveinfo();
    iphone.madein();
    iphone2.giveinfo();
    iphone2.madein();

    
}