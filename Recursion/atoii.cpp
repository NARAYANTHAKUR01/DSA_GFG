#include <bits/stdc++.h>
using namespace std;
int atoii(string s,int n,int i,int number){
    
    if(i == n) return number;
    if(s[i] == ' '){
        i++;
    }
    else{
      number = number*10+ (s[i]-'0');
    i++;  
    }
    
    return atoii(s,n,i,number);
     
}
int main()
{
     cout<<atoii("12345",5,0,0);
 
    return 0;
}