class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        int n=arr.size();
        vector<vector<int> > v;
        if(n<4) return v;
        sort(arr.begin(),arr.end());
         for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
            {
                int left=j+1;
                int right=n-1;
                int r=k-arr[i]-arr[j];
                while(left<right)
                {
                    if(arr[left]+arr[right]<r) left++;
                    else if(arr[left]+arr[right]>r) right--;
                    else{
                        vector<int> temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[left]);
                        temp.push_back(arr[right]);
                        v.push_back(temp);
                        while(left<n && arr[left]==temp[2]) left++;
                         while(right>left && arr[right]==temp[3]) right--;
                    }
                }
                while(j+1<n && arr[j+1]==arr[j]) j++;
            }
            while(i+1<n && arr[i+1]==arr[i]) i++;
        }
    }
};
