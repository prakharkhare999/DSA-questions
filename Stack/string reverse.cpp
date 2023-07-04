#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){

    string s="prakhar";
    stack<char>st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}