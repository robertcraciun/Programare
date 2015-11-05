#include <stdio.h>

int main()
{int a[50][50],b[50][50],suma[50][50],produs[50][50],i,j,m,n,p,q,k;

        printf ("Introduceti numarul de linii pentru prima matrice: ");
        scanf ("%d",&m);
        printf ("Introduceti numarul de coloane pentru prima matrice: ");
        scanf ("%d",&n);
        printf ("Introduceti valorile primei matrice: \n");
            for (i=0;i<m;i++)
                for(j=0;j<n;j++)
                scanf ("%d",&a[i][j]);
        printf ("Prima matrice: \n");
            for (i=0;i<m;i++)
                {for(j=0;j<n;j++)
                printf ("a[%d][%d]=%d ",i,j,a[i][j]);
                printf ("\n");}
        printf ("Introduceti numarul de linii pentru a doua matrice: ");
        scanf ("%d",&p);
        printf ("Introduceti numarul de coloane pentru a doua matrice: ");
        scanf ("%d",&q);
        printf ("Introduceti valorile celei de-a doua matrice: \n");
            for (i=0;i<p;i++)
                for(j=0;j<q;j++)
                scanf ("%d",&b[i][j]);
        printf ("A doua matrice: \n");
            for (i=0;i<p;i++)
                {for(j=0;j<q;j++)
                printf ("b[%d][%d]=%d ",i,j,b[i][j]);
                printf ("\n");}

        if(m==p && n==q)
            {for (i=0;i<m;i++)
                for(j=0;j<n;j++)
                suma[i][j]=a[i][j]+b[i][j];
        printf ("Suma matricelor este: \n");
            for (i=0;i<m;i++)
                {for(j=0;j<q;j++)
                printf ("[%d][%d]=%d ",i,j,suma[i][j]);
                printf ("\n");}}

        else
            printf ("Nu se poate efectua a+b. \n");

        if(n==p)
            {for(i=0;i<n;i++)
                for(j=0;j<m;j++)
                    for(k=0;k<p;k++)
                    produs[i][j]+=a[i][k]*b[k][j];
            }
        for(i=0;i<n-1;i++)
                {for(j=0;j<m;j++)
                printf ("[%d][%d]=%d ",i,j,produs[i][j]);
                printf ("\n");}
}
