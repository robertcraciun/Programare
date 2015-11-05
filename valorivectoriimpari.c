#include <stdio.h>
int main()
{int a[100],b[100],c[100],i,j,n,k=0,l=0,m,z=0;
    printf ("Introduceti dimensiunea vectorului 1: ");
    scanf ("%d",&n);
    printf ("Introduceti valorile vectorului 1: \n");
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    printf ("Vectorul 1: \n");
    for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");
    printf ("Introduceti dimensiunea vectorului 2: ");
    scanf ("%d",&m);
    printf ("Introduceti valorile vectorului 2: \n");
    for (i=0;i<m;i++)
        scanf ("%d",&b[i]);
    printf ("Vectorul 2: \n");
    for (i=0;i<m;i++)
        printf ("b[%d]=%d ",i,b[i]);
        printf ("\n");

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
    if(a[i]%2==1 && b[j]%2==1)
        k++;

        printf("%d\n",k);
    for(i=0;i<n;i++)
        if(a[i]%2==1)
            c[i]=a[i];
    for(i=0;i<k;i++)
        printf("%d ",c[i]);

}
