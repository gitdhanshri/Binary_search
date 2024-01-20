#include<iostream>
using namespace  std;
// int b_search(int arr[],int size,int x)
// {
//     int low=0;
//   int  high=size-1;
//   while(low<=high)
//   {
//     int mid=(low+high)/2;
//     if(arr[mid]==x)
//     {
//         return mid;
//     }
//     else if(arr[mid]<x)
//     {
//         low=mid+1;
//     }
//     else
//     {
//         high=mid-1;
    
//      }
     
//   }
// return -1;
// }
int r_b_search(int arr[],int size,int low,int high,int x)
{
    int mid=(low+high)/2;
    if(low>high)
    {
        return -1;
    }
    while(low<=high)
    {
        if(x==arr[mid])
        {
            return mid;
        }
        else if(x>arr[mid])
        {
            r_b_search(arr, size,mid+1, high,x);
        }
        else{
            r_b_search(arr,size, low,mid-1,x);
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,13,23,34,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=4;
    int index_of_x=r_b_search(arr,size,0,size-1,4);
    cout<<"\nIndex of x element-->"<<index_of_x;
    cout<<"\n\n";
    return 0;
}
