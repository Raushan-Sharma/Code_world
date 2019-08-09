#include<iostream>
using namespace std;
bool CheckString(string str1,string str2,int i,int j)
{
if(str1[i] && str2[j] =='\0')
 return true;
 bool fl;
 if(str1[i]==str2[j])
    bool fl= CheckString(str1,str2,i+1,j-1);
 else
  return false;
 if(fl)
   return true;
}
int main()
{
string str1="RAT";
string str2="TARr";
cout<<CheckString(str1,str2,0,3);
return 0;
}
