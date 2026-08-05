#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector <int> vet={1,3,5,6};
    // cout<<vet[3];
    // vector<int> vec(3, 5);
    // cout << vec[0];
    // cout << vec[1];
    // cout << vec[2];

    vector<int> vec;
    vec.push_back(90);
    vec.push_back(8);
    vec.push_back(55);
    vec.push_back(55);
    vec.push_back(55);
   cout<< vec.capacity();
    cout<<"size = " <<vec.size();
}
