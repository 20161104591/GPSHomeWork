//
//  main.c
//  GPSHomeWork
//
//  Created by 20161104591 on 17/6/15.
//  Copyright © 2017年 20161104591. All rights reserved.
//

#include <stdio.h>

int main()
{
    FILE *fr;
    FILE *fw;
    fr=fopen("//Users//a20161104591//Desktop//GPSHomeWork//input.txt","w");
    fw=fopen("//Users//a20161104591//Desktop//GPSHomeWork//output.txt","w");
    int i,j,n,m,s;
    int a[10];
    printf("请输入10个数字:\n");
    while(scanf("%d",&n)!=EOF)
    {
        for(s=1;s<=11;s++)
        {
            scanf("%d\n",&a[s]);
            fprintf(fr,"%d",a[s]);
        }
    }
    for(j=0;j<=n-1;j++)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                m=a[i];
                a[i]=a[i+1];
                a[i+1]=m;
            }
        }
    }
    for(s=0;s<i;s++)
    {
        printf("%d",a[i]);
        fprintf(fr,"%d",a[s]);
    }
    return 0;
}
