//SNAKES AND LADDERS
#include<iostream>
using namespace std;
bool f=true;
int *MakeBoard(int aop[],int sPos,int ePos,int board[])
{
	//cout<<sPos<<" "<<ePos<<endl;
	if(sPos>=ePos)
	 	return board;
	if(f){ 
	     	board[aop[sPos]-1]=aop[ePos];
	   	    f=false;    
    	}
    else{ 
    		board[aop[ePos]-1]=aop[sPos];      
    		f=true;
		}
	int *var=MakeBoard(aop,sPos+1,ePos-1,board);
	return var;
}
bool SnakeLadder(int board[],int size_of_board,int pob,int aon[],int size_of_aon,int pon)
 {  cout<<pob<<endl;
   if( pob>size_of_board-1)
 	  return true;
 	if(pon==0)
 	pob=pob+aon[pon]-1;
 	else
 	  pob=pob+aon[pon];
       cout<<pob<<endl;
    if(board[pob]!=0)
	{ 	
      pob=board[pob]-1;
    }
       cout<<pob<<endl;
       cout<<"-----------"<<endl;
    if( pob>size_of_board-1)
 	  return true;
    if(pon == size_of_aon && pob < size_of_board)	
      return false;
    SnakeLadder(board,size_of_board,pob,aon,size_of_aon,pon+1);
 }
 int main()
 {  
/////////for prime number/////////////
int N, i, j, isPrime,epos=-1;
cout << "Enter the size of board\n";
cin >> N;
int *aop=new int[N];
for(i = 2; i <= N; i++)
	{
        isPrime = 0;
        for(j = 2; j <= i/2; j++)
		{
             if(i % j == 0)
			 {
                 isPrime = 1;
                 break;
             }
        }    
        if(isPrime==0 && N!= 1)
		{   epos++;
            aop[epos]=i;
            
		}
    } 
 /*//testing prime array
for(int k=0;k<=epos;k++)
cout<<aop[k]<<" ";
cout<<endl;*/
///////////making board//////////
int board[N]={};
MakeBoard(aop,0,epos,board);
   for(int i=0;i<N;i++)
 	{
		cout<<board[i]<<" ";
	}///
//////////////now we can play/////////////
int M,v;
cout << "\nEnter no of throw\n";
cin >> M;  
int *aon=new int[M];
cout<<"Enter numbers on M throws"<<endl;
for(int k=0;k<M;k++){
	cin>>v;
	aon[k]=v;
}
/////testing dice number /
/*for(int c=0;c<M;c++){
	cout<<aon[c];
}*///ok....
cout<<SnakeLadder(board,N,0,aon,M,0);
return 0;
 }
