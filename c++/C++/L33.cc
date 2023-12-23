#include <iostream>
using namespace std;
// bool issorted(int arr[], int size)
// {
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }

//     if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     else
//     {
//         issorted(arr + 1, --size);
//     }
// }

// int issum(int arr[], int size)
// {

//     if (size == 0)
//     {
//         return 0;
//     }
//     if (size == 1)
//     {
//         return arr[0];
//     }

//     int reminderpart = issum(arr + 1, size - 1);
//     int sum = arr[0] + reminderpart;
//      return sum;
// }

// bool linearsearch(int arr[], int size, int k)
// {
//     if (size == 0)
//     {
//         return false;
//     }
//     if (arr[0] == k)
//     {
//         return true;
//     }
//     else
//     {
//         bool remainingpart = linearsearch(arr + 1, size - 1, k);
//         return remainingpart;
//     }
// }



int main()
{
    // for issorted function
    //  int arr[5] = {4,8,6,9,8};
    //  int size = 5;
    //  int ans = issorted(arr, size);
    //  if (ans)
    //  {
    //      cout<< "Sorted" << endl;
    //  }
    //  else
    //  {
    //      cout<< "Not  Sorted" << endl;
    //  }

    // for issum function
    //    int arr[5] = {4,8,6,9,8};
    //    int size = 5;
    //    cout << "The sum is :" << issum(arr,5);

    // linear search
    // int arr[5] = {4, 8, 6, 9, 8};
    // int size = 5;
    // int key = 8;
    // if (linearsearch(arr, 5, key))
    // {
    //     printf("found it");
    // }
    // else
    // {
    //     printf("Not found");
    // }

    //binary search
    int arr[6] = {2,4,6,7,8,9};

}
