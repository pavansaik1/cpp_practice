#include<iostream>
using namespace std;
#include<queue>
int main(){
priority_queue<int>pq;
pq.push(3);
pq.push(55);
pq.push(52);
while(!pq.empty()){
    cout<<" "<<pq.top();
    pq.pop();
}
cout<<endl;
}