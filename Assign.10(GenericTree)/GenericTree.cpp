#include<iostream>  
#include<queue>
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
class Node{
	private :
		int data;
		Node **children; //dynamic array of pointers
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
pii Diameter(Node* rt){
int max1=-1,max2=-1,MaxDia=-1;
pii out;
for(int i=0;i<rt->child_count;i++){
	pii ans=Diameter(rt->children[i]);
    if(ans.first>max1){
       max2=max1;
	   max1=ans.first;
    }
	else
	    {
	     if(ans.first>max2)
		    max2=ans.first;		      	
		}
	if(ans.second>MaxDia)
	  MaxDia=ans.second;	   	
}
int myDia=max1+max2+2;
MaxDia=max(MaxDia,myDia);
out.first=max1+1;
out.second=MaxDia;
return out;
} 
int Diameter(){
	pii out=Diameter(root);
	return out.second;	
}
Node *InsertPreorder(){
		int d,c;
		cout<<"Enter data"<<endl;
		cin>>d;
		Node *newNode=new Node(d);
		cout<<"Enter no of children";
		cin>>c;
		newNode->child_count=c;
		newNode->children=new Node*[c];
	   for(int i=0;i<c;i++){
	   	   newNode->children[i]=InsertPreorder();
	   }
	   return newNode;		
	}
void InsertLO(){
int d,c;
cout<<"Enter data for root"<<endl;
cin>>d;
root=new Node(d);
queue<Node*>q;
q.push(root);
while(!q.empty())
{
	Node* f=q.front();
	q.pop();
	cout<<"Enter no of children for#"<<f->data<<endl;
	cin>>c;
	f->child_count=c;
	f->children=new Node*[c];
	
	for(int i=0;i<c;i++){
	  cout<<"Enter data for "<<f->data<<endl;;
	  cin>>d;
	  f->children[i]=new Node(d);
	  q.push( f->children[i]);
	}
}
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
void InsertPO(){
	root =InsertPreorder(); 
}
void PrintPreOrder(Node *rt){
	if(rt==NULL)
	return;
	cout<<rt->data<<" ";
	for(int i=0;i<rt->child_count;i++){
		PrintPreOrder(rt->children[i]);		
	}	
}
void PrintPreOrder(){
	PrintPreOrder(root);
}
//////////////////1.Given a tree find sum of all the nodes.//////////////////
int NodeSum(Node * rt){
	
	if(rt==NULL)
	return 0;
	int sum=0;
	for(int i=0;i<rt->child_count;i++)
	{   cout<<"i am in for "<<rt->data<<endl;
		sum+=NodeSum(rt->children[i]);
	}
	return sum+(rt->data);	
}
void Nodesum(){	
	int sum=0;
	sum=NodeSum(root);
	cout<<"\nSum is:"<<sum;	
}
//////////////2.Given two trees,return true if they are structurally identical////////////
bool identical_tree(Node * rt1,Node* rt2){
for(int i=0;i<rt->child_count;i++){
	
	identical_tree(rt1->children[i],rt-<children[i]);
}	
}

///////3.Find next larger element in the Tree i.e find a node with value just greater than n.///////
/*
Node* FindNextLarger(Node *rt,int k)
{         

	int max1=0,max2=0; 
    pii out;
for(int i=0;i<rt->child_count;i++){
	pii ans= SecondLargest(rt->children[i]);
    if(ans.first>max1){
    	max2=max1;
	  	max1=ans.first;
	   		if(ans.second>max2)
	     		max2=ans.second;
    }
	else
	    {
		    if(ans.first>max2)
			   max2=ans.first;		      	
		}
}
	if(rt->data>max1)
	max1=rt->data;
	else
	{
		if(rt->data>max2)
		max2=rt->data;
	}
	out.first=max1;
	out.second=max2;
	return out;
}
void FindNextLarger()
{
	int k;
	cout<<"Enter data for next larger is to find"<<endl;
	cin>>k;
	FindNextLarger(root,k);	
}
*/
////////////////////4.Find the second largest value in the tree.////////////////
pii SecondLargest(Node *rt)
{
	int max1=0,max2=0; 
    pii out;
for(int i=0;i<rt->child_count;i++){
	pii ans= SecondLargest(rt->children[i]);
	//cout<<rt->data<<" "<<max1<<" "<<max2<<endl;

    if(ans.first>max1){
    	max2=max1;
	  	max1=ans.first;
	   		if(ans.second>max2)
	     		max2=ans.second;
    }
	else
	    {
		    if(ans.first>max2)
			   max2=ans.first;		      	
		}

	//cout<<rt->data<<" "<<max1<<" "<<max2<<endl;
	//	cout<<"-----"<<endl;
}
	if(rt->data>max1)
	max1=rt->data;
	else
	{
		if(rt->data>max2)
		max2=rt->data;
	}
	out.first=max1;
	out.second=max2;
	return out;
}

int secondLargest(){
	pii obj= SecondLargest(root);
	return obj.second;
}

//////////////////////////Mirror of a tree////////////////////////////// 
void Mirror(Node* rt)
{
int j=rt->child_count-1;
int k=0;

for(int i=0;i<rt->child_count;i++)
{   //cout<<"Root is:"<<rt->children[k]->data<<endl;
	Mirror(rt->children[i]);
}
k= rt->child_count/2;
for(int l=0;l<k;l++,j--){
	swap(rt->children[l],rt->children[j]);
	}
}

void mirror()
{   
	Mirror(root);
}
//////////////////////5.Count number of leaf nodes in a tree./////////////////
int leafCount(Node* rt){
int cnt=0;
for(int i=0;i<rt->child_count;i++)
{
    int ans=leafCount(rt->children[i]);
    cnt=cnt+ans;
}
if(rt->child_count==0){
	return cnt+1;
}
return cnt;
}
void leafCount(){
	cout<<"Total leaf in this tree is:"<<leafCount(root)<<endl;
}
////////////////////6.Replace each node with its depth value///////////////////////
void ReplaceWithDepth(Node* rt,int depth=0)
{
	rt->data=depth;
	for(int i=0;i<rt->child_count;i++)
	{
	    ReplaceWithDepth(rt->children[i],depth+1);       	       
	}	
}
void replaceWithDepth(){
	ReplaceWithDepth(root);
}
};
int main(){
	GenericTree gt;
	gt.InsertPO();
	//gt.PrintPreOrder();	
	gt.PrintLO();
	//cout<<"\nDiameter:"<<gt.Diameter()<<endl;
	//cout<<"Second Largest element in this tree is:"<<gt.secondLargest()<<endl;
	//gt.mirror();
    //cout<<"\nAfter Mirroring tree is:"<<endl;
	///gt.PrintLO();
	//gt.leafCount();
	//gt.PrintLO();
	gt.replaceWithDepth();
    gt.PrintLO();
    //gt.Nodesum();
    //gt.FindNextLarger();
}
