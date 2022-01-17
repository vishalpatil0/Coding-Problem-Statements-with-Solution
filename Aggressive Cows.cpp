/*
Problem Statement
Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.
Input Format :
The first line contains a single integer ‘T’ denoting the number of test cases.

The first line of each test case contains two integers ‘N’ and ‘K’ denoting the number of elements in the array/list and the number of aggressive cows.

The second line contains ‘N’ single space-separated integers denoting the elements of the array.
Output Format :
For each test case, print the majority element in a separate line.
Note :
You do not need to print anything; it has already been taken care of.
Constraints :
1 <= T <= 5
2 <= N <= 20000
2 <= C <= N
0 <= ARR[i] <= 10 ^ 9

Where ‘T’ is the number of test cases, 'N' is the length of the given array and, ARR[i] denotes the i-th element in the array.

Time Limit: 1 sec.
Sample Input 1 :
2
3 2
1 2 3
5 2
4 2 1 3 6
Sample Output 1 :
2
5
Explanation To Sample Input 1 :
In the first test case, the largest minimum distance will be 2 when 2 cows are placed at positions {1, 3}.

In the second test case, the largest minimum distance will be 5 when 2 cows are placed at positions {1, 6}.
Sample Input 2 :
2
6 4
0 3 4 7 10 9
6 3
0 4 3 7 10 9

Link : https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=0
*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isPossibleSolution(vector<int> &stalls, int k,int n, int mid)
{
    int cowCount=1;
    int lastPos=stalls[0];
    for(int i=0;i<n;i++)
    {
        if(stalls[i]-lastPos>=mid)
        {
            cowCount++;
            if(cowCount==k) return true;
            lastPos=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int e=stalls[n-1];
    int s=0,ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(isPossibleSolution(stalls,k,n,mid))
        {
            s=mid+1;
            ans=mid;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;                         
}
int main()
{
    vector<int> v={0,3,4,7,10,9};
    cout<<"Largest distance between cows = "<<aggressiveCows(v,4)<<endl;
    return 0;
}