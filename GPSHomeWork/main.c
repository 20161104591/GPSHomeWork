//
//  main.c
//  GPSHomeWork
//
//  Created by 20161104591 on 17/6/15.
//  Copyright © 2017年 20161104591. All rights reserved.
//

#include<stdio.h>
int main()
{
    FILE *fp1;
    FILE *fp2;
    fp1=fopen("//Users//a20161104591//Desktop//GPSHomeWork//input.txt","r");
    fp2=fopen("//Users//a20161104591//Desktop//GPSHomeWork//output.txt","w");
    int i,j,m;
    int a[10];
    printf("请输入10个数字：\n");
    for(i=0;i<10;i++)
    {
        fscanf(fp1,"%d\n",&a[i]);
    }
    for(j=0;j<9;j++)
    {
        for(i=0;i<9-j;i++)
        {
            if(a[i]>a[i+1])
            {
                m=a[i];
                a[i]=a[i+1];
                a[i+1]=m;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
        fprintf(fp2,"%d\n",a[i]);
    }
    return 0;
}
