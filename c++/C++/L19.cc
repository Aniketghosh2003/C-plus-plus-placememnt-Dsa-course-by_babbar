#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    array<int,10> a = {3 , 4 , 6, 8, 9, 10, 1 , 7, 5};

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"Elements are following ->"<< a[i] <<endl;
    // }

    // cout<<"Elements at 2nd index ->"<< a.at(2) <<endl;
    // cout<<"Checking the elements  ->"<< a.empty() <<endl;
    cout<<"First element of the array is -> "<< a.front() <<endl;
    cout<<"Last element of the array -> "<< a.back() <<endl;

    return 0;
}
