/*Eliminate duplicates from a sorted linked list*/
#include<iostream>
#include<vector>
using namespace std;
class Node{
	private:
		int data;
		Node *next;
	public:
		Node(int d){
			data=d;
			next=NULL;
		}	
	friend class LinkedList;
};
class LinkedList{
private:
     Node* head;
public:
	 LinkedList(){
	 	head=NULL;	
}
void InsertAtStart(int d){
        Node* newNode=new Node(d);
        newNode->next=head;
        head=newNode;
    }
void InsertAtEnd(int d){
        if (head==NULL){
            InsertAtStart(d);
            return;
        }
        Node* t=head;
        while (t->next!=NULL){
            t=t->next;
        }
        Node* newNode=new Node(d);
        t->next=newNode;
}
void InsertAtK(int d, int k){
        if (head==NULL||k==1){
            InsertAtStart(d);
            return;
        }
        Node* t=head;
        int cnt=1;
        while (cnt<k-1&&t->next!=NULL){
            t=t->next;
            cnt++;
        }
        Node* newNode=new Node(d);
        newNode->next=t->next;
        t->next=newNode;
    } 
    void Print(){
        Node * t=head;
        while (t!=NULL){
            cout<<t->data<<" ";
            t=t->next;
        }
        cout<<endl;
    }
void Eli_dup(Node* &hd){
	
	if(hd->next==NULL || hd==NULL)
	  return;
	Node *cur,*prev=hd; 
	cur=hd->next;
    
	while( cur->next !=NULL){
		if(hd->data==cur->data){
		prev->next=cur->next;
		cur=cur->next;
		}
		else
		{ 
	      prev=prev->next;	
	      cur=cur->next;	
	    }
	}
Eli_dup(hd->next);
}

void Eli_dup(){
        Eli_dup(head);
    }
  
};
int main()
{
LinkedList	ll;
    ll.InsertAtStart(1);
    ll.InsertAtEnd(2);
    ll.InsertAtEnd(1);
    ll.InsertAtEnd(2);
    ll.InsertAtEnd(5);
	ll.Print();
	ll.Eli_dup();
	ll.Print();
}
