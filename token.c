#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count,i;
    char a[]="hope-mrVu-don't-see-my-post";

    while(a[count]!='\0')
    {count++;}
    printf("%d\n",count);
   
    for(i=0;i<=count;i++)
    {
        int *l=&i;
        if(a[*l]!='-')
        {
        printf("%c",a[*l]);
        }
        else
        printf("\n");
    }

    return 0;
}
