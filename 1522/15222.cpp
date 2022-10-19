  #include <iostream>
  #include <cstdio>
  #include <algorithm>
  #include <cmath>
  #include <queue>
  
  using namespace std;
  
  int dir[3]= {1,-1};
 
 struct node
 {
     int x,step;
 } s,ss;
 
 int bfs(int n,int k)
 {
     queue<node>q,qq;
     s.x=n;
     s.step=0;
     int vis[100010]= {0};
     q.push(s);
     while (!q.empty())
     {
         s=q.front();
         q.pop();
         if (s.x==k)
             return s.step;
         for (int i=0; i<2; i++)
         {
             ss.x=s.x+dir[i];
             ss.step=s.step+1;
             if (ss.x>=0&&ss.x<=100000)
                 if (!vis[ss.x])
                 {
                     vis[ss.x]=1;
                     q.push(ss);
                 }
         }
         ss.x=s.x*2;
         ss.step=s.step+1;
         if (ss.x>=0&&ss.x<=100000)
         {
             if (!vis[ss.x])
             {
                 vis[ss.x]=1;
                 q.push(ss);
             }
         }
     }
     return 0;
 }
 
 int main ()
 {
     int n,k;
     while (~scanf("%d%d",&n,&k))
     {
         printf ("%d\n",bfs(n,k));
     }
     return 0;
}