#include<iostream>
using namespace std;

int sumOfArray(int arr[10], int n){
    //cout<<"Size:"<<sizeof(arr)<<endl;
    //return 0;
    int sum=0;
    for (int i=0;i<n;i++) sum+=arr[i];
    return sum;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    cout<<arr[5]<<endl;
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<"Sum:"<<sumOfArray(arr,10)<<endl;
}

/*
int main(){
    int arr[10]; int n=10;
    for (int i=0;i<n;i++) cin>>arr[i];

    /*int sum=0;
    for (int i=0;i<n;i++) sum+=arr[i];
    cout<<sum<<endl;*/

    /*int k;cin>>k;

    for (int i=0;i<n;i++){
        if( arr[i]==k) {
            cout<<"Found";
            return 0;
        }
    }
    cout<<"Number not found";

}
*/
