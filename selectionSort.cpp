#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n)
{   
  for (int pos=0;pos<n-1;pos++)
  {
    //  int current =a[pos];
      int min_pos =pos;
      for(int i=pos+1;i<n;i++)
      {
          if(a[min_pos]>a[i])

          {
              min_pos=i;
          }
           swap(a[pos],a[min_pos]);
  }
 

  }
}
   




int main(){
    int arr[]={-5,-7,4,2,3,1};
    int n =sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    for(auto x:arr){
        cout<<x<<",";
    }
    return 0;
}