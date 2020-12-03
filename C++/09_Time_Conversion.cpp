/*
 * Autor   : Amit Baraiya
 * Created : 2020-11-29 15:56:46
 */

#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    if(s[8] == 'A'){
        if(s[0] == '1' && s[1] =='2'){
            s[0] = '0';
            s[1] = '0';
        }
    }
    else{
        if(s[0] =='0' || s[1] != '2'){
            s[0] += 1;
            s[1] += 2;
        }
    }
    s[8]='\0';
    cout<<s;
    return 0;
}

