#include<iostream>
using namespace  std;
int b_search(int arr[],int size,int x)
{
    int low=0;
  int  high=size-1;
  while(low<=high)
  {
    int mid=(low+high)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]<x)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    
     }
     
  }
return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,13,23,34,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=4;
    int index_of_x=b_search(arr,size,x);
    cout<<"\nIndex of x element-->"<<index_of_x;
    cout<<"\n\n";
    return 0;
}
