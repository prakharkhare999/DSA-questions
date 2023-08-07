#include<iostream>
#include"Node.cpp"
using namespace std;

void print(Node * &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

void insertathead(Node* &head,int data){
    //step1
    Node *newnode=new Node(data);
    //step 2
    newnode->next=head;
    //step 3
    head=newnode;


}



int main(){
 Node *head=NULL;
cout<<"printing the LL"<<" ";

insertathead(head,40);
insertathead(head,50);
insertathead(head,60);
insertathead(head,70);
insertathead(head,80);
print(head);
 
}
