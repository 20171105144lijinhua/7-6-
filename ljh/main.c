//
//  main.c
//  ljh
//
//  Created by admin on 18/7/6.
//  Copyright (c) 2018年 imnu. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
struct Student{
    char name[20];
    char xuehao[20];
    char xingbie[20];
    char class1[20];
    char shengre[20];
    char phone[20];
    int  fen[6];
    double  x;
};typedef struct Student student;
int main()
{
    int t,i,j,l,n,m,z,x,c;
    student zxc[100];
    printf("请输入需要评分的同学的数量\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("请输入第%d位同学的姓名\n",i);
        scanf("%s",zxc[i].name);
        getchar();
        printf("请输入第%d位同学的学号\n",i);
        scanf("%s",zxc[i].xuehao);
        getchar();
        printf("请输入第%d位同学的性别\n",i);
        scanf("%s",zxc[i].xingbie);
        getchar();
        printf("请输入第%d位同学的班级\n",i);
        scanf("%s",zxc[i].class1);
        getchar();
        printf("请输入第%d位同学的生日\n",i);
        scanf("%s",zxc[i].shengre);
        getchar();
        printf("请输入第%d位同学的电话\n",i);
        scanf("%s",zxc[i].phone);
        getchar();
        printf("请依次输入评分 中间以空格分割\n");
        for(j=0;j<5;j++)
        {
            scanf("%d",&zxc[i].fen[j]);
        }
        
        for(z=0;z<5;z++)
            for(x=z;x<5-z;x++)
            {
                if(zxc[i].fen[x]<zxc[i].fen[x+1])
                {
                    t=zxc[i].fen[x];
                    zxc[i].fen[x]=zxc[i].fen[x+1];
                    zxc[i].fen[x+1]=t;
                }
            }
    }
    for(i=0;i<n;i++)
    {
        zxc[i].x=(zxc[i].fen[1]+zxc[i].fen[2]+zxc[i].fen[3])/3.0;
    }
    for(i=0;i<n;i++)
    {
        printf("%.2f\n",zxc[i].x);
    }    
    return 0;
}