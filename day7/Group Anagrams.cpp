class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string>> m;
        
        for(auto s : strs){
            string t = s;
            sort(t.begin() , t.end());
            
            m[t].push_back(s);
        }
        
        vector<vector<string>> anagrams;
        for(auto it : m)
            anagrams.push_back(it.second);
        
        return anagrams;
    }
};