#include<iostream>
using namespace std;

int main()
{
    int arr[] = {34, 56, 67, 89, 9};
    int sum = 0;
    

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
}