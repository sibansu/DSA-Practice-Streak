class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> se;
        char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<char, string> mpp;
        for(int i=0; i<26; i++){
            mpp[a[i]] = morse[i];
        }
        
        for(auto el: words){
            string s = "";
            for(char c: el){
                s+=mpp[c];
            }
            se.insert(s);
        }
        return se.size();
    }
};