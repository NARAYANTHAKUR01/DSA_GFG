 

#include <bits/stdc++.h>
using namespace std;

void generate(int n,string curr,vector<string> & result){
    if(curr.length() == n){
        result.push_back(curr);
        return;
    }
    
    generate(n,curr + "0",result);
    if(curr.empty() || curr.back() != '1'){
        generate(n,curr + '1',result);
    }
}
int main()
{
    string s = "";
    vector<string>result;
    
    generate(3,s,result);
    for(string f:result){
        cout<<f<<endl;
    }

    return 0;
}