#include <stdio.h>


int main()
{
    char n;

    printf("Digite um char:");
    scanf("%c",&n);

    char A=n&1, B=n>>1&1, C=n>>2&1, D=n>>3&1,
    a=B || A&&C || D || !A&&!C,
    b=!C || !B&&!A || B&&A,
    c=!B || A || C,
    d=D || B&&!A || B&&!C || !B&&A&&C || !A&&!C,
    e=B&&!A || D&&!A || !A&&!C,
    f=D || !B&&C || !B&&!A || !A&&C,
    g=D || !B&&C || B&&!C || B&&!A;


    ///Foram usados 0 parênteses

    printf("\n\nO Display acendera as letras \n\n\t\tabcdefg\n\t\t");
    printf("%d%d%d%d%d%d%d\n\n",a,b,c,d,e,f,g);

    ///Daqui para baixo é so para colocar o Display na Tela

    printf("\n\n");
    if(a==1)
        printf("\t\t. . . . .\n");
    else
        printf("\n");


    if(f==1&&b==1)
        printf("\t\t.\t.\n\t\t.\t.\n\t\t.\t.\n\t\t.\t.\n");
    else if(f==1&&b==0)
        printf("\t\t.\n\t\t.\n\t\t.\n\t\t.\n");
    else if(f==0&&b==1)
        printf("\t\t\t.\n\t\t\t.\n\t\t\t.\n\t\t\t.\n");
    else
        printf("\n\n\n\n");


    if(g==1)
        printf("\t\t. . . . .\n");
    else if(g==0&&(A&&!B&&!C&&!D || !D&&C&&B&&A))
        printf("\t\t\t.\n");
    else if(g==0&&(!A&&!B&&!C&&!D))
        printf("\t\t.\t.\n");
    else
        printf("\n");


    if(e==1&&c==1)
        printf("\t\t.\t.\n\t\t.\t.\n\t\t.\t.\n\t\t.\t.\n");
    else if(e==1&&c==0)
        printf("\t\t.\n\t\t.\n\t\t.\n\t\t.\n");
    else if(e==0&&c==1)
        printf("\t\t\t.\n\t\t\t.\n\t\t\t.\n\t\t\t.\n");
    else
        printf("\n\n\n\n");



    if(d==1)
        printf("\t\t. . . . .\n");
    else
        printf("\n");


        printf("\n\n");


    return 0;

}
