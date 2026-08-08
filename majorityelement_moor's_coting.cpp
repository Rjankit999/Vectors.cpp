#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {1};

    int n = nums.size();
    int feq = 0, ans = nums[0];

    for (int i = 0; i < n; i++)
    {
        if (feq == 0)
        {
            ans = nums[0];
        }
        if (ans==nums[i] )
        {
            feq++; 
        }
        else
        {
            feq--;
        }
    }
    cout << ans;
}