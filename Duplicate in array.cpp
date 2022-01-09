/*
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

A duplicate number is always present in the given array.

Input format:

The first line of the input contains an integer, 'T,’ denoting the number of test cases.
The first line of each test case contains a single integer, 'N', denoting the number of elements in the array.
The second line of each test case contains 'N' space-separated integers denoting the elements of the array 'ARR'.

Sample input:
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
*/
#include<iostream>
#include<vector>
using namespace std;
int common(vector<int>&arr)
{
    int n=arr.size();
    int must_sum=(n*(n-1))/2;
    int given_sum=0;
    for(int x:arr)
    {
        given_sum+=x;
    }
    return given_sum-must_sum;
}
int main()
{
    vector<int> v={4,2,1,3,4};
    cout<<common(v)<<endl;
    return 0;
}