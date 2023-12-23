#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // converting decimal to binary
    /*int n;
    cin >> n;
    float ans = 0;
    int i = 0;

    while (n != 0)
    {
        float bit = n & 1;
        ans = ((bit * pow(10, i)) + ans);

        n = n >> 1;
        i++;
    }
    cout << "answer is " << ans << endl;*/

    // converting binary to decimal
    int n;
    cin >> n;
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        float digit = n % 10;

        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }

        n /= 10;
        i++;
    }

    cout << ans << endl;
}