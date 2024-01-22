#include<iostream>
using namespace std;
int count_oness(int arr[],int size,int x)
{
    int low=0,high=size-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x<arr[mid])
        {
            high=mid-1;
        }
        else if(x>arr[mid])
        {
            low=mid+1;
        }
        else{
            if(mid==0||arr[mid]!=arr[mid-1])
            {
                return size-mid;
            }
            else{
                high=mid-1;
            }
        }
    }
  return -1;  
}
int main()
{
    int arr[]={0,0,0,0,0,1,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ones=count_oness(arr,size,1);
    cout<<"\nNumber of ones are -->"<<ones;
    cout<<"\n\n";
return 0;
}