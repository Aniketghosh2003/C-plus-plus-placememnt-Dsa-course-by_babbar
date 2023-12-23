#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
     int arr[100];    
     int size ;


     heap(){
       arr[0] = -1;
       size = 0;
     }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {   int parent = index/2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
          
        }
       
    }

    void print(){
        for (int i = 1; i <= size; i++)
        {
           cout << arr[i] << " ";
        }cout << endl;
        
    }

    void deletefromheap(){
        if (size == 0)
        {
            cout << "Empty heap" << " ";
        }

        arr[1] = arr[size];

        size--;
        int i = 1;
        while (i < size) 
        {
            int left = 2*i;
            int right = 2*i +1;

            if (left < size && arr[i] < arr[left])
            {
                arr[i] = arr[left];
                i = left;
            }
            else if(right < size && arr[i] < arr[right])
            {
                arr[i] = arr[right];
                i = right;
            }
            else{
                return ;
            }
        }
        
        
    }
};

void heapify(int arr[], int n , int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if (left <= n && arr[i] < arr[left])
    {
      largest = left;
    }
    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
    
}

void heapsort(int arr[] , int size){
   
    while (size > 1)
    {
        swap(arr[1],arr[size]);
        size--;

        heapify(arr,size,1);
    }
    

}


int main()
{ 
    int arr[] ={-1,70,60,55,45,50};
    heapsort(arr,5); 

    for (int i = 1; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    priority_queue<int> pq;
    return 0;
}
