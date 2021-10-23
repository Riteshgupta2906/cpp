#include<bits/stdc++.h>
using namespace std;

void insert_sort(int arr[],int n)
{   
  for (int i=1;i<n;i++)
  {
      int current=arr[i];
      int prev=i-1;
      while(prev>=0 && arr[prev]<current)
      {
          arr[prev+1]=arr[prev];
          prev--;
      }
      arr[prev+1]=current;

  }
   


}

int main(){
    int arr[]={-5,-7,2,2,3,1};
    int n =sizeof(arr)/sizeof(int);
    insert_sort(arr,n);
    for(auto x:arr){
        cout<<x<<",";
    }
    return 0;
}