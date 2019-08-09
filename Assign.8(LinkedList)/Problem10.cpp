/*Append the last n elements of a linked list to the front.
e.g. for 1Å® 2Å® 3 Å® 4 Å® 5 Å® 6Å® null and n = 2 return 5Å® 6Å® 1Å® 2Å® 3 Å® 4 Å® null*/
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
void AppendN()
  
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
}/*Eliminate duplicates from a sorted linked list*/
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
