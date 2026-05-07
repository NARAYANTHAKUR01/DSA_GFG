#include <bits/stdc++.h>
using namespace std;

int pov(int n,int p){
    if(p == 0){
        return 1;
    }
    
    
    return n *pov(n,--p);
}
int main()
{
     cout<<pov(2,10);
 
    return 0;
}