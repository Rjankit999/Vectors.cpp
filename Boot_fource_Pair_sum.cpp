#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int target = 20;
    vector<int> num = {2, 9, 11, 15};
    int n = num.size();
     int i = 0, j = n - 1;
    while (i<j)
    {
        int sum=num[i] + num[j];
        if ( sum> target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else{
           cout << "Values : " << num[i] << " , " << num[j] << endl;
            break;
        }
    }
    return 0;
}

