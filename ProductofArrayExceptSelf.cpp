#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {-1,1,0,-3,3};
    vector<int> mul;
    int ans = 1;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {   ans=1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                ans = ans  * nums[j];
            }
            
        }
        cout << ans << " ,";
    }
}