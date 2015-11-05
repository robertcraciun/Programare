#include <stdio.h>
int main()
{int a[50][50],i,j,n,min,max;
        printf ("Introduceti dimensiunea matricei: ");
    scanf ("%d",&n);
    printf ("Introduceti valorile matricei: \n");
    for (i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf ("%d",&a[i][j]);
    printf ("Matricea arata asa: \n");
    for (i=0;i<n;i++)
        {for(j=0;j<n;j++)
        printf ("a[%d][%d]=%d ",i,j,a[i][j]);
        printf ("\n");}
    min=a[0][0];
    max=a[0][0];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    { if(a[i][j]<min)
        min=a[i][j];
        if(a[i][j]>max)
        max=a[i][j];
    }
    printf("Minim = %d\n",min);
    printf("Maxim = %d\n",max);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            a[i][i]=max;
        for (i=0;i<n;i++)
        {for(j=0;j<n;j++)
        printf ("a[%d][%d]=%d ",i,j,a[i][j]);
        printf ("\n");}
        printf ("\n");
      for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i+j>=n)
            a[i][j]=min;
        for (i=0;i<n;i++)
        {for(j=0;j<n;j++)
        printf ("a[%d][%d]=%d ",i,j,a[i][j]);
        printf ("\n");}
}
