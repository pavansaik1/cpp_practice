#include <iostream>
using namespace std;
class subject{
public:    
    string branch;
    string professor;
    int credits;
    int no;
    subject(string Branch,string Professor){
        branch = Branch;
        professor = Professor;
        credits = 4;
    }
    void getinfo(){
        cout<<branch<<endl;
        cout<<professor<<endl;
        cout<<credits<<endl;
        cout<<no<<endl;
    }
};
int main(){
    subject calculus("maths","priyanka");
    calculus.getinfo();
    // subject calculus;
    // calculus.branch = "maths";
    // calculus.professor = "priyanka";
    // calculus.credits = 4;
    // calculus.no = 3;
    
    // cout<<calculus.branch<<endl;
    // cout<<calculus.professor<<endl;
    // cout<<calculus.credits<<endl;
    // cout<<calculus.no<<endl;
    
    
}
