#include <iostream>
using namespace std;

class Vehicle{
private:    
    string type;
    string company;
    int capacity;
    int safetypoints = 0;
protected:
    string called;
public:
    Vehicle(string Type,string Company,int Capacity){
        type = Type; 
        company = Company;
        capacity = Capacity;
    }
    void Called(string Called){
        called = Called;
    }
    void safety(){
        safetypoints++;
    }
    void unsafety(){
        if(safetypoints > 0){
            safetypoints--;
        }
    }
    void giveinfo(){
        cout<<"type of vehicle: "<<type<<endl;
        cout<<"this vehicle is called as "<<called<<endl;
        cout<<"company: "<<company<<endl;
        cout<<"capacity: "<<capacity<<endl;
        cout<<"safety points: "<<safetypoints<<endl;
    }
};
class Car:public Vehicle{
public:    
    Car(string Type,string Company,int Capacity):Vehicle(Type,Company,Capacity){       
    }
    void madein(){
        cout<<"this "<<called<<"is made in india"<<endl;
    }

};
int main(){
    Vehicle vehicle1("two wheeler","honda",2);
    vehicle1.Called("bike");
    vehicle1.unsafety();
    vehicle1.unsafety();
    vehicle1.giveinfo();
    cout<<"inheritance one"<<endl;
    Car Car1("four wheeler","SUZIKI",4);
    Car1.Called("the car");
    Car1.madein();
    Car1.giveinfo();

}