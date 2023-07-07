#include<iostream>
#include<stack>
using namespace std;


void solve(stack<int>&s,int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }
    //create temp 
    int topelement =s.top();
    s.pop();
    //recursive call
    solve(s,target);
    //backtrack
    s.push(topelement);

}

void insertbottom(stack<int> &s){
if(s.empty()){
    cout<<"stack is empty"<<endl;
    return;
}
int target=s.top();
s.pop();
solve(s,target);


}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    insertbottom(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}