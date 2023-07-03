#include<stdio.h>

int main()
{
    int a, b, somme;

    printf("Entrez deux nombres a additionner\n");
    scanf("%d%d" &a, &b);

    somme = a + b;

    printf("la somme des deux nombres et = %d\n", somme);

    return 0;
}
