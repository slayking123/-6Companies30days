class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int m=INT_MAX;
        int i=0,j=0;
        long long int s=0;
        int n=nums.size();
        while(j<n)
        {
            s+=nums[j];
            if(s>target)
            {
                m=min(m,j-i+1);
                while(s>target)
                {
                    s-=nums[i++];
                   // if(s>target)
                   // m=min(m,j-i+1);
                    if(s>=target) m=min(m,j-i+1);
                }
            }
            else if(s==target)
            {
                m=min(m,j-i+1);
            }
            j++;
        }
        if(m==INT_MAX) return 0;
        else return m;
    }
};
