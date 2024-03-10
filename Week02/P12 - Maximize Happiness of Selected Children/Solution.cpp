class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(), h.end(), greater<int>());
        int n = h.size();
         int cnt = 0;
        long long ans = 0;
        
        for(int i=0; i<n; i++){
            ans+=max(0, h[i]-cnt);
            cnt+=1;
            if(cnt>=k) break;
        }
        return ans;
    }
};