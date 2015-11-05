#include <stdio.h>
int main()
{int a[100],b[100],c[100],i,j,n,k=0,l=0,m,z=0;
    printf ("Introduceti dimensiunea vectorului: ");
    scanf ("%d",&n);
    printf ("Introduceti valorile vectorului 1: \n");
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    printf ("Vectorul 1: \n");
    for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");
    printf ("Introduceti valorile vectorului 2: \n");
    for (i=0;i<n;i++)
        scanf ("%d",&b[i]);
    printf ("Vectorul 2: \n");
    for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,b[i]);
        printf ("\n");

    for (i=0;i<n;i++)
    {c[i]=a[i];
    a[i]=b[i];
    b[i]=c[i];
    }

    printf ("Vectorul 1: \n");
    for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");
        printf ("Vectorul 2: \n");
    for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,b[i]);
        printf ("\n");
}
