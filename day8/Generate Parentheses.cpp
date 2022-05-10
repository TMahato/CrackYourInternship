class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate(res, "" ,n,0);
        return res;
    }
    void generate(vector<string> &v,string str, int n , int m){
        if(n==0 and m==0){
            v.push_back(str);
            return;
        }
        if(m > 0) generate(v, str + ")" , n, m-1);
        if(n > 0) generate(v , str+"(" , n-1, m+1);
    }
};