#include <iostream>
using namespace std;
class HCF
{
public:
    int largest(int arr[], int length)
    {
        int max = 0;
        for (int i = 0; i < length; i++)
        {
            if (max < arr[i])
                max = arr[i];
        }
        return max;
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
        int hcf=0, temp = largest(arr, n);
        for (int i = 1; i <= temp; i++)
        {
            if (check(arr, n, i))
            {
                hcf=i;
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
    cout << "HCF : " << hcf << endl;
    h1.print(arr, n, hcf); //print method of the class.
    return 0;
}