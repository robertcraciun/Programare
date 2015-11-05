#include <stdio.h>
int main()
{int a[100],b[100],i,n,min,max;
float s=0,media;
    printf ("Introduceti dimensiunea vectorului: ");
    scanf ("%d",&n);
    printf ("Introduceti valorile vectorului: \n");
    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);
    printf ("Vectorul: \n");
    for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");

    for(i=0;i<n;i++)
        s+=a[i];
        media=s/n;
        if(a[i]==media)
            printf("Apartine.");
        else
            printf("Nu apartine.");
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>=a[i])
            min=a[i];
    }
    for(i=0;i<n;i++)
        if(a[i]==min)
    printf ("Minimul este %d si se afla pe pozitiile %d.",min,i);

    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<=a[i])
            max=a[i];
    }

    for(i=0;i<n;i++)
        if(a[i]<media)
            a[i]=min;
    for(i=0;i<n;i++)
        if(a[i]>media)
            a[i]=max;
    printf ("Vectorul: \n");
    for (i=0;i<n;i++)
        printf ("a[%d]=%d ",i,a[i]);
        printf ("\n");
}
