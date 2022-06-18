class Solution {
public:
   int heightChecker(vector<int>& heights) {
        int count = 0, index = 0;
        vector<int> bucket(101, 0);
        for(int num: heights)
			bucket[num]++;       
        
        for(int i = 1; i < 101 && index < heights.size(); )
        {
			
            if(bucket[i] > 0)
            {
                if(heights[index] != i)
                    count++;

                index++;
                bucket[i]--;                
            }
            else 
                i++;    
        }
        return count;
    }
};