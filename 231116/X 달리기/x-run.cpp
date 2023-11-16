#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int X,i,dis;
    scanf("%d",&X);
    int ans=0;
    for(i=1;dis*2<X;i++){
        ans++;
        dis+=i;
    }
    ans=ans*2;
    if(X-dis*2-i>0){
        ans++;    
    }
    printf("%d",ans);
    return 0;
}