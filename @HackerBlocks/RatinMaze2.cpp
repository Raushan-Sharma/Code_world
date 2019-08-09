#include<iostream>
using namespace std;
#define M 1000
void printMaze(int row,int col)
{ char *str = new char[row][col];
    for(int i =0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout <<str[i][j]<<" ";
        }
        cout << endl;
    }
    cout <<"-------------------"<<endl;
}
void RatinMaze(char str[][M],int rPos,int cPos,int &cnt,int row,int col)
{
   // str[rPos][cPos]=4;
if(rPos == row-1 && cPos == col-1 ){
    cnt =cnt+1;
    printMaze(str,row,col);
    return;
}
if(cPos <=row-1 && str[rPos][cPos+1]!=1 )
    RatinMaze(str,rPos,cPos+1,cnt,row,col);
if(rPos <=col-1 && str[rPos+1][cPos]!=1 )
    RatinMaze(str,rPos+1,cPos,cnt,row,col);
//str[rPos][cPos]=0;
}
int main()
{
int row,col,userInput;
int cnt=0;
int rPos=0,cPos=0;
cin>>row;
cin>>col;
char *str = new char[row][col];
for (int y = 0; y<row; y++)
   {
        for (int x =0; x<col; x++)
        {
            cin >> userInput;
            str[row][col]= userInput;
        }
    }
RatinMaze(str,rPos,cPos,cnt,row,col);
cout <<cnt;
return 0;
}
