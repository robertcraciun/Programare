#include <stdio.h>
int main()
{int a[100][100],b[100][100],c[100][100],i,j,n,k=0,l=0,m,z=0,l1,l2;
    printf ("Introduceti numarul de linii pentru matrice: ");
        scanf ("%d",&m);
        printf ("Introduceti numarul de coloane pentru matrice: ");
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
        printf ("Introduceti valorile celei de-a doua matrice: \n");
            for (i=0;i<n;i++)
                for(j=0;j<m;j++)
                scanf ("%d",&b[i][j]);
        printf ("A doua matrice: \n");
            for (i=0;i<n;i++)
                {for(j=0;j<m;j++)
                printf ("b[%d][%d]=%d ",i,j,b[i][j]);
                printf ("\n");}
        printf ("Ce linie sa interschimbam din prima matrice: ");
        scanf ("%d",&l1);
        printf ("Ce linie sa interschimbam din a doua matrice: ");
        scanf ("%d",&l2);
        //for(i=0;i<n;i++)
            for(j=0;j<m;j++)
            {c[l1-1][j]=a[l1-1][j];

            a[l1-1][j]=b[l2-1][j];

            b[l2-1][j]=c[l1-1][j];
            }
            printf ("Prima matrice: \n");
            for (i=0;i<m;i++)
                {for(j=0;j<n;j++)
                printf ("a[%d][%d]=%d ",i,j,a[i][j]);
                printf ("\n");}
            printf ("A doua matrice: \n");
            for (i=0;i<n;i++)
                {for(j=0;j<m;j++)
                printf ("b[%d][%d]=%d ",i,j,b[i][j]);
                printf ("\n");}


}
