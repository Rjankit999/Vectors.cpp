#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1,2,3,1,2,3};
    int k = 2;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && (j - i) <= k)
            {
                cout << "true";
                return 0;
            }
        }
    }
    cout << "false";
    return 0;
}