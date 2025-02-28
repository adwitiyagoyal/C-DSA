#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> s;

    pair<string, int> p = make_pair("name", 2);
    s.insert(p);
    pair<string, int> p1("nami", 2);
    s.insert(p1);
    cout<<s["nami"]<<endl;
    cout<<s.at("name")<<endl;

    //cout<<s.at("fun")<<endl;  //give error becuse of unknow entry
    cout<<s["fun"]<<endl;  //make new entry and set its value to 0
    s["fun"] = 5;
    cout<<s.size()<<endl; //To check size

    cout<<s.count("nam")<<"j"<<endl ;//To check presense

    s.erase("nami"); //To erase

    //iterator
    map<string, int> :: iterator it = s.begin();

    while(it != s.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}
