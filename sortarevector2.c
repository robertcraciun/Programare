#include <stdio.h>
int main()
{int a[100],i,j,n,p,k,aux,min;
    printf ("Introduceti dimensiunea vectorului: ");
    scanf ("%d",&n);
    printf ("Introduceti valorile vectorului: \n");
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    printf ("Vectorul: \n");
    for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");
    min=a[0];
    for(i=0;i<n-1;i++)
       {min=a[i];
        for(j=i+1;j<n;j++)
            if(min>a[j])
            {min=a[j];
            k=j;}
        if(min<a[i])
            {aux=a[i];
            a[i]=a[k];
            a[k]=aux;}
            }
        //min=a[j];
        printf("%d \n",min);
        for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");
}
