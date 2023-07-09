#include<iostream>
#include<stack>
using namespace std;
void insertsorted(stack<int>&s,int target){
//for empty
if(s.empty()){
s.push(target);
return;
}
//base case
if(s.top()>=target){
    s.push(target);
    return;
}
int topelement=s.top();
s.pop();
insertsorted(s,target);
//backtrack

s.push(topelement);
}
void sort(stack<int>&s){
//base case
if(s.empty()){
return;
}
int topelement =s.top();
s.pop();
sort(s);
insertsorted(s,topelement);

}
void sortstack(){
     
}
int main(){
stack<int>s;
s.push(50);
s.push(4);
s.push(98);
s.push(22);
s.push(02);
sort(s);
while(!s.empty()){
    cout<<s.top()<<" ";
    cout<<endl;
    s.pop();
}
}