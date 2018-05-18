#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};


int main(){

Node *first=nullptr;
first=new Node{1,nullptr};
first->next=new Node{2,nullptr};
first->next->next=new Node{3,nullptr};
first->next->next->next=new Node{4,nullptr};
first->next->next->next->next=new Node{5,nullptr};

Node* curr=first;
Node* next=nullptr;
Node* prev=nullptr;
while(curr!=nullptr){
	next=curr->next;
	curr->next=prev;
	prev=curr;
	curr=next;
}
first=prev;

for(Node* curr=first;curr!=nullptr;curr=curr->next)
cout<<curr->data<<" ";

cout<<endl;



return 0;
}
