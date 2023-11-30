#include <iostream>

using namespace std;

int max(int a,int b){
    return a>b?a:b;
}

int map[201][201];
int n,m;

int shapes[6][3][3] = {
    {{1, 1, 0},
    {1, 0, 0},
    {0, 0, 0}},

    {{1, 1, 0},
    {0, 1, 0},
    {0, 0, 0}},

    {{1, 0, 0},
    {1, 1, 0},
    {0, 0, 0}},

    {{0, 1, 0},
    {1, 1, 0},
    {0, 0, 0}},

    {{1, 1, 1},
    {0, 0, 0},
    {0, 0, 0}},

    {{1, 0, 0},
    {1, 0, 0},
    {1, 0, 0}},
};

int getMax(int x,int y){
    int local_max=0;
    for(int shape=0;shape<6;shape++){
        int flag=1;
        int maxx=0;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if (shapes[shape][i][j]==0) continue;
                if (x+i>=n || y+j>=m) flag = 0;
                else maxx+=map[x+i][y+j];
            }
            
        }
        if (flag) local_max=max(local_max,maxx);

    }
    return local_max;
}

int main() {
    int ans=0;
    cin >> n >> m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> map[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans = max(getMax(i,j),ans);
        }
    }

    cout << ans;
    return 0;
}