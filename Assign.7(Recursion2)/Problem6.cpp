#include<iostream>
using namespace std;

string dupremove(string str1,int sPos,int oPos,string str2)
{
    if(str1[sPos]=='\0')
    {
        cout<<str2;
        return str2;
    }
    if(sPos>0 && str1[sPos]!=str1[sPos-1])
      {
        str2[oPos]=str1[sPos];
        oPos=oPos+1;
        cout<<str2[oPos];
      }
      if(sPos==0)
      {
        str2[oPos]=str1[sPos];
        oPos=oPos+1;
         cout<<str2[oPos];
      }
    string str=dupremove(str1,sPos+1,oPos,str2);
    return str;
}
int main()
{
   string str1="helllllllllo";
   string str2="";
   cout<<dupremove(str1,0,0,str2);
   return 0;
}
