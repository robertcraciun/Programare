#include <stdio.h>
int main()
{int a[100],b[100],i,j,n,k=0,l=0,m,z=0,max=0,poz=0;
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
     {
         if(a[i]<a[i+1])
            {k++;
            l=k;
            if(l>max)
            max=l;
            if(k==max)
                poz=i+1;
            }
        else
            k=0;
     }
     for (j=poz-max;j<=poz;j++)
            printf("%d ",a[j]);
    printf ("\n");
    printf("%d ",poz);
     printf("%d",max);
}
