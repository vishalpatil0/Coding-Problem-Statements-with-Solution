#include <iostream>
using namespace std;

int main()
{
    /**
     *  1 2 3
        4 5 6
        7 8 9
     */

    cout << "1st Pattern" << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << j + (i * 3) << " ";
        }
        cout << endl;
    }

    cout << "\n\n2nd Pattern" << endl
         << endl;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << i + (j * 3) << " ";
        }
        cout << endl;
    }

    return 0;
}