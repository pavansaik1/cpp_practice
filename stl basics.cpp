#include <iostream>
using namespace std;
#include<vector>

int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(1);
    cout<<"size and capacity"<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.size()<<endl;
    
    //emplaceback,wait for sometime;

    //pop_back{last element will be removed}
    vec.pop_back();
    for(int value:vec){
        cout<<" "<<value;
    }
    cout<<endl;
    //at() or [],uses to find the value at particular index
    cout<<"at index 0 the value is "<<vec[0]<<endl;
    cout<<"at index 0 the value is "<<vec.at(0)<<endl;
    //if u want first element and last element;
    cout<<"the first element in the array is "<<vec.front()<<endl;
    cout<<"the last element in the array is "<<vec.back()<<endl;

    //types of vectors;
    vector<int>vector1={1,2,3}; //normal vector
    for(int value:vector1){
        cout<<" "<<value;
    }
    cout<<endl;
    //vector(types of repetation,value to be repeated)
    vector<int>vector2(3,6);
    for(int value:vector2){
        cout<<" "<<value;
    }
    cout<<endl;
    //initializing a new vector
    vector<int>vector3(vector2);
    for(int value:vector3){
        cout<<" "<<value;
    }
    cout<<endl;
    //erase,insert,clear,empty
    //if u want to remove a certain element we use this,
    vector<int>vector4={1,2,3,4,5,6}; 
    vector4.erase(vector4.begin());//i want to remove first element
    vector4.erase(vector4.begin() + 1);//i want to remove second element from new list
    for(int value:vector4){
        cout<<" "<<value;
    }
    cout<<endl;
    vector<int>vector5={1,2,3,4,5,6}; 
    //i want to remove 2 and 3 then;
    vector5.erase(vector5.begin()+1,vector5.begin()+3);
    for(int value:vector5){
        cout<<" "<<value;
    }
    cout<<endl;
    //u are going to insert a value at certain position;
    vector<int>vector6(vector5);
    vector6.insert(vector6.begin()+ 2,100);//at index 3,instead of 5 i want to add 100
    for(int value:vector6){
        cout<<" "<<value;
    }
    cout<<endl;
    //clear function clear each element in vector;
    vector<int>vector7(vector5);
    vector7.clear();
    for(int value:vector6){
        cout<<" "<<value;
    }
    cout<<endl;
    //but your capacity is same;
    cout<<vector7.capacity()<<endl;
    //iterators
    vector<int>vector8={1,2,3,4,5,6,7,8};
    cout<<*(vector8.begin())<<endl;
    cout<<*(vector8.end()-1)<<endl;

    vector<int>::iterator it;
    for(it=vector8.begin(); it!=vector8.end(); it++){
        cout<< " "<<*(it);
    }
    cout<<endl;

    for(it=vector8.begin(); it!=vector8.end(); it++){
        cout<< " "<<*(it);
    }
    cout<<endl;







}