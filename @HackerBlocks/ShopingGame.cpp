#include <iostream>

using namespace std;

int main()
{   int size,i,j,arr1[1000],arr2[1000];
    cout << "enter no of test cases" << endl;
    cin >>size;
    for(i=0;i<size;i++)
    {
        cout <<"Enter element for 1st person and 2nd person resp.";
        cin>> arr1[i] >> arr2[i];
       // cout <<"Enter element for 2nd person";
        //cin >> arr2[i];
    }
    /*for(i=0;i<size;i++)//testing....
    {
        cout <<arr1[i];
        cout <<arr2[i];
    }*/
    for(i=0;i<size;i++)
    {   j=1;

        while((arr1[i] >=0) && (arr2[i]>=0))
        {   //cout<<" i am in while";
            arr1[i]=arr1[i]-j;
              j++;
            arr2[i]=arr2[i]-j;
              j++;
            if(arr1[i]<0)
            {
                cout <<"Harshit"<<endl;
                break;
            }
            if(arr2[i]<0)
            {
                cout << "Aayush"<<endl;
                break;
            }
         }
    }
    return 0;
}
