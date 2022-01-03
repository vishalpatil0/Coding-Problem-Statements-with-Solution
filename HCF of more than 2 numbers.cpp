#include <iostream>
using namespace std;
class HCF
{
public:
    int smallest(int arr[], int length)
    {
        int min = INT32_MAX;
        for (int i = 0; i < length; i++)
        {
            if (min > arr[i])
                min = arr[i];
        }
        return min;
    }
    bool check(int arr[], int length, int hcf)
    {
        for (int i = 0; i < length; i++)
        {
            if(arr[i]%hcf!=0)
            {
                return false;
            }
        }
        return true;
    }
    void print(int arr[], int n, int hcf)
    {
        cout << "Highest Common Factor of = [";
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[i] << ",";
        }
        cout << arr[n - 1] << "] is " << hcf << "." << endl;
    }
    int process(int arr[], int n)
    {
        int hcf=0, min = smallest(arr, n);
        for (int i = min; i >= 1; i--)
        {
            if (check(arr, n, i))
            {
                hcf=i;
                return hcf;
            }
        }
        return hcf;
    }
};
int main()
{
    HCF h1;
    int n;
    cout << "Total Numbers = ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int hcf = h1.process(arr, n);
    h1.print(arr, n, hcf); //print method of the class.
    return 0;
}