#include<iostream>
#include<queue>
using namespace std;
typedef pair<int,int> pii;

class TreeNode{
public:
    int data;
    TreeNode* left, *right;

    TreeNode(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

class BinaryTree{
private:
    TreeNode * root;
public:
    BinaryTree(){root=NULL;}

    TreeNode* TakeInputRec()///private function
	{                         
        int d,c;
        cout<<"Enter the data";
        cin>>d;
        if (d==-1) 
		    return NULL;
        
		TreeNode*n=new TreeNode(d);
        n->left=TakeInputRec();
        n->right=TakeInputRec();
        return n;
    }

    void TakeInput(){///public function
        root=TakeInputRec();
        cout<<endl;
    }

    void PrintPreOrder(TreeNode* rt){
        if (rt==NULL) return;
        cout<<rt->data<<" ";
        PrintPreOrder(rt->left);
        PrintPreOrder(rt->right);
    }

    void PrintPreOrder(){///public function
        cout<<"PreOrder:";
        PrintPreOrder(root);
        cout<<endl;
    }
    void PrintPostOrder(TreeNode* rt){
        if (rt==NULL) return;
        PrintPostOrder(rt->left);
        PrintPostOrder(rt->right);
        cout<<rt->data<<" ";
    }

   void PrintPostOrder(){///public function
        cout<<"PostOrder:";
        PrintPostOrder(root);
        cout<<endl;
    }

   void PrintInOrder(TreeNode* rt){
        if (rt==NULL) return;
        PrintInOrder(rt->left);
        cout<<rt->data<<" ";
        PrintInOrder(rt->right);
    }

   void PrintInOrder(){///public function
        cout<<"InOrder:";
        PrintInOrder(root);
        cout<<endl;
    }

    TreeNode* LevelOrderInput(){
        int d;
        cout<<"enter root data:";
        cin>>d;
        TreeNode * n=new TreeNode(d);

        queue<TreeNode*> q;
        q.push(n);
        while (!q.empty()){
            TreeNode* f=q.front();
            q.pop();
            cout<<"Enter data for left node for data-"<<f->data<<":";
            cin>>d;
            if (d!=-1) {
                f->left=new TreeNode(d);
                q.push(f->left);
            }
            cout<<"Enter data for right node for data-"<<f->data<<":";
            cin>>d;
            if (d!=-1) {
                f->right=new TreeNode(d);
                q.push(f->right);
            }
         }
        return n;
    }
    void TakeLOInput(){
        root=LevelOrderInput();
        cout<<endl;
    }

    void PrintLevelOrder(){
        if (root==NULL) return;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        while (!q.empty()){
            TreeNode* f=q.front();
            q.pop();
            if (f==NULL){
                cout<<endl;
                if (!q.empty()) q.push(NULL);
            } else{
                cout<<f->data<<" ";
                if (f->left!=NULL) q.push(f->left);
                if (f->right!=NULL) q.push(f->right);
           }
        }
        cout<<endl;
    }


    pii FindDiameter (TreeNode * rt){
        pii pOut;
        if (rt==NULL){
            pOut.first=-1;
            pOut.second=-1;
            return pOut;
        }
        pii pLeft=FindDiameter(rt->left);
        pii pRight=FindDiameter(rt->right);

        pOut.first=max(pLeft.first,pRight.first)+1;
        int rtDia=pLeft.first+pRight.first+2;
        pOut.second=max(max(pLeft.second,pRight.second),rtDia);
        return pOut;
    }

    void PrintDiamter (){
        pii p=FindDiameter(root);
        cout<<p.second<<endl;
    }

    TreeNode* BuildPreOrderInOrder({
    }

    void BuildPreOrderInOrder(){
 /*       int PreOrder[]= {1,2,4, 8, 5, 3, 6, 9, 7};///{1,2,4,5,3,6,7};
        int InOrder[]= {8, 4, 2, 5, 1, 9, 6, 3, 7};///{4,2,5,1,6,3,7};
        root= BuildPreOrderInOrder(PreOrder,InOrder,0,8,0,8);*/
    }
};

int main(){
    BinaryTree T;
    T.BuildPreOrderInOrder();
    ///T.TakeInput();
    ///T.TakeLOInput();
    T.PrintPreOrder();
    T.PrintInOrder();
    T.PrintPostOrder();
    T.PrintLevelOrder();
    T.PrintDiamter();
}

/// PreOrder Input: 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
///1 2 4 7 9 -1 -1 -1 -1 5 -1 6 -1 8 -1 -1 3 -1 -1
///1 2 4 8 -1 -1 -1 5 -1 -1 3 6 9 -1 -1 -1 7 -1 -1

