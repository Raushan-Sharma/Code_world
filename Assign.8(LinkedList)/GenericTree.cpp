#include<iostream>
#include<queue>
using namespace std;
class Node{
	private :
		int data;
		Node **children;//dynamic array of pointers
		int child_count;
	public:
		Node(int d){
			
			data=d;
			children=NULL;
			child_count=0;	
		}
	friend class GenericTree;
};
class GenericTree{
	private:
		Node *root;
	public:
	    GenericTree(){
	    	root=NULL;
		}   
		
Node* InsertPreorder()
{
		int d,c;
		cout<<"Enter data"<<endl;
		cin>>d;
		Node *newNode=new Node(d);
		cout<<"Enter no of children";
		cin>>c;
		newNode->children=new Node*[c];
	   for(int i=0;i<c;i++)
	     {
	   	   newNode->children[i]=InsertPreorder();
	     }
	   return newNode;		
}
void InsertPO()
{
	root =InsertPreorder(); 
}
/*void InsertLO(){
int d,c;
cout<<"Enter data for root";
cin>>d;
root=new Node(d);
queue<Node*>q;
q.push(root);
while(!q.empty())
{
	Node* f=q.front();
	q.pop();
	cout<<"enter no of children for "	
}
}*/
//Given a tree find sum of all the nodes.//
int NodeSum(Node * rt){	
    cout<<"i am in func ";
	if(rt==NULL)
	return 0;
	int sum=0;
	for(int i=0;i<rt->child_count;i++)
	{   cout<<"i am in for "<<rt->data<<endl;
		sum+=NodeSum(rt->children[i]);
	}
	return (sum+(rt->data));	
}
void Nodesum(){	
	int sum=0;
	sum=NodeSum(root);
	cout<<"\nSum is:"<<sum;
}
void PrintLO(){
cout<<"Level Order:";
if(root==NULL)
return ;
queue<Node*> q;
q.push(root);
q.push(NULL);
while(!q.empty()){
	Node* f=q.front();
	q.pop();
    if(f==NULL){
    	cout<<endl;
    	if(!q.empty())
          q.push(NULL);    	
	}
	else{
	 cout<<f->data<<" ";
	 for(int i=0;i<f->child_count;i++){
	 	q.push(f->children[i]);
	 } 
    } 
}
cout<<endl;
}

void PrintPreOrder(Node *rt){
	cout<<"i am at check2"<<endl;
	if(rt==NULL)
	return;
	cout<<rt->data<<" ";
	for(int i=0;i<rt->child_count;i++){
		cout<<"i am at check3"<<endl;
		PrintPreOrder(rt->children[i]);		
	}	
}

void PrintPO(){
	cout<<"i am at check1"<<endl;
	PrintPreOrder(root);
}
};
int main(){
	GenericTree gt;
	gt.InsertPO();
    gt.PrintPO();	
 //	gt.PrintLO();
    //gt.Nodesum();
}
