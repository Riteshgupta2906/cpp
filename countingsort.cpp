#include<bits/stdc++.h>
using namespace std;

void counting_sort(int a[],int n)
{
    int largest=-1;
    for(int i=0;i<n;i++)
    {
        largest =max(largest,a[i]);
    }
    vector<int>freq(largest+1,0);
    for(int i=0;i<=n;i++)
    {
        freq[a[i]]++;
    }

    int j=0;
    for(int i=0;i<=largest;i++)
    {
        while(freq[i]>0)
        {
           a[j]=i;
           freq[i]--;
           j++;


        }
        
    } 
return ;


}




int main(){
    int arr[]={5,7,4,2,3,1,1};
    int n =sizeof(arr)/sizeof(int);
    counting_sort(arr,n);
    for(auto x:arr){
        cout<<x<<",";
    }
    return 0;
}
