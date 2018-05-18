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
first->next->next->next->next->next=new Node{6,nullptr};
first->next->next->next->next->next->next=new Node{7,nullptr};
first->next->next->next->next->next->next->next=new Node{8,nullptr};
first->next->next->next->next->next->next->next->next=new Node{9,nullptr};
first->next->next->next->next->next->next->next->next->next=new Node{10,nullptr};
first->next->next->next->next->next->next->next->next->next->next=new Node{11,nullptr};
//first->next->next->next->next->next->next->next->next->next->next->next=first->next->next->next->next;

Node* fast_run=first->next;
Node* slow_run=first;
bool check = false;
while(fast_run){
	if(fast_run == slow_run){
		cout<<"зацикливане"<<endl;
		break;
	}
	if(check){
		slow_run=slow_run->next;
	}
	check = !check;
	fast_run=fast_run->next;
}


return 0;
}
