class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        string temp="";
        for(auto c:s){
            if(c != ' ')temp.push_back(c);
            else{
                if(temp != "") str.push_back(temp);
                temp = "";
            }
        }
        if(temp != "") str.push_back(temp);
        string ans="";
        for(int i=str.size() - 1; i>=1 ;i--){
            ans+= str[i]+" ";
        }
        ans+=str[0];
        
        return ans;
    }
};