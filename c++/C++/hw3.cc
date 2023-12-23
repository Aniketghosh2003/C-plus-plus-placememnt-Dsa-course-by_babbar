#include <iostream>
using namespace std;

int main()
{
    // not couning program
    int money;
    cout << "Enter the money you want :" << endl;
    cin >> money;
    int n100, n50, n10, n1;
    n100 = n50 = n10 = n1= 0;

    switch (money >= 100)
    {
    case 1:
        n100 = money / 100;
        money = money - (n100 * 100);

        break;
    }

    switch (money >= 50)
    {
    case 1:
        n50 = money / 50;
        money = money - (n50 * 50);

        break;
    }

    switch (money >= 10)
    {
    case 1:
        n10 = money / 10;
        money = money - (n10 * 10);

        break;
    }

    switch (money >= 1)
    {
    case 1:
        n1 = money / 1;

        break;
    }

    cout << "100 rs notes :- " << n100 << endl;
    cout << "50 rs notes :- " << n50 << endl;
    cout << "10 rs notes :- " << n10 << endl;
    cout << "1 rs notes :- " << n1 << endl;

    return 0;
}