#include <iostream>

int main() {
    int a=2;
    a = a * 3;
    int b = a - 7;
    printf("%d\n",a);
    printf("%d\n", b);
    int c = 8604;
    int q = c%10;
    int w = c/10;
    int e = w%10;
    int r= c/100;
    int i=r%10;
    int t=c/1000;
    printf("%d\n",q);
    printf("%d\n",e);
    printf("%d\n",i);
    printf("%d\n",t);

    return 0;
}