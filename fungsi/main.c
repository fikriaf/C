#include <stdio.h>
#include <stdlib.h>

int a, b, c;

void inp_a()
{
    printf("Input A : "); scanf("%d", &a);
}
void inp_b()
{
    printf("Input B : "); scanf("%d", &b);
}
void prosesKali()
{
    c = a*b;
}
int main()
{
    inp_a();
    inp_b();
    prosesKali();
    printf("a x b = %d", c);
    return 0;
}

