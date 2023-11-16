#include <iostream>

using namespace std;

int pro[27];

int main() {
    // 여기에 코드를 작성해주세요.
    int n,p,m,u,preu=-1;
    char c,prec;
    cin >> n >> m >> p ; // max pro, msg size, check num
    p--;
    for(int i=0;i<m;i++){
        cin >> c >> u; //pro, num
        if (i>=p){ // 뒷사람들
            pro[c-'A']=1;
        } 
        // 앞번호
        if (u==0 && i>=p) { // 다봄
            for(int i=0;i<n;i++){
                pro[i]=1;
            }
            break;
        } 
        // 앞에 봤던 사람일때
        if (preu==u){
            pro[prec-'A']=1;
        }
        prec=c;
        preu=u;
    }

    for(int i=0;i<n;i++){
        if (pro[i]==0) cout << (char) (i+'A')<< ' ';
    }
    return 0;
}