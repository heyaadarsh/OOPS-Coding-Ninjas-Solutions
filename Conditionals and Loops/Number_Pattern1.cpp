#include <iostream>
using namespace std;

int main(){
    int n=4;
    int i = 1, j = 1;
    int s =  1;
    while (i <= n) {
        s = i;
        while (j <= i) {
 
            cout <<s;
            j++;
            s++;
            
        }
        j = 1;
        i++;
        
        cout << endl;
    }
}