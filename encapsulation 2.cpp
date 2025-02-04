//doing inheritance and giving names;
#include <iostream>
using namespace std;
class Notebook{
private:    
    string Company;
    string Type;
    string Manufactured;
    int Pages = 300;
    int Cost = 170;
    
public:    
    void getinfo(){
        cout<<"company name: "<<Company<<endl;
        cout<<"type: "<<Type<<endl;
        cout<<"manufactured by: "<<Manufactured<<endl;
        cout<<"no of pages: "<<Pages<<endl;
        cout<<"price: "<<Cost<<endl;
    }
    void company(string cn){
        Company = cn;
    }
    void type(string booktype){
        Type = booktype;
    }
    void page(){
        Pages = Pages/2 ;
    }
    void cost(){
        Cost = Cost/2;
    }
};
int main(){
    Notebook notebook1;
    notebook1.company("tru note");
    notebook1.type("rule note book");
    notebook1.cost();
    notebook1.page();
    notebook1.cost();
    notebook1.page();
    notebook1.getinfo();
    
}