#include<iostream>
#include "Node.cpp"
using namespace std;




void print(Node *head){
Node *temp=head;
while(temp != NULL){
    cout<<temp->data<<"  ";
    temp=temp->next;
}
}

int main(){
Node*n1=new Node(10);

Node*n2=new Node(30);

Node*n3=new Node(100);

n1->next=n2;
n2->next=n3;
print(n1);
}