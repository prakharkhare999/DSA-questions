#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>qw;

    //insert
    qw.push(50);
    qw.push(60);
    qw.push(78);

    //size
    cout<<"size"<<qw.size()<<endl;

    //pop
    //delete
    qw.pop();

    //again size
    cout<<"size "<<qw.size()<<endl;


     if(qw.empty()){
        cout<<"queue is empty"<<endl;

     }
     else{
        cout<<"queue is not empty"<<endl;
     }

//front element
cout<<"front element"<<endl;
cout<<qw.front()<<endl;



}