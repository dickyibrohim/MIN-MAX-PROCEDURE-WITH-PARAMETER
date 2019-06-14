#include <stdio.h>
#include <stdlib.h>
void MinMax (int a, int b, int c); //Declaration of MinMax Procedure
//Main Program
// DICKY IBROHIM
int main()
{
    int a, b, c;
    printf ("Input Number 1: "); scanf("%d",&a);
    printf ("Input Number 2: "); scanf("%d",&b);
    printf ("Input Number 3: "); scanf("%d",&c);
    MinMax(a,b,c); // Call of MinMax Procedure

    return 0;
}
//Procedure MinMax with Parameter
void MinMax (int a, int b, int c)
{ int min, max;

if (a>b||a<b){
    if (a>b)
    {max=a; min=b;
        if (c>max){max=c; min=b;}
        if (c<min){min=c; max=a;  }
    printf ("Min: %d, Max: %d", min, max);}
    else if (a<b)
        {max=b; min=a;
        if (c>max){max=c; min=a;}
        if (c<min){min=c; max=b;  }
    printf ("Min: %d, Max: %d", min, max);}


}

else if (a==b)
    { int persamaan;
    if (a==b)
        {persamaan=a;}
    if (persamaan>c)
    {max=a; min=b;
        if (c>max){max=c; min=b;}
        if (c<min){min=c; max=a;  }
    printf ("Min: %d, Max: %d", min, max);}
    else if (persamaan<c)
        {max=b; min=a;
        if (c>max){max=c; min=a;}
        if (c<min){min=c; max=b;  }
    printf ("Min: %d, Max: %d", min, max);}

    }



}
