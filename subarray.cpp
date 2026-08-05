#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 8,sum=0;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i < end; i++)
            {
                cout << arr[i]<<" ";
            }
            cout << "\n";
        }
        // cout << "\n";
    }
}
