#include <stdio.h>
int main()
{int a[100],b[100],i,j,n,k=0,l=0,m,aux;
    printf ("Introduceti dimensiunea vectorului: ");
    scanf ("%d",&n);
    printf ("Introduceti valorile vectorului: \n");
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    printf ("Vectorul: \n");
    for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");
        for (i=0;i<n;i++)
        b[i]=a[i];
        for (i=0;i<n;i++)
        printf ("b[%d]=%d ",i,b[i]);
        printf ("\n");
}
