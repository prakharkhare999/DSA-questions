#include<bits/stdc++.h>
using namespace std;
void byrecursion(queue<int>&q){
// base case 
if(q.empty()){
    return;
}
//step a
int temp=q.front();
q.pop();
//step b
byrecursion(q);
//backtrack
q.push(temp);


}
int main(){
queue<int>q;
q.push(2);
q.push(5);
q.push(655);
q.push(7);
q.push(77);
q.push(22);
byrecursion(q);

while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
    
}
cout<<endl;

}