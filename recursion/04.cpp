//sum of n numbers
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    else
    return n + sum(n-1);
}
int main(){
    int n = 10;
    cout<<"the sum is "<< sum(n)<<endl;
}