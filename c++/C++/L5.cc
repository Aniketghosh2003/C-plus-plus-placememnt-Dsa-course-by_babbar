#include <iostream>
using namespace std;

int main()
{
    // int a = 3;
    // int b = 5;

    /*cout<< " a&b " << (a&b)<<endl;
    cout<< " a|b " << (a|b)<<endl;
    cout<< " ~a " << (~a)<<endl;
    cout<< " a^b " << (a^b)<<endl;

    cout<< (13<<1)<<endl;
    cout<< (15<<2)<<endl;
    cout<<(14>>2)<<endl;

    cout<< (a++)<<endl;//3
    cout<< (++a)<<endl;//5
    cout<< (a--)<<endl;//5
    cout<< (--a)<<endl;//3

    int n;
    cin>>n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout<< sum << endl;
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int fibbonachi = a + b;
        cout << fibbonachi << " ";

        a = b;
        b = fibbonachi;
    }*/
    int n;
    cin >> n;
    bool prime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
           prime = 0;
           break;
        }
    }
    if (prime == 0)
    {
        cout<<"It is not a prime number"<<endl;
    }
    else
    {
        cout<<"It is a prime number"<<endl;
    }
    
return 0;

}
