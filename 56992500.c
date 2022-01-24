//code of PPSUM on codechef

#include<stdio.h>
int main()
{
    int Testcases;//number of Testcases
    scanf("%d",&Testcases);
    int d,n;//declaration of variables
    
    while(Testcases--)
    {
        scanf("%d\n",&d);
        scanf("%d\n",&n);
        for(int i=0; i<d; i++  )
        {
          n=(n*(n+1))/2;
        }
        printf("%d\n",n);
    }
    return 0;
}
//Code By Bhumika Nayak
