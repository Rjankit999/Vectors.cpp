#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    unordered_map<int , int> m;
    vector<int>nums={1,2,3,1};
    int k=2;

    for(int i=0; i<nums.size(); i++){

        if(m.find(nums[i])!=m.end()){
            if(i-m[nums[i]]<=k){
                cout<<"true";
                return true;
            }
        }
        m[nums[i]]=i;
    }
    cout<<"false";
    return false;
    
}