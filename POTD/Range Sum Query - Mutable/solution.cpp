class NumArray {
public:
    vector<int> seg; 
    int n;  

    void buildTree(vector<int>& nums, int pos, int left, int right){
        if (left == right){
            seg[pos] = nums[left]; 
            return;
        }
        int mid = (left+right)/2;
        buildTree(nums, 2*pos+1, left, mid);
        buildTree(nums, 2*pos+2, mid+1, right);
        seg[pos]=seg[2*pos+1]+ seg[2*pos+2];
    }

    
    void updateUtil(int pos, int left, int right, int index, int val) {
        // no overlap
        if(index <left || index >right) return;
        
        // total overlap
        if(left==right){
            if(left==index)
                seg[pos]=val;
            return;
        }

        // partial overlap
        int mid=(left+right)/2;
        updateUtil(2*pos+1,left,mid,index,val); // left child
        updateUtil(2*pos+2,mid+1,right,index,val); // right child
        seg[pos]=seg[2*pos+1]+seg[2*pos+2];
    }

    int rangeUtil(int qlow, int qhigh, int low, int high, int pos){
        if (qlow <= low && qhigh>= high){ // total overlap
            return seg[pos];
        }
        if (qlow > high || qhigh < low) { // no overlap
            return 0;
        }
        // partial overlap
        int mid = low+(high-low)/2;
        return (rangeUtil(qlow, qhigh, low, mid, 2*pos+1) + rangeUtil(qlow, qhigh, mid+1, high, 2*pos+2));
    }
    
    // Constructor for initializing the variables.
    NumArray(vector<int>& nums) {
        if(nums.size() > 0){
            n = nums.size();
            seg.resize(4*n,0);  // Maximum size of a segment tree for an array of size n is 4n
            buildTree(nums, 0, 0, n-1); 
        }
    }
    
    // Update the segment Tree recurively using updateUtil
    void update(int index, int val) {
        if(n==0)return;
        updateUtil(0,0,n-1, index, val);
    }
    
    // Get the sum for a specific range for the segment Tree
    int sumRange(int left, int right) {
        if(n==0)return 0;
        return rangeUtil(left, right, 0, n-1, 0); 
        // query from left to right while segment tree is now at 'root' (pos=0) and range(0, n-1)
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */