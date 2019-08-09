#include<iostream>
#define N 4
using namespace std;
void print(int Board[N][N]){
    for(int i=0;i<N;i++)
    {
      for(int j=0;j<N;j++)
       {
         cout<< Board[i][j];
       }
       cout <<endl;
    }
    cout<<"------------------"<<endl;
}
bool isSafe(int Board[N][N] , int row,int col)
{   int i,j;
    for(i=0;i<col;i++)//this is for row checking....
    {
    if(Board[row][i]==1)
        return false;
    }
    for(i=row-1, j=col-1; i>=0 && j>=0; i--, j--)////this is for upppper backward diagonal checking....
    {
    if(Board[i][j]==1)
        return false;
    }
    for(i=row+1,j=col-1;i<=N-1 && j>=0;i++,j--)////this is for lower backward diagonal checking....
    {
    if(Board[i][j]==1)
        return false;
    }
    return true;
}
void NQueen(int Board[N][N],int col)
 {
     if(col>=N)
     {
         print(Board);
         return;
     }
     for(int i=0;i<N;i++)
     {
        if(isSafe(Board,i,col))
            {
                Board[i][col]=1;
                NQueen(Board,col+1);
                Board[i][col]=0;
            }
     }
 }
int main()
{
int Board[N][N]={};
int col=0;
NQueen(Board,col);

}
