 #include<stdio.h>
 int solve() {
 		int grid[4][4]={{1,1,1,0},
                            {1,0,1,0},
                            {0,1,1,0},
                            {0,1,0,0},	};
     int sum = 0;    // ½������
        int cover = 0;  // ��������
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (grid[i][j] == 1) {
                    sum++;
                    // ͳ���ϱ�����½��
                    if(i - 1 >= 0 && grid[i - 1][j] == 1) cover++;
                    // ͳ���������½��
                    if(j - 1 >= 0 && grid[i][j - 1] == 1) cover++;
                    //ͳ���ұ����ڵ�½�� 
                }
            }
        }
        return sum * 4 - cover * 2;//�ݹ鹫ʽ 
    }
    int main(){
    		int grid[4][4]={{1,1,1,0},
                            {1,0,1,0},
                            {0,1,1,0},
                            {0,1,0,0},	};
    printf("%d",solve());
	}

