#include <stdio.h>
#include <math.h>

int a_to_dec(char atoi[] )
{
    int MAX=0;
    int num=0;
    int so=0;

    while (atoi[MAX]!='\0')
        {MAX++;}
    
    for(int i=MAX-1;i>=0;i--)
    { 
    num=num+(atoi[i]-48)*pow(10,so);
    so++;
    }
return num;
}

int main(int argc, char const *argv[])
{
    char atoi[]="1287";
    
    int kq =a_to_dec(atoi);
    printf("%d",kq);

    return 0;
}
