class Solution {
public:
    bool isAnagram(string s, string t) {
        //O(n) solution using maps
         if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i = 0;i<s.size();i++){
            mp1[s[i]]++;
        }
        for(int i = 0;i<t.size();i++){
            mp2[t[i]]++;
        }
        for(int i = 0;i<s.size();i++){
            if(mp1[s[i]]!=mp2[s[i]]){
                return false;
            }
        }
        return true; 
        
        //O(NlogN) time complexity using sort
        /*
        if(s.size()!=t.size()){
            return false;
        }
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s==t){
            return true;
        }
        return false;
        */
    }
};