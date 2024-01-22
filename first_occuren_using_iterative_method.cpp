#include<iostream>
using namespace std;
int first_occu(int arr[],int size,int x)
{
    int low,high,mid;
  low=0,high=size-1;
  
     while(low<=high)
    {
         mid=(low+high)/2;
         if(x<arr[mid])
        {
        
        high=mid-1;

        }
        else if(x>arr[mid])//int arr[]={10,12,13,13,13,15,15,16,18};
        {
            low=mid+1;
        }
        else{
            if(mid==0||arr[mid]!=arr[mid-1])
            {
                return mid;
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
    int arr[]={10,12,13,13,13,15,15,16,18};
    int size=sizeof(arr)/sizeof(arr[0]);
    int index_of_element=first_occu(arr,size,13);
    cout<<"\nIndex of first occurence-->"<<index_of_element;
    cout<<"\n\n";
    return 0;
}