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

void printIthNode(Node *head, int i) {
  // Write your code here
  int count = 0;

  while (head) {
    count++;

    if (count == i + 1) {
      cout << head->data;
      break;
    }

    head = head->next;
  }
}
int main(){
   
    Node *n1=new Node(10);
     Node *n2=new Node(30);
      Node *n3=new Node(40);
       Node *n4=new Node(20);
        Node *n5=new Node(80);
         Node *n6=new Node(100);

n1->next=n2;
n2->next=n3;
n3->next=n4;
n4->next=n5;
n5->next=n6;



printIthNode(n1,4);




}
