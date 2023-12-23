#include <iostream>
using namespace std;

// void reverseastring(string& s,int i , int j){
//   if (i>j)
//   {
//     return ;
//   }
//   swap(s[i],s[j]);
//    i++;
//    j--;
//    reverseastring(s,i,j);

// }

// bool checkpalindrome(string s,int i)
// {
//     int n = s.length();
//     if (i>(n-i-1))
//     {
//         return true;
//     }
//     if (s[i] != s[n-i-1])
//     {
//            return false;
//     }
//     else
//     {
//         return checkpalindrome(s,i+1);
//     }
    
    
// }

// int power(int a, int b) {
//     //base case
//     if( b == 0 )
//         return 1;

//     if(b == 1)
//         return a;

//     //RECURSIVE CALL
//     int ans = power(a, b/2);

//     //if b is even
//     if(b%2 == 0) {
//         return ans * ans;
//     }
//     else {
//         //if b is odd
//         return a * ans * ans;
//     }
// }

// void sortArray(int *arr, int n) {

//     //base case - already sorted
//     if(n == 0 || n == 1) {
//         return ;
//     }

//     //1 case sovle karlia - largest element ko end me rakh dega
//     for(int i=0; i<n-1; i++) {
//         if(arr[i] > arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }

//     //Recursive Call
//     sortArray(arr, n-1);

// }
 
 void selectionsort(int arr[],int n){
        if(n == 0 || n == 1)
             return ;

            
        for (int i = 0; i < n - 1; i++)
        {
            int min = i; 
            if(arr[i+1] < arr[i])
                  min = i+1;

            swap(arr[i],arr[min]);      
        }

        selectionsort(arr,n-1);
             
 }

int main()
{
    // string s = "ababa";
    // if (checkpalindrome(s,0))
    // {
    //     printf("It is a palindrome.");
    // }
    // else
    // {
    //     printf("Not a palindrome");
    // }

    int arr[] = {5,4,3,2,1};
    cout << "Sorted arr is :-  "<< endl;
    selectionsort(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    
}
