#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 1; 
    int n = 5;
    for (int i = 0; i<=n; i++){
        for (int j = 1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
