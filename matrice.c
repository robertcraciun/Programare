#include <stdio.h>
int main()
{
    int a[50][50],i,j,n,suma=0,ok=0;
    float media;
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
    /*---b---*/
        for (i=0;i<n;i++)
            for(j=0;j<n;j++)
                suma+=a[i][j];
            printf("suma=%d \n",suma);
    /*---c---*/
        for (i=0;i<n;i++)
            for(j=0;j<n;j++)
                media=(float)suma/(n*n);
            printf("media=%f \n",media);
    /*---d1---*/
        printf ("Elementele de pe diagonala principala sunt: ");
        for (i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(i==j)
                printf ("%d ",a[i][j]);
                printf ("\n");
    /*---d2---*/
        printf ("Elementele de pe diagonala secundara sunt: ");
        for (i=0;i<n;i++)
                printf ("%d ",a[i][n-1-i]);
                printf ("\n");
    /*---e1---*/
        printf ("Elementele din triunghiul superior sunt: ");
        for (i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(i<=j)
                printf ("%d ",a[i][j]);
                printf ("\n");
    /*---e2---*/
        printf ("Elementele din triunghiul inferior sunt: ");
        for (i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(i>=j)
                printf ("%d ",a[i][j]);
                printf ("\n");
    /*---f1---*/
        printf ("Elementele de pe contur sunt: ");

                for(j=0;j<n;j++)
                    printf ("%d ",a[0][j]);
                for(i=1;i<=n-2;i++)
                    printf ("%d ",a[i][n-1]);
                for(j=n-1;j>=0;j--)
                    printf ("%d ",a[n-1][j]);
                for(i=n-2;i>=1;i--)
                    printf ("%d ",a[i][0]);


    /*---f2---*/
        printf ("Elementele din contur sunt: ");

                for(i=1;i<=n-2;i++)
                for(j=n-2;j>=1;j--)
                printf ("%d ",a[i][j]);
                printf ("\n");
    /*g*/
printf("Valorile matricei in spirala sunt:");
 int ll=0,lr=n-1,lu=0,ld=n-1;
 while (lu<=ld && lr>=ll)
 {for(j=ll;j<=lr;j++)
   printf("%d ",a[lu][j]);
   lu++;
   for(i=lu;i<=ld;i++)
    printf("%d ",a[i][lr]);
   lr--;
   for(j=lr;j>=ll;j--)
    printf("%d ",a[ld][j]);
   ld--;
   for(i=ld;i>=lu;i--)
    printf("%d ",a[i][ll]);
   ll++;

   }

}

