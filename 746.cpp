class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
    
    int n = cost.size();
    int pre_pre = cost[0];
    int pre = cost[1];
    
    for(int i=2; i<n; i++){
        
        int total_cost = min(pre, pre_pre) + cost[i];
        
        pre_pre = pre;
        pre = total_cost;
    }
    
    return min(pre, pre_pre);
}
};