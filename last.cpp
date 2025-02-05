#include <iostream>
using namespace std;
class Student {
private:    
    string Name;
    string From;
    string Branch;
    int Batch;
    int RegistrationNo;
public:
    Student(string name,string from,string branch,int reg){
        Name = name;
        From = from;
        Branch = branch;
        RegistrationNo = reg;
    }
    void batches(int batch){
        Batch = batch;

    }
    void giveinfo(){
        cout<<"Student Name: "<<Name<<endl;
        cout<<"Student Batch no: "<<Batch<<endl;
        cout<<"Student Branch: "<<Branch<<endl;
        cout<<"Student Registration no: "<<RegistrationNo<<endl;
        cout<<"Student From: "<<From<<endl;

    }
};
int main(){
    Student student1("K.Pavan Sai","A.P","MIM",10080);
    student1.batches(25);
    student1.giveinfo();


}
