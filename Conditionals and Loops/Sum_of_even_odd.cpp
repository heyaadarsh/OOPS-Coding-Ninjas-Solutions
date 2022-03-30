#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int r;
    cin>>n;
    
    int Sum_of_Even_Digits = 0;
    int Sum_of_Odd_Digits = 0;
    while (n!=0){
        r = n%10;
        if (r%2==0){
            Sum_of_Even_Digits = Sum_of_Even_Digits + r;
        }
        else{
            Sum_of_Odd_Digits = Sum_of_Odd_Digits + r;
        }
        n = n/10;
    }
    cout<<Sum_of_Even_Digits<<" "<<Sum_of_Odd_Digits;
}