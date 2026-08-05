#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int maxSum = INT_MIN;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int currSum = 0;
    for (int i = 0; i < 7; i++)
    {
        currSum+=arr[i];
        maxSum=max(currSum , maxSum);
        if(currSum<0){
            currSum=0;
        }

    }
    cout<<maxSum;
}