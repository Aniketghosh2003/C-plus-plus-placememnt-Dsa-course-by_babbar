#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout << arr + i << endl;
    }
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;
    // attention here
    cout << ch << endl;

    char *c = &ch[0];
    // prints entire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

    return 0;
}
