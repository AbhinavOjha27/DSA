#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int Data;
	Node*next;
	Node(int d){
    Data = d;
    next = NULL;
    }
};

void insertAtStart(Node*&head, int val){
    
    Node*n = new Node(val);
    if (head == NULL){
    	head = n;
    	return;
    }
    n->next = head;
    head = n;
} 

void insertAfterNode(Node*&head, int key){
	Node*n = new Node(25);
	if(head==NULL){
		cout<<"AtLeast One Node Should be There";
		return;
	}
	Node*temp = head;
	while(temp->Data!= key){
		temp = temp->next;
	}
	n->next = temp->next;
	temp->next = n;
} 

void instertAtEnd(Node*head, int val){
	Node*n = new Node(val);
	Node*temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
} 

void Print(Node*head){
	Node*temp = head;
	while(temp!= NULL){
		cout<<temp->Data<<" ";
		temp = temp->next;
	}
	cout<< endl;
}

int main(){
	Node*head = new Node(10);
	Node*Second = new Node(20);
	Node*Third = new Node(30);

	head->next = Second;
	Second->next = Third;

	 Print(head);
	//insertAtStart(head, 5);
	//instertAtEnd(head,40);
	insertAfterNode(head,20);
	Print(head);

}