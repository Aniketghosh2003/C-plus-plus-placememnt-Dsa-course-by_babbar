#include <iostream>
using namespace std;
#include <vector>

void merge(int arr1[], int m, int arr2[], int n, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }

    while (j < m)
    {
        arr3[k++] = arr2[j++];
    }

}

void print(int arr[] , int a){
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
}

    // vector<int> reverse(vector<int> v){
    //  int s = 0;
    //  int e = v.size() - 1;
    //   while (s<=e)
    //   {
    //     swap(v[s],v[e]);
    //     s++;
    //     e--;
    //   }

    //   return v;

    // }
    // void print(vector<int> v){
    //     for (int i = 0; i < v.size(); i++)
    //     {
    //         cout<< v[i] << " ";
    //     }
    //     cout<<endl;
    // }

    int main()
    {

        //    vector<int> v ;

        //     v.push_back(11);
        //     v.push_back(7);
        //     v.push_back(3);
        //     v.push_back(12);
        //     v.push_back(4);

        //     vector<int> ans = reverse(v);

        //     cout << "Printing reverse Array" <<endl;
        //     print(ans);

        int arr1[5] = {1, 2, 3, 4, 10};
        int arr2[4] = {5, 6, 7, 8};
        int arr3[9] = {0};

        merge(arr1 , 5 , arr2 , 4 , arr3);
        print(arr3 , 8);
        return 0;
    }
