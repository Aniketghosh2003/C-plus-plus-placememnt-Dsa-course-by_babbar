#include <iostream>
using namespace std;

void saydigit(int n, string count[])
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;

    n = n / 10;

     saydigit(n, count);
    cout << count[digit] << " ";
}

int main(int argc, char const *argv[])
{
    string count[] = {"zero", "one", "two", "three", "four", "five", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "Enter the number : ";
    cin >> n;

    saydigit(n, count);
    cout << endl;

    return 0;
}
