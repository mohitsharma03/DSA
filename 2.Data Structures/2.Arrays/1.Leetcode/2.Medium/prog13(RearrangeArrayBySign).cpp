//Rearrange Array Elements by Sign

//leetcode: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
//gfg: https://bit.ly/3Qr3sSs

//leetcode submissn:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0)  pos.push_back(nums[i]);
            else    neg.push_back(nums[i]);
        }
        int j=-1;
        for(int i=0;i<pos.size();i++){
            nums[++j]=pos[i];
            nums[++j]=neg[i];
        }
        return nums;
    }

//gfg submisn:
    void rearrange(int nums[], int n) {
	    vector<int> pos,neg;
        for(int i=0;i<n;i++){
            if(nums[i]>=0)  pos.push_back(nums[i]);
            else    neg.push_back(nums[i]);
        }
        int i=0,j=0,k=0;
	    while(j<pos.size()&&i<neg.size()){
            nums[k++]=pos[j++];
            nums[k++]=neg[i++];
        }
        while(j<pos.size()) nums[k++]=pos[j++];
	    while(i<neg.size())  nums[k++]=neg[i++];
	}