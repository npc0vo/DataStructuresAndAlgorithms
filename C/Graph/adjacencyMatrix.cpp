//
// Created by Npc on 2024/4/23.
//
/*
1. 什么是图
图论（graph theory） 是数学的一个分支，它以 图 为研究的对象。

图论本身是应用数学的一部分，历史上图论曾经被很多数学家各自独立建立过。关于图论的最早文字记载最早出现在欧拉 1736 年的论著中，也就是著名的柯尼斯堡（Konigsberg）问题（七桥问题）。



2. 图的定义
一个图G是一个二元组，即序偶<V,E>，或记作G=<V,E> ，其中V是有限非空集合，称为G的顶点集,V中的元素称为顶点或结点；E称为 G的边的集合，所有的边ei都属于E，都有v中的结点与之对应，称ei为 G的边。



3. 图的基本概念
l  无向图：每条边都是无向边的图。

l  有向图：每条边都是有向边的图。

l  混合图：在一个图中，有些边是有向边，另一些边是无向边，则该图为混合图。

l  有限图：一个图的点集和边集都是有穷集的图。

l  零图：边集为空集的图。

l  平凡图：仅有一个结点而没有边构成的图。

l  关联：若有ei=(u,v) 且ei属于E ，则称u是和v相关联的。

l  孤立点：无边关联的点。

l  自环：若一条边所关联的两个结点重合，则称此边为自环。

l  邻接：关联于同一条边的两个点  和  称为邻接的；关联于同一个点的两条边  和  是邻接的（或相邻的）。



4.两个定理：
图论定理1

l  推论：在任意图中，度数为奇数的点必然有偶数个。

图论定理2



l  推论：即所有点入度之和等于出度之和。*/
#include "iostream"
using namespace std;



const int maxn=105;
int adj[maxn][maxn]={0};

int x,y;//输入两条边
int n,m;//供输入n对边与m个顶点(x,y<=m)


int main()
{
    cout<<"输入有几对边和几对顶点"<<endl;
    cin>>n>>m;
    cout<<"输入边:";
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        adj[x-1][y-1]=1;
        adj[y-1][x-1]=1;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<adj[i][j]<<' ';
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}