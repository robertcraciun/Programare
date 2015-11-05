#include <stdio.h>
int main()
{int a[100],i,j,n,p,k=0,aux=0,min,max,poz1=0,poz2=0;
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
    max=a[0];
    for(i=0;i<n;i++)
    {if(a[i]<min)
        {min=a[i];
        poz1=i;}
    if(a[i]>max)
        {max=a[i];
        poz2=i;}
    }
    printf("%d ",poz1);
    printf("%d \n",poz2);
    if(poz1==poz2+1)
        printf("Nu se poate.");
    if(poz1<poz2 && poz2!=poz1+1)
    {for(i=poz1;i<poz2-1;i++)
        for(j=i+1;j<poz2;j++)
            if(a[i]>a[j])
            {   aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");}
    if(poz1>poz2 && poz1!=poz2+1)
    {for(i=poz2+1;i<poz1-1;i++)
        for(j=i+1;j<poz1;j++)
            if(a[i]>a[j])
            {   aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");}

        return 0;
}
