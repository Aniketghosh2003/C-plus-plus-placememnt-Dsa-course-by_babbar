#include <iostream>
using namespace std;

int hw3(int n)
{
    int c, a = 0, b = 1;
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

/*int hw2(int x)
{
    int count = 0;
    while (x != 0)
    {
        if (x & 1)
        {
            count++;
        }
        x = x >> 1;
        }
    return count;
}*/

/*int hw1( int n)
{
    return ((3*n)+7);
}*/

int main()
{
    /*// homework 1
    int num ;
    cin >> num ;

    cout << "The value of nth turm " << hw1(num) << endl;



    // homework 2
    int a, b;
    cin >> a >> b;
    int ans1 = hw2(a);
    int ans2 = hw2(b);
    int ans = ans1 + ans2;

    cout << "Number of total setbit is " << ans << endl;*/

    // homework 3

    int n;
    cin >> n;
    cout << "The value of " << n << " turm is " << hw3(n) << endl;
}