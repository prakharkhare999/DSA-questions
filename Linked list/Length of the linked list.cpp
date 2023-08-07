#include<iostream>
using namespace std;
class Node{
public:
int data;
Node * next;
Node(){
this->data=0;
this->next=NULL;
}
Node(int data){
    this->data=data;
    this->next=NULL;
}

};

void length(Node * head){
    int count=0;
    while(head){
        count++;
        head=head->next;
    }
    cout<<"length ="<<" "<<count<<" "<<endl;
}


int main(){
Node *n1=new Node(10);

Node *n2=new Node(12);

Node *n3=new Node(13);
Node *n4=new Node(100);

n1->next=n2;

n2->next=n3;
n3->next=n4;


length(n1);

}