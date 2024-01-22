#include<iostream>
using namespace std;

int first_occu(int arr[], int size, int low, int high, int x)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < arr[mid])
        {
            return first_occu(arr, size, low, mid - 1, x);
        }
        else if (x > arr[mid])
        {
            return first_occu(arr, size, mid + 1, high, x);
        }
        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
            {
                return mid;
            }
            else
            {
                return first_occu(arr, size, low, mid - 1, x);
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 12, 13, 13, 13, 15, 15, 16, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index_of_element = first_occu(arr, size, 0, size - 1, 13);
    cout << "\nIndex of first occurrence-->" << index_of_element;
    cout << "\n\n";
    return 0;
}
