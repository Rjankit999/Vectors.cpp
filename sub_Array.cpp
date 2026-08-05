#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, -5};
    int n = 5;
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int sum = 0;
        for (int end = start; end < n; end++)
        {
            sum += arr[end];
            maxSum = max(sum, maxSum);
        }
    }
    cout << maxSum;
}
