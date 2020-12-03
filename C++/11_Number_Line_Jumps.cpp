/*
 * Autor   : Amit Baraiya
 * Created : 2020-11-30 23:24:53
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    long int x1,v1,x2,v2,flag=0;
    cin>>x1>>v1>>x2>>v2;
    while(x1 < 100000000){
        x1+=v1;
        x2+=v2;
        if(x1 == x2){
            flag+=1;
        }

    }
    if(flag == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}

