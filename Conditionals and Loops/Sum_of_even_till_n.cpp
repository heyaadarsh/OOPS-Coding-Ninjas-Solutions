#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = 2;
    int s = 0;

    while (a<=n){
        s = s + a;
        a += 2;
    }
    
    cout<<s;
    
}