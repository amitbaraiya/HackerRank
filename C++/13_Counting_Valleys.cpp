/*
 * Autor   : Amit Baraiya
 * Created : 2020-12-03 10:36:05
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0,v=0;
    cin>>n;
    char a[n];
    cin>>a;
    for(int i=0; i<n; i++){
        if(a[i] == 'U'){
            x+=1;
            if(x == 0)
                v+=1;
        }
        else{
            x-=1;
        }
    }
    cout<<v;
    return 0;
}

