#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);  //if we repeat the number but set take only unique no
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(6);
    s.insert(7);
    s.insert(2);
    
    //set give the output in ascending order
    for(int i:s){
        cout<<i<<" ";
    }
    set<int>::iterator it = s.begin();
    it++;
    it++;

    s.erase(it);
    cout<<"\n";

    for(auto i : s){
        cout<<i<<" ";
    }

    // TO CHECK THE PRESENSE OF NUMBER 1->present 0->absent
    cout<<" \nis present "<<s.count(5)<<endl;
    
    //TO FIND ITTERATION (LOCATION) OF ELEMENT
    set<int>::iterator itr = s.find(5);
    cout<<"value present at itr -> "<<*it<<endl;

    for(auto it=itr ;it!=s;it++){
        cout<<*it<<" ";
    }cout<<endl;
}
