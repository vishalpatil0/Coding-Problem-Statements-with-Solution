#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int>v1={1,2,33,4,5};
    cout<<max_element(v1.begin(),v1.end())-v1.begin();
    return 0;
}