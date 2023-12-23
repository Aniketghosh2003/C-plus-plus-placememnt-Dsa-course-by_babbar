#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {

            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

//to print row wise sum
void printColSum(int arr[][3], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int col=0; col<3; col++) {
        int sum = 0;
        for(int row=0; row<3; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

void printrowSum(int arr[][3], int row, int col) {
    cout << "Printing Sum -> " << endl;
    for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
 
    cout << endl;
}

void largestrowsum(int arr[][3],int row,int col){
int maxsum = 0;
int index = -1;

  for(int row=0; row<3; row++) {
        int sum = 0;
        for(int col=0; col<3; col++) {
            sum += arr[row][col];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
            index = row;
        }
        
    }
    cout<<"Maximum sum at the index "<<index<<" is "<<maxsum;
 
    
}


int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for (int i = 0; i <3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin>>arr[i][j];
    //     }

    // }
    // for (int i  = 0; i <4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
 
    // }
    // int element;
    // printf("Enter the element do you want\n");
    // cin >> element;
    // if (isPresent(arr, element, 3, 3))
    // {
    //     cout << " Element found " << endl;
    // }
    // else
    // {
    //     cout << " Not Found" << endl;
    // }
     
     
    // 
    largestrowsum(arr,3,3);
    return 0;
}
