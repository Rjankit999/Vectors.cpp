#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    vector<int> nums1 = {1, 2, 2, 1,3};
    vector<int> nums2 = {2, 2,3};
    vector<int> ans;
    set<int> s1;

    for (int i = 0; i < nums1.size(); i++)
    {
        s1.insert(nums1[i]);
    }

    for (int x : nums2)
    {
        if (s1.find(x) != s1.end())
        {
            s1.erase(x);
            ans.push_back(x);
        }
    }
    for (int x : ans)
    {
        cout << x << endl;
    }
}
