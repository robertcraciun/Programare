#include <stdio.h>
int main()
{int a[100],b[100],i,j,n,k=0,l=0,m,z=0;
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
    if(a[i]==a[i+1])
        k++;
    if(k==n-1)
        printf ("toate identice\n");

    for (i=0;i<n;i++)
        {for(j=0;i<n;i++)
            if(i!=j)
                if(a[i]==a[j])
                l++;}
        printf("%d",l);
        printf("\n");
    if(l!=0 && l<n-1)
        printf ("oarecare\n");
    else
        if(l==0)
            printf ("toate distincte\n");


    for (i=0;i<n;i++)
        {j=0;
            //if(i!=j)
                if(a[i]!=a[j])
                    {z++;
                    b[i]=a[j];
                    }}
        printf("%d",z);
        printf("\n");



    for (i=0;i<z;i++)
        printf ("b[%d]=%d ",i,b[i]);
        printf ("\n");
}

