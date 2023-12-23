#include <iostream>
using namespace std;

int reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

/*bool search(int arr[], int size , int key )
{
 for (int i = 0; i < size; i++)
 {
    if (arr[i] == key)
    {
       return 1;
    }

 }
    return 0;
}*/

/*void update(int arr[], int n)
{
    arr[0] = 100;
    cout<< "Inside the update function"<< endl;
  for (int i = 0; i < n; i++)
  {
    cout<< arr[i] ;

  } cout << endl;


}*/

/*int maximum(int arr[],int n)
{
    int maxi = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxi)
        {
            maxi = arr[i];
        }

    }
    return maxi;
}*/

int printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
}

int main()
{
    /*int arr[10] = {1,2,3};
    for (int i = 0; i < 10; i++)
    {
     cout << arr[i] << " " << endl;
    }
    int arr1[10] = {0};
    for (int i = 0; i < 10; i++)
    {
     cout << arr1[i] << " ";
    }

    printarray(arr1,10);


    int size ;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
     cin >> arr[i];

    }

    cout << maximum(arr , size);


   int number[3] = {1,2,3};

   update(number, 3);
    cout<< "Inside the main function" << endl;
   for (int i = 0; i < 3; i++)
   {
     cout<< number[i] ;

   } cout << endl;

   int number[5] = {1,2,3,4,5};
   cout << "Enter the element you want to find" << endl;
   int element;
   cin >> element;
   bool found = search(number, 5 ,element);

   if (found)
   {
     cout << "The number is found in the array" <<endl;
   }
   else
   {
     cout << "The number is not found " << endl;
   }*/

    int num[5] = {34, -34, 65, 67, 98};

    reverse(num, 5);

    printarray(num, 5);
}
