#include <stdio.h>
int main()
{int a[100],i,j,n,p,k=0,aux;
    printf ("Introduceti dimensiunea vectorului: ");
    scanf ("%d",&n);
    printf ("Introduceti valorile vectorului: \n");
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    printf ("Vectorul: \n");
    for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");
    printf ("Introduceti numarul de permutari la dreapta: ");
    scanf ("%d",&p);
        for(i=0;i<n;i++)
            {aux=a[0];
            for(j=0;j<n-1;j++)
                a[j]=a[j+1];
            a[n-1]=aux;

            k++;
            if(k==p-1)
                break;
            }
        printf ("%d",k);
        printf ("\n");


        for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");

}
