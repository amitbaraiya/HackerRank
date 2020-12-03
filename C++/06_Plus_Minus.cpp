/*
 * Autor   : Amit Baraiya
 * Created : 2020-11-25 13:32:18
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int len, tmp;
    cin >> len;
    float p=0, n=0, z=0;

    for(int i=0; i<len; i++){
        cin >> tmp;
        if(tmp > 0) ++p;
        else if(tmp <0) ++n;
        else ++z;
    }

    printf("%.6f\n%.6f\n%.6f", p/len, n/len, z/len );

    return 0;
}

