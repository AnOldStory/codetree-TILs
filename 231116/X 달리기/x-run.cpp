#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int X,speed,dis;
    scanf("%d",&X);
    int ans=0;
    for(speed=1;dis*2+speed<X;speed++){
        ans++;
        dis+=speed;
    }
    ans=ans*2;
    if(X-dis*2>0){
        ans++;    
    }
    printf("%d",ans);
    return 0;
}