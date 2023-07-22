#include<bits/stdc++.h>
using namespace std;
void  interleave(queue<int>&q){

//step A:seprate half
int n=q.size();
int k=n/2;
int count =0;
queue<int>q2;

if(q.empty()){
    return;
}

while(!q.empty()){
    int temp=q.front();
    q.pop();
    q2.push(temp);
    count++;
    if(count==k){
        break;
    }


}

//step 2:interleving start krdo;
while(!q.empty() && !q2.empty()){
    int first=q2.front();
    q2.pop();
    q.push(first);
    int second =q.front();
    q.pop();
    q.push(second);

}
//odd wali
if(n&1){
    int element =q.front();
    q.pop();
    q.push(element);
    
}


}
int main(){

    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    
interleave(q);
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();

}



}