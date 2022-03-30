#include<iostream>
#include <cmath>
using namespace std;

int main() {
    float basic;
    cin>>basic;
    char grade;
    cin>>grade;
    
    float hra = basic*(20.0/100.0);
    float da = basic*(50.0/100.0);
    float pf = basic*(11.0/100.0);
    
    float allow;
    if (grade==65){
        allow = 1700;
    }
    else if (grade==66){
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    
    float totalSalary;
    totalSalary = basic + hra + da + allow - pf;
    int total = round(totalSalary);
    cout<<total;
	
}