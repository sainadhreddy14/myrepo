#include<stdio.h>

void main()
{
    int nb, i, fs, count=0, con=1;

    printf("Enter the number of bits: ");
    scanf("%d",&nb);

    int nbarr[nb];

    printf("Enter the bits: ");
    for(i=0;i<nb;i++)
        scanf("%d",&nbarr[i]);

    printf("Enter the frame size: ");
    scanf("%d",&fs);

    while(count!=nb)
    {
        printf("[");
        for(i=0; i<fs; i++)
        {
            if(count==nb) printf("\t0");
            else printf("\t%d",nbarr[count++]);
        }
        printf("\t]\n");
    }
}
