class Solution {
 public:
        int n,m;
        vector<int> v;
        vector<vector<int>> a;
        bool alpha(vector<vector<int>>& grid, int i,int j)
        {
            if(i==n)
            {

                v.push_back(j);
                return 1;}

            if(a[i][j] != -1)
                return a[i][j];

            if(grid[i][j] == 1)
            {
                if(j==m-1 || grid[i][j]*grid[i][j+1] == -1)
                    return 0;
                else {
                    a[i][j]=1*alpha(grid,i+1,j+1);
                    return a[i][j];
                }
            }

                if(j==0 || grid[i][j]*grid[i][j-1] == -1)
                    return 0;

                    a[i][j]=1*alpha(grid,i+1,j-1);
                    return a[i][j];


        }
        vector<int> findBall(vector<vector<int>>& grid) {
            vector<int> v1;
             n=grid.size(),m=grid[0].size();

                for(int j=0;j<m;j++)
                    v1.push_back(-1);

            for(int i=0;i<n;i++)
              a.push_back(v1);  

            for(int i=0;i<m;i++)
               if(!alpha(grid,0,i))
                  v.push_back(-1);

            return v;
	}
};