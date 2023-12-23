#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_map<string,int> m;


    //***insertion***
    //1
    pair<string,int> p = make_pair("babbar",3);
    m.insert(p);
    //2
    pair<string,int> q("love",2);
    m.insert(q);
    //3
    m["mera"] = 1;

     cout<< m["mera"] << endl;
     cout<< m.at("babbar") << endl;
    return 0;
}
