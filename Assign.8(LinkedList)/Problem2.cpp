/*Merge two sorted linked lists into one*/
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
}/*
void MergeLinkedlist(Node *hd1,Node *hd2){

	if(hd1->next==NULL)
	   return hd2;
	Node *cur,*temp;
	cur=hd2;
	while(hd1->next!=NULL)
	{
		if(hd1->data>)
		
		
	}
	
MergeLinkedlist(hd1->next,hd2);	
}*/
 Node* Merge (Node* hd1, Node* hd2){
        if (hd1==NULL && hd2==NULL) return NULL;
        if (hd1==NULL && hd2!=NULL) return hd2;
        if (hd2==NULL && hd1!=NULL) return hd1;
        if (hd1->data<hd2->data){
            hd1->next=Merge(hd1->next,hd2);
            return hd1;
        } else {
            hd2->next=Merge(hd1,hd2->next);
            return hd2;
        }
}
  
Node* Merge (LinkedList ll1,LinkedList ll2){
	Node*hd =Merge (ll1.head,ll2.head);
	return hd;
	}
};
int main()
{
LinkedList	ll1;
ll1.InsertAtStart(6);
ll1.InsertAtEnd(7);
ll1.InsertAtEnd(8);
ll1.Print();

LinkedList	ll2;
ll2.InsertAtStart(1);
ll2.InsertAtEnd(2);
ll2.InsertAtEnd(3);
ll2.Print();
Merge(ll1,ll2);

}
