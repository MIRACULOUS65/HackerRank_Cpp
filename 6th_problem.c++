//Functions

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int greatest(int a, int b , int c, int d){
    if(a>b && a>c && a>d){
        return a;
    }
    else if(b>c && b>d){
        return b;
    }
    else if(c>d){
        return c;
    }
    else{
        return d;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    cout<< greatest(a,b,c,d);
    return 0;
}
