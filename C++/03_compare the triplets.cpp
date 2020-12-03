#include<iostream>
using namespace std;
int test (int a[],int b[]);
int main(){
    int n = 100,m = 100;
    cin>>n;
    cin>>m;
    int a[n],b[m];
    for(int i = 0;i < n;i++){
        cin>>a[i];
        cin>>b[i];
        test(n,m);
    }

    return 0;
}

int test(int n,int m){
    int x = 0,y = 0,i;
    if(a[i] > b[i]){
        x = 1;
        cout>>x;
    }
    /*if(a[i] == b[i]){

    }*/
    if(a[i] < b[i]){
        y = 1;
        cout>>y;
    }
}
