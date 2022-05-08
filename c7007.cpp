 #include<stdio.h>
 int solve() {
 		int grid[4][4]={{1,1,1,0},
                            {1,0,1,0},
                            {0,1,1,0},
                            {0,1,0,0},	};
     int sum = 0;    // 陆地数量
        int cover = 0;  // 相邻数量
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (grid[i][j] == 1) {
                    sum++;
                    // 统计上边相邻陆地
                    if(i - 1 >= 0 && grid[i - 1][j] == 1) cover++;
                    // 统计左边相邻陆地
                    if(j - 1 >= 0 && grid[i][j - 1] == 1) cover++;
                    //统计右边相邻的陆地 
                }
            }
        }
        return sum * 4 - cover * 2;//递归公式 
    }
    int main(){
    		int grid[4][4]={{1,1,1,0},
                            {1,0,1,0},
                            {0,1,1,0},
                            {0,1,0,0},	};
    printf("%d",solve());
	}

