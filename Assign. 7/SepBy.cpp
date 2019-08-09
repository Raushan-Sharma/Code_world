#include<iostream>
using namespace std;

void SepBy(string str,int index)
{
if(str[index]=='\0')
   return ;

   SepBy(str,index+1)
   if(str[index]==str[index-1]){
    str[index+1]=str[index];
   str[index]="*";
   }



}
int main()
{
    string str="hello";
     SepBy(str,0);

    return 0;

}
