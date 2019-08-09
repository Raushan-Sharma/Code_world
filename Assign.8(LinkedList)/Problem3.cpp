/*Find midpoint of a Linked List*/
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
int FindMid(Node* hd){
    //cout<<"i am in function2";
	Node *sp=hd;
	Node *fp=hd;
    while(fp->next!=NULL && fp->next->next !=NULL){
    //	cout<<"i am in while";
       sp=sp->next;
	   fp=fp->next->next;	
	}
return sp->data;
}
int FindMid()
{   //cout<<"i am in function1";
	int t=FindMid(head);
	return t;
}
  
};
int main()
{
LinkedList	ll;
    ll.InsertAtStart(1);
    ll.InsertAtEnd(2);
    ll.InsertAtEnd(3);
    ll.InsertAtEnd(4);
    ll.InsertAtEnd(5);
     ll.InsertAtEnd(6);
      ll.InsertAtEnd(7);
	ll.Print();
	int t=ll.FindMid();
	cout<<t<<endl;
	
}
