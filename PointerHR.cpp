#include <stdio.h>

int main()
{
    int a, b ,c ,d;
    
    scanf("%d %d", &a, &b);
       
    c = a + b;
    d = abs(a - b);
    
    printf("%d\n%d", c, d);

    return 0;
}
