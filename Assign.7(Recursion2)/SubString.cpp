#include<iostream>
using namespace std;
int subString(char str[],int sPos,string out[])
{
if(str[sPos]=='\0')
{
  out[0]=" ";
  return 1;
}
int c=subString(str,sPos+1,out);
for(int i=0;i<c;i++)
{
out[c+i]=str[sPos]+out[i];
}
return 2*c;

}
int main()
{
char str[]="abc";
string out[100];
int c=subString(str,0,out);
for(int i =0;i<c;i++)
    {
        cout<<out[i];
    }
 return 0;
}
