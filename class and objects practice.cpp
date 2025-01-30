#include<iostream>
#include <list>
using namespace std;
class semdetails{
public:
    list<string> name;
    list<string> professor;
    list<int> credits;
    list<int>no_of_classes;
};
int main(){
    semdetails sem1;
    sem1.name = {"calculus","computational chemistry","python"};
    sem1.professor={"priyanka","arup","pavan"};
    sem1.credits={4,4,4};
    sem1.no_of_classes={3,3,3};
    cout<<"subject names: "<<endl;
    for(string subjectnames:sem1.name){
        cout<<subjectnames<<endl;
    } 
    cout<<"subject professors: "<<endl;
    for(string subjectpro:sem1.professor){
        cout<<subjectpro<<endl;
    }
    cout<<"subject credits: "<<endl;
    for(int subjectcredits:sem1.credits){
        cout<<subjectcredits<<endl;
    }
    cout<<"no of classes: "<<endl;
    for(int no:sem1.no_of_classes){
        cout<<no<<endl;
    }      
    
}