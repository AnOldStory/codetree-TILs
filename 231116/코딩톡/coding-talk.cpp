#include <iostream>

using namespace std;

int pro[27];

int main() {
    // 여기에 코드를 작성해주세요.
    int n,p,m,u,preu=-1;
    char c;
    cin >> n >> m >> p ; // max pro, msg size, check num
    p--;
    for(int i=0;i<m;i++){
        cin >> c >> u; //pro, num
        if (u!=0) {
            if (i>=p){ // 뒷사람들
                pro[c-'A']=1;
            } 
        } else {
            if (i==p){
                for(int i=0;i<n;i++){
                    pro[i]=1;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        if (pro[i]==0) cout << (char) (i+'A')<< ' ';
    }
    return 0;
}