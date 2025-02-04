#include <iostream>
using namespace std;
class Laptop{
private:    
    string Companyname;
    string Usefor;
    int Generation;
    string Core;
    int Cost;
public:    
    void companyname(string CompanyName){
        Companyname = CompanyName;//Companyname must be equal to CompanyName only..
    }
    void usefor(string UseFor){
        Usefor = UseFor;
    }
    void generation(int GEneration){
        Generation = GEneration;
    }
    void core(string CORE){
        Core = CORE;
    }
    void cost(int COST){
        Cost= COST;
    }

    void giveinfo(){
        cout<<"company name: "<<Companyname<<endl;
        cout<<"uses for: "<<Usefor<<endl;
        cout<<"generation: "<<Generation<<endl;
        cout<<"core: "<<Core<<endl;
        cout<<"cost: "<<Cost<<endl;
    }
};
int main(){
    Laptop laptop1;
    laptop1.companyname("ACER");
    laptop1.core("i3");
    laptop1.cost(37000);
    laptop1.generation(7);
    laptop1.usefor("office work");
    laptop1.giveinfo();
}
