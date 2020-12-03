#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n],sum=0,sum1=0,x;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (i == j){
                sum+=a[i][j];
            }


        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+j) ==(n-1)){
                sum1+=a[i][j];
            }
        }
    }
    x=abs(sum-sum1);
    cout<<x;
    return 0;
}
