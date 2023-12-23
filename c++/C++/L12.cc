#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    int even[5] = {3, 5, 6, 7, 45};

    cout << binarysearch(even, 5, 6) << endl;
    return 0;
}
