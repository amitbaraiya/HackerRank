/*
 * Autor   : Amit Baraiya
 * Created : 2020-11-28 22:56:55
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i] < 38){
            cout<<a[i]<<endl;
        }
        else{
            x=(a[i]/5 + 1) * 5;
            if((x-a[i]) < 3){
                cout<<x<<endl;
            }
            else{
                cout<<a[i]<<endl;
            }
        }
    }
    return 0;
}

