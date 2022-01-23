#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size())
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
    }
};
int main()
{
    vector<int> v={1,2,3,4,0,5,0,0,6,7};
    cout<<"After function call --> "<<endl;
    Solution s;
    s.moveZeroes(v);
    for(int x:v)
    {
        cout<<x<<"-->";
    }  
    cout<<endl;
    return 0;
}