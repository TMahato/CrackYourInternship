class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        int l = needle.size() , n = haystack.size();
        
        for(int i=0; i<=n-l; i++){
            if(haystack[i] == needle[0]){
                string s = haystack.substr(i,l);
                if(s == needle) return i;
            }
        }
        return -1;
    }
};