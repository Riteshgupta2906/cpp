#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n)
{   
    for(int t=1;t<n;t++)
    {

    for(int i=0;i<=n-1-t;i++)
    {
        if(arr[i]>arr[i+1])
         swap(arr[i],arr[i+1]);
        
}}


}

int main(){
    int arr[]={5,2,3,1,4,-6,9,8,10};
    int n =sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(auto x:arr){
        cout<<x<<",";
    }
    return 0;
}