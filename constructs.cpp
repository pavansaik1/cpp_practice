#include <iostream>
using namespace std;
class Car{
public:
    string Company;
    string Colour;
    int Cost;
    Car(string colour,string company){
        Colour =colour;
        Company=company;
        Cost = 2000;
    }
    void giveinfo(){
        cout<<Colour<<endl;
        cout<<Cost<<endl;
        cout<<Company<<endl;
        
    }
};
int main(){
    Car car1("white","volvo");
    Car car2("bmw","black");
    car1.Cost=2000000;
    car1.giveinfo();
    car2.giveinfo();

    
    
}