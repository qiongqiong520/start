 ///
 /// @file    A1046_shortest_distance.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2017-04-28 00:27:39
 ///
#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXN=10005;
int dis[MAXN],A[MAXN];//dis数组含义一说明，
int main()
{
	int sum =0,query,n,left, right;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&A[i]);
		sum+=A[i];//累加sum
		dis[i]=sum;//预处理dis数组
	}
	scanf("%d",&query);
	for(int i=0;i<query;i++){//query个查询
		scanf("%d%d",&left,&right);
		if(left>right)swap(left,right);
		int temp =dis[right-1]-dis[left-1];
		printf("%d\n",min(temp,sum-temp));
	}
	return 0;
}
