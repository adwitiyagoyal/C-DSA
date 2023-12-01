//gcd is hcf
#include<iostream>
using namespace std;
//lcm(a,b)*gcd(a,b)=a*b
int gcd(int a,int b){
 //FORMULA OF GCD(a,b) = gcd(a-b,b) or gcd(a%b,b)
    if(a==0){
        return b;
    }

    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }

        if(b>a){
            b=b-a;
        }
    }
    return a;
}

//another formula   gcd(a%b,b)
int gcd1(int a,int b){
     if(a==0){
        return b;
    }

    if(b==0){
        return a;
    }

    while(a!=0&&b!=0){
        if(a>b){
            a=a%b;
        }
        if(a==0){
            break;
        }

        if(b>a){
            b=b%a;
        }

    //    cout<<a<<" ";
    }
    
     if(a==0){
        return b;
    }

    if(b==0){
        return a;
    }

}

int main(){
    cout<<gcd1(87,15);
}