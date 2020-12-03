/*
 * Autor   : Amit Baraiya
 * Created : 2020-11-28 11:47:51
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long int a[n],t,ans=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    t=a[0];
   
    for(int i=0; i<n; i++){
        if(a[i] > t){
            t=a[i];
          
        }
    }
   
    for(int i=0; i<n; i++){
        if(a[i] == t){
            ans+=1;
        }
    }
    cout<<ans;
    return 0;
}

