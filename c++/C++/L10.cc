#include <iostream>
using namespace std;

int printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
}


void alternative(int arr[] , int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
           swap(arr[i],arr[i+1]);
        }
        
    }
    
    
}

int main()
{
    int num[4] = {34,45,54,89};
    alternative(num , 4);
    printarray(num , 4);
}
