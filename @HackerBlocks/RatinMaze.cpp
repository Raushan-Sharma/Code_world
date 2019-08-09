#include<iostream>
using namespace std;
#define ROW 5
#define COL 5
void printMaze(char str[ROW][COL])
{
    for(int i =0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            cout <<str[i][j]<<" ";

        }
        cout << endl;
    }
    cout <<"----------"<<endl;
}
void RatinMaze(char str[ROW][COL],int rPos,int cPos,int &cnt)
{
   // str[rPos][cPos]=4;
if(rPos == ROW-1 && cPos == COL-1 ){
    cnt =cnt+1;
   // printMaze(str);
    return;
}
if(cPos <=COL-1 && str[rPos][cPos+1]!=1 )
    RatinMaze(str,rPos,cPos+1,cnt);
if(rPos <=ROW-1 && str[rPos+1][cPos]!=1 )
    RatinMaze(str,rPos+1,cPos,cnt);

 //str[rPos][cPos]=0;
}

int main()
{
int cnt=0;
int rPos=0,cPos=0;
char str[ROW][COL]={
{0,0,0,1,1},
{0,1,0,1,1},
{0,1,0,1,1},
{0,1,0,0,1},
{0,0,0,0,0}
};
RatinMaze(str,rPos,cPos,cnt);
cout <<cnt;
return 0;
}
