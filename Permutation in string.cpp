/*Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
Link : https://leetcode.com/problems/permutation-in-string/
*/

#include<iostream>
using namespace std;
bool checkCounts(int count1[],int count2[])
{
    for (int i = 0; i < 26; i++)
    {
        if(count1[i]!=count2[i])
        {
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1,string s2)
{
    int count1[26]={};   //store the character count of s1 which is the permutation.
    for (int i = 0; i < s1.length(); i++)
    {
        int index=s1[i]-'a';
        count1[index]++;
    }
    
    int count2[26]={};  //store the character count of s2 window which contains the permutations of s1
    int windowSize=s1.length();
    for(int i=0;i<windowSize && i<s2.length();i++)
    {
        int index=s2[i]-'a';
        count2[index]++;
    }
    //on the upper loop we store the character count of s2 within window size which is of length of s1 so if the two array are same then permutation is avialable in s2;
    if(checkCounts(count1,count2))
    {
        return true;    
    }

    //move the window [include new index as last index in window and exclude first index of previous windos to maintain the windos size.]

    int i=windowSize;
    for(;i<s2.length();i++)
    {
        //new character in the window
        int index=s2[i]-'a';
        count2[index]++;

        //remove the old index/character from the window to maintain the size
        char oldchar=s2[i-windowSize];
        index=oldchar-'a';
        count2[index]--;

        if(checkCounts(count1,count2))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s1="ab";
    string s2="eidbaooo";
    cout<<"s1 permutations in s2 string -> "<<checkInclusion(s1,s2)<<endl;
    return 0;
}