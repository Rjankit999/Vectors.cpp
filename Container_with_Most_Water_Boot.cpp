#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int minHig = INT_MIN;
    int maximum = INT_MIN;
    int width;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = height.size();
    for (int i = 0, j = n; i < j; i++, j--){
        minHig=min(height[i],height[j]);
        width=j-i;
        maximum=max(maximum, minHig*width);
    }
    cout<<maximum;
}