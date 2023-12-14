#include <iostream>
#include <vector>
using namespace std;

int divison (int n, int d){
    int start = 0;
    int end = n -1;
    int q;

    while(start <= end){
        int mid = start + (end - start)/2;
        if (mid * d <= n){
            q = mid;
            start = mid + 1;
        }
        else if (mid * d > n ){
            end = mid -1;
        }
    }
    return q;
}

int main(){
    int dividend;
    cin >> dividend;
    int divisor;
    cin >> divisor;
    int q = divison(dividend, divisor);
    
    int r = 0;
    for(int i =0; i < divisor; i++){
        if(((q * divisor)+ r) == dividend){
            break;
        }
        r++;
    }
    
    cout << dividend << " = " << divisor << " * " << q << " + " << r;
}