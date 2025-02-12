#include<iostream>
using namespace std;
#include<list>
int main(){
    //types of lists
    //1.
    list<int>list1 ={1,2,3,4,5,6};
    cout<<"size: "<<list1.size()<<endl;
    cout<<"value: "<<endl;
    for(int value:list1){
        cout<<" "<<value;
    }
    cout<<endl;
    //2.
    list<int>list2(3,-2);
    cout<<"size: "<<list2.size()<<endl;
    cout<<"value: "<<endl;
    for(int value:list2){
        cout<<" "<<value;
    }
    cout<<endl;
    //3.
    list<int>list3(list1);
    for(int value:list1){
        cout<<" "<<value;
    }
    cout<<endl;
    //pushback and pushfront
    list<int>list4 ={1,2,3,4,5,6,7,8,9,10};
    list4.push_front(0);
    list4.push_back(11);
    cout<<"size: "<<list4.size()<<endl;
    cout<<"value: "<<endl;
    for(int value:list4){
        cout<<" "<<value;
    }
    cout<<endl;
    //popback and popfront
    list<int>list5 ={1,2,3,4,5,6,7,8,9,10};
    list5.pop_back();
    list5.pop_front();
    cout<<"size: "<<list5.size()<<endl;
    cout<<"value: "<<endl;
    for(int value:list5){
        cout<<" "<<value;
    }
    cout<<endl;
    //earase,insert,clear,empty
    list<int>list6 ={1,2,3,4,5,6,7,8,9,10};
    list6.erase(list6.begin());
    cout<<"size: "<<list6.size()<<endl;
    cout<<"value: "<<endl;
    for(int value:list6){
        cout<<" "<<value;
    }
    cout<<endl;
    list<int>list7 ={1,2,3,4,5,6,7,8,9,10};
    list6.insert(list7.begin(),23);
    cout<<"size: "<<list7.size()<<endl;
    cout<<"value: "<<endl;
    for(int value:list7){
        cout<<" "<<value;
    }
    cout<<endl;
    //iterator:
    list<int>list8 ={1,2,3,4,5,6,7,8,9,10};
    list<int>::iterator it;
    for(it = list8.begin();it!=list8.end();it++){
        cout<<" "<<*(it);
    }
    cout<<endl;

    list<int>list9 ={1,2,3,4,5,6,7,8,9,10};
    for(auto it = list9.rbegin();it!=list9.rend();it++){
        cout<<" "<<*(it);
    }
    cout<<endl;

}    

