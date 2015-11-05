#include <stdio.h>
int main()
{int a[50][50],i,j,n,m,k,min,max,aux;
    printf ("Introduceti liniile matricei: ");
    scanf ("%d",&n);
    printf ("Introduceti coloanele matricei: ");
    scanf ("%d",&m);
    printf ("Introduceti valorile matricei: \n");
    for (i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf ("%d",&a[i][j]);
    printf ("Matricea arata asa: \n");
    for (i=0;i<n;i++)
        {for(j=0;j<m;j++)
        printf ("a[%d][%d]=%d ",i,j,a[i][j]);
        printf ("\n");}
        printf ("\n");
    for(i=0;i<n;i++)
        for(j=0;j<m-1;j++)
            for(k=j+1;k<m;k++)
            if(a[i][k]<a[i][k] && a[i][k]%2==0 && i%2==1)
            {   aux=a[i][j];
                a[i][j]=a[i][k];
                a[i][k]=aux;
            }
        for (i=0;i<n;i++)
        {for(j=0;j<m;j++)
        printf ("a[%d][%d]=%d ",i,j,a[i][j]);
        printf ("\n");}

}
