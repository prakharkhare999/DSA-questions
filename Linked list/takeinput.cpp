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
/// there is a better wat ot tak input


Node * takeinput(){
    int data;
    cin>>data;
   Node *head=NULL;
    while(data!=-1){
        Node*newnode= new Node(data);
        if(head==NULL){
            head=newnode;
        }
        else{
            Node * temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next =newnode;
        }
        cin>>data;
    }
return head;
}
void print(Node* head){
Node *temp=head;
while(temp != NULL){
    cout<<temp->data<<"  ";
    temp=temp->next;
}
}
int main(){
  
  Node * head=  takeinput();
    print(head);
}