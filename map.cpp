#include <iostream>
#include <map>
#include <string>
#include<unordered_map>
using namespace std;
int main()
{
    // map<string,int  > m;
    // m["Phone"]=20000;
    // m["TV"]=15000;
    // m["Tablat"]=25000;

    // m["Eyer_phone"]=10;
    // m["Glace"]=40;
    // m.insert({"Camra",20});
    // m.erase("TV");
    // for(auto p:m){
    //     cout<<p.first<<" " <<p.second<<endl;
    // }
    // cout<<m.count("Phone");

    // if(m.find("Phone3")!=m.end()){
    //     cout<<"Found";
    // }
    // else
    //     cout<<"not found";

    // multimap<string, int> m;
    // m.insert({"Tv", 100});
    // m.insert({"Tv", 100});
    // m.insert({"Tv", 100});

    unordered_map<string , int>m;
    m.emplace("tv",100);
    m.emplace("A",700);
    m.emplace("B",30);

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
}