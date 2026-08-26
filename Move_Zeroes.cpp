#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums1(nums.size());

    int j = 0, count = 0;

    for (int i = 0; i < nums.size(); i++)
    {

        if (nums[i] == 0)
        {
            count++;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums1[j] = nums[i];
            j++;
        }
    }

    for (int i = j; i < nums1.size(); i++)
    {
        nums1[i] = 0;
    }

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << endl;
    }
}