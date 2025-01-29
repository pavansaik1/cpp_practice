#include <iostream>
using namespace std;
string whichday(int num){
    string result;
    switch (num)
    {
    case 0:
        result = "sunday";
        break;
    case 1: 
          result = "monday";
          break;
    case 2: 
          result = "tuesday";
         break;
    case 3: 
          result = "wednesday";
          break;
    case 4: 
          result = "thursday";
          break;            
    case 5: 
          result = "friday";
          break;
    default:
            result = "Invalid day number";
            break;         
    }
    return result; 
}


int main(){
    cout << whichday(0);
    return 0;
}