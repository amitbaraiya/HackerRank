/*
 * Autor   : Amit Baraiya
 * Created : 2020-12-02 13:55:02
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,tmp,a[101]={0},ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>tmp;
        if(a[tmp] == 1){
            ++ans;
            a[tmp]=0;
        }
        else{
            a[tmp]=1;
        }
    }
    cout<<ans;
    return 0;
}

