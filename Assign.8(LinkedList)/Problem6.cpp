/*Check if a linked list is a palindrome*/
#include<iostream>
#include<list>
using namespace std;
void checkPlindrome(Node* hd,Node* cur){
	if(cur==NULL)
	    return;	
	checkPlindrome(hd,cur->next)	
	if(hd->data!=cur->data)
	   
	Node *sp=hd,*fp=hd;
	
	while(fp->next!=NULL|| fp->next->next!=NULL)
	{
		sp=sp->next;
		fp=fp->next->next;
	}
    while(cur->next!=NULL)
	{
    	cur=cur->next;
}
}
int main(){
    list<int> ll;

    ll.push_back(2);
    ll.push_front(1);
    ll.push_back(3);
    list<int>::iterator it; 
    for (it=ll.begin();it!=ll.end();it++){
        int n=*it;
        cout<<n<<"->";
    }
    checkPlindrome(ll.head);
}
