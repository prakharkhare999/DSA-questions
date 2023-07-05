#include<iostream>
#include<stack>
using namespace std;
void insertbottom(stack<int>&s,int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }
    //create temp 
    int topelement =s.top();
    s.pop();
    //recursive call
    insertbottom(s,target);
    //backtrack
    s.push(topelement);

}

void reverse (stack<int>&s){
//base case
if(s.empty()){
return;
}
//some opertion
int target=s.top();
s.pop();

//recursive call
reverse(s);


//insert at bottom
insertbottom(s,target);








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
    s.push(80);
    reverse(s);
    while(!s.empty()){
cout<<s.top()<<" ";
s.pop();

    }
}