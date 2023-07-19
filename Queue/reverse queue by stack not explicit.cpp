#include<bits/stdc++.h>
using namespace std;
void reverse(queue<int>&q){
    stack<int>s;
    while(!q.empty()){
        int temp=q.front();
        s.push(temp);
        q.pop();
         }
while(!s.empty()){
    int temp=s.top();
    q.push(temp);
    s.pop();

}

}
int main(){
queue<int>q;
q.push(2);
q.push(5);
q.push(655);
q.push(7);
q.push(77);
q.push(22);
reverse(q);

while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
    
}
cout<<endl;

}