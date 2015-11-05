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
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j])
            {   aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");
}
