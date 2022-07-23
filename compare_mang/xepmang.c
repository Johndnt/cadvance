#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,gt,a;
    int mang1[5];
// int mang2[];
    for (i=0;i<5;i++){ //nhap gia tri cho mang
         printf("\n nhap phan tu mang %d:",i);
         scanf("%d",&mang1[i]);
    }
    printf("\n mang da cho la :");
   for(i=0;i<5;i++){ //xuat mang
        printf("\n mang1[%d]=%d",i,mang1[i]);
   }
// sap xep giam dan
    for (i=0;i<4;i++){
        for (j=i+1;j<5;j++){
            if (mang1[i]<mang1[j])
          { int a=mang1[i];
            mang1[i]=mang1[j];
            mang1[j]=a;}
        }
    }
    printf("\nphan tu lon nhat: %d va be nhat:  %d ",mang1[0],mang1[4]);
    printf("\nmang giam dan");
    for(i=0;i<5;i++){ //xuat mang
        printf("\n %d",mang1[i]);}
// sap xep tang dan
    for (i=0;i<4;i++){
        for (j=i+1;j<5;j++){
            if (mang1[i]>mang1[j])
          { int a=mang1[i];
            mang1[i]=mang1[j];
            mang1[j]=a;}
        }
    }
    printf("\nmang tang dan");
    for(i=0;i<5;i++){ //xuat mang
        printf("\n %d",mang1[i]);}    
}
