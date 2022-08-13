class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int each = words[0].length();
        int totlen = words.size();
        
        vector<int> ans;
        unordered_map<string, int> mpp;
        
        if(each*totlen > s.length()){
            return ans;
        }
        
        for(string w: words){
            mpp[w]++;
        }
        
        for(int i=0; i<=s.length()-(each*totlen); i++){
            unordered_map<string, int> mpp2;
            
            for(int j=i; j<(each*totlen)+i; j+=each){
                string cur = s.substr(j, each);
                
                if(mpp.find(cur) == mpp.end()){
					break;
				}

				mpp2[cur]++;
                
                if(mpp2[cur] > mpp[cur]){
					break;
				}
            }
            if (mpp2 == mpp){
				ans.push_back(i);
			}
        }
        return ans;
    }
};