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

int numberelem=0;
cin>>numberelem;
int x=0;
for(Node* curr=first;curr!=nullptr;curr=curr->next)
	x++;

numberelem=x-numberelem;

Node* curr1=first;
for(int i=0;i<numberelem;i++)
{
	curr1=curr1->next;
}
cout<<curr1->data<<endl;


return 0;
}
