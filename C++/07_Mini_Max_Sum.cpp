/*
 * Autor   : Amit Baraiya
 * Created : 2020-11-26 21:59:43
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    long int a[5],sum=0,min,max;
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        sum+=a[i];   
    }
    min=a[0];
    for(int i=1; i<5; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    max=a[0];
    for(int i=1; i<5; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout<<sum-max<<" "<<sum-min;
    return 0;
}

