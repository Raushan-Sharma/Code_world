#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for (int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
}

int main(){
    int arr1[1000], arr2[1000];
    int m, n;
    cin>>m>>n;
    for (int i=0;i<m;i++) cin>>arr1[i];
    for (int i=0;i<n;i++) cin>>arr2[i];
    /*
    PrintArray(arr1,m);
    for (int i=0;i<n;i++) arr1[m+i]=arr2[i];
    PrintArray(arr1,m+n);*/

    int i=m-1,j=n-1,k=m+n-1;

    while (i>=0 && j>=0){
        if (arr1[i]>arr2[j]){
            arr1[k]=arr1[i];
            k--;i--;
        } else {
            arr1[k]=arr2[j];
            j--;k--;
        }
    }
    while (j>=0){
        arr1[k]=arr2[j];
        j--;k--;
    }
    PrintArray(arr1,m+n);
}
