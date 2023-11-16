#include <iostream>

using namespace std;

char c[101];
int u[101];

int main() {
    // 여기에 코드를 작성해주세요.
    int n,p,m;
    cin >> n >> m >> p ; // max pro, msg size, check num
    p--;

    for(int i=0;i<m;i++){
        cin >> c[i] >> u[i];
    }

    if (u[p]==0) return 0;

    for(int i=0;i<n;i++){
        // if (pro[i]==0) cout << (char) (i+'A')<< ' ';

        bool flag = false;

        for(int j=0;j<m;j++){
            if (u[j]>=u[p] && c[j]-'A' == i) {
                flag = true;
                break;
            }
        }

        if (flag== false) cout << (char)('A'+i)<< " ";


    }

    return 0;
}