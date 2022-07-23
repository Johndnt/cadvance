#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i1=0,i2=0;
    int last1=0,last2=0;
    int sum1=0,sum2=0;
    char mang1[]="#%*";
    char mang2[]="$&";
//tinh do dai
    while (mang1[last1]!='\0')
    last1++;
    while (mang2[last2]!='\0')
    last2++;
    printf("do dai mang1: %d",last1);
    printf("\ndo dai mang2: %d",last2);
//tinh hex
    for(int i1=0;i1<=last1;i1++)
    {
    sum1+=mang1[i1];}
    printf("\nhex mang1= %d",sum1);

    for(int i2=0;i2<=last2;i2++)
    {
    sum2+=mang2[i2];}
    printf("\nhex mang2= %d",sum2);
//so sanh do dai
    if (last1>last2) 
    {printf("\ndo dai 1 > 2");}
    else if (last1<last2) 
    {printf("\ndo dai 1 < 2");}
    else 
    {printf("\ndo dai 1 = 2");}
//so sanh hex
    if(sum1>sum2)
    {printf("\nhex 1 > 2");}
    else if (sum1<sum2)
    {printf("\nhex 1 < 2");}
    else 
    {printf("\nhex 1 = 2");}

    return 0;
}
