#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> digits = {1, 2, 3};
    int n = digits.size();
    vector<int> final;
    int ans = 0;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        num = num * 10;
        num = num + digits[i];
    }
    num += 1;
    int power = 1;

    while (num > 0)
    {
        int rem = num % 10;
        ans = ans + rem * power;
        
        final.push_back(ans);
        num = num / 10;
        power = power * 10;
    }

    int m = final.size();
    for (int i = 0; i < m; i++)
    {
        cout << final[i];
    }
}