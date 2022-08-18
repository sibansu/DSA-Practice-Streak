class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        unordered_map<int, int> mpp;
        for(int i = 0; i<arr.size(); i++){
            mpp[arr[i]]++;
        }
        vector<int> vec;
        for(auto it: mpp){
            vec.push_back(it.second);
        }
        
        sort(vec.begin(), vec.end(), greater<int>());
        
        int sum=0, count=0;
        for(int i=0;i<vec.size();i++){
            sum+=vec[i];
            count++;
            if(sum>=(arr.size())/2){
                break;
            }
        }
        return count;
    }
};