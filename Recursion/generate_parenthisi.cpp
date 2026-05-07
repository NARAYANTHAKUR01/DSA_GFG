class Solution {
public:
    void geneerate(int n,string curr,vector<string> & result,int start,int close){
        if(curr.length() == 2*n){
            result.push_back(curr);
            return;
        }
        if(start<n) geneerate(n,curr+'(',result,start+1,close);
        if(close<start) geneerate(n,curr+')',result,start,close+1);
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
       vector<string> res; 
        geneerate(n,s,res,0,0);
        return res;
    }
};