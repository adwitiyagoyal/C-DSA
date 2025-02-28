#include<iostream>
using namespace std;

void update(int **p){
    //p=p+1;
    //kuch change hoga -> no
    *p=*p +1;
    //kuch change hoga -> yes(value at p1)
   // **p=**p+1;
    //kuch change hoga -> yes(value at i)
}

int main(int argc, char const *argv[])
{
    int i=98;
    int *p1 = &i;
    int **p2 = &p1;
    cout<<"before\n";
    cout<<"i -> "<<i<<endl;
    cout<<"p1 -> "<<p1<<endl;
    cout<<"*p1 -> "<<*p1<<endl;
    cout<<"**p2 -> "<<**p2<<endl;
    cout<<"*p2 -> "<<*p2<<endl;
    cout<<"p2 -> "<<p2<<endl;
    update(p2);
    cout<<"after\n";
    cout<<"i -> "<<i<<endl;
    cout<<"p1 -> "<<p1<<endl;
    cout<<"*p1 -> "<<*p1<<endl;
    cout<<"**p2 -> "<<**p2<<endl;
    cout<<"*p2 -> "<<*p2<<endl;
    cout<<"p2 -> "<<p2<<endl;
    
    return 0;
}
