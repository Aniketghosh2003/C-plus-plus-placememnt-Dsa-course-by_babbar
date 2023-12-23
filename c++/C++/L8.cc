#include <iostream>
using namespace std;

int dummy(int num)
{
    num++;
    cout << "the value of num is" << num << endl;
}

/*bool isprime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}*/

/*int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int x, int y)
{
    int numa = factorial(x);
    int deno = factorial(y) * factorial(x - y);
    return numa / deno;
}*/

/*bool even(int a){
    if (a&1)
    {
        return 0;

    }
    else{
        return 1;
    }

}*/

/*int power(int x , int y)
{
    int ans = 1;
    for (int i = 1; i <= y; i++)
    {
        ans *= x;
    }
    return ans;
}*/

int main()
{
    /*int num = 2;

    cout << endl;
    switch (num)
    {
    case 1:
        cout << "aniket" << endl;

        break;

    case 2:
        cout << "ghosh" << endl;

    default:
        break;
    }
    cout << endl;

    // calculator

    int a, b;
    cout << "Enter value of a " << endl;
    cin >> a;
    cout << "Enter value of b " << endl;
    cin >> b;
    char op;
    cout << "Enter the operation you want to do" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;

    default:
        cout << "Wrong input" << endl;
        break;

}
int a ,b;
cin >> a >>b;
cout << " the answer is "<<power(a,b)<<endl;

     int num;
     cin>>num;

    if (even(num))
    {
        cout<<"Number is even" <<endl;
    }

    else
    {
        cout<<"Number is odd"<<endl;
    }

    int n, r;
    cin >> n >> r;

    cout << "Answer is " << ncr(n, r);

    int num;
    cin >> num;
    if (isprime(num))
    {
        cout << "prime no." << endl;
    }
    else
    {
        cout << "not prime no." << endl;
    }*/

    // pass by value example

    int num;
    cin >> num;
    dummy(num);
    cout << " the value of num outside the dummy function " << num << endl;

    return 0;
}