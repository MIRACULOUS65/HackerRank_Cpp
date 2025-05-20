#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    string nums[] = {"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin >>a>>b;
    for (int i=a;i<=b;i++){
        if(i>9)
            cout << (i%2?"odd":"even")<<endl;
        else
            cout << nums[i-1]<<endl;
}
    
    return 0;
}
