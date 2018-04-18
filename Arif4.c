#include<stdio.h>
int main()
{
    double d;
    float f;
    char c, name[100],
    city[]="Dhaka City Corporation";
    long double ld;
    printf("%d\n", sizeof(d));
    printf("%d\n", sizeof(ld));
    printf("%d\n", sizeof(name));
    printf("%d\n", sizeof(f));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(city));
    printf("%d\n", sizeof(long long));
}
