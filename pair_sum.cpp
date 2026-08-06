#include <iostream>
#include<vector>

using namespace std;
vector <int> pairSum(vector<int> arr, int target){

   vector<int> ans;
   int n =arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
    int main()
    {
        
        int target = 11;
        vector<int> num={2, 9, 11, 15};
        vector<int> ans=pairSum(num,target);
        cout<<ans[0]<<" , "<<ans[1];
    }
