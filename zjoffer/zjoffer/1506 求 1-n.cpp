#include <cstdio>
#include <vector>
using namespace std;

int cal(const int n,int &re)
{
  n && cal(n-1,re);
  return re+=n;
}

int main()
{
  int n;
  while(scanf("%d",&n)!=EOF)
  {
    int re=0;
    printf("%d\n",cal(n,re));
  }
  return 0;
}