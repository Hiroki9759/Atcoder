#include<bits/stdc++.h>
using namespace std;


struct edge{int to,nxt;}e[400100];

int n,m,now,fir[100100],flg[100100],ans;

queue<int>q;

void add(int x,int y)
{
	e[++now]={y,fir[x]};
	fir[x]=now;
}

void bfs()
{
	q.push(1);
	while(!q.empty())
	{
		int tt=q.front();q.pop();++ans;
		for(int i=fir[tt];i;i=e[i].nxt)
		{
			int y=e[i].to;
			if(!flg[y])flg[y]=tt,q.push(y);
		}
	}
}

main()
{
    int t1,t2;
    cin >> n >> m;
	for(int i=1;i<=m;++i)
	{
        cin >> t1 >> t2;
		add(t1,t2);add(t2,t1);
	}
	flg[1]=1;
	bfs();
	if(ans!=n)
		puts("No");
	else
	{
		puts("Yes");
		for(int i=2;i<=n;++i)printf("%d\n",flg[i]);
	}
	return 0;
}
