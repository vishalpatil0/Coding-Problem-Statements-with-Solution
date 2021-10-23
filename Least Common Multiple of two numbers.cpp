#include <iostream>
using namespace std;
int main()
{
    int num1, num2, i;
    cout << "Enter two numbers = " << endl;
    cin >> num1 >> num2;
    int max = (num1 > num2) ? num1 : num2;
    for (i = max; ; i*=2)
    {
        if (i % num1 == 0 && i % num2 ==0)
        {
            break;
        }
    }
    cout << "Least Common Multiple [LCM] of " << num1 << " and " << num2 << " is " << i << endl;
    return 0;
}