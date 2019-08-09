#include<iostream>
using namespace std;
char *Shiftchar(char ch[],int sPos,int wPos,int &cnt)
{
	//cout<<ch<<endl;
if(ch[sPos]=='\0')
    {
        for(int i=1;i<cnt;i++)
            {
                ch[wPos+i]='x';
            }
    return ch;
    }
    
if(ch[sPos]=='x')
    cnt++;
else
{
    ch[wPos]=ch[sPos];
    wPos=wPos+1;
}
char *ch1=Shiftchar(ch,sPos+1,wPos,cnt);
//cout<<ch1;
return ch1;

}

int main()
{
	int cnt=0;
char ch[]="bxbcfcfxxgergrexxxa";
cout<<Shiftchar(ch,0,0,cnt);
return 0;

}
