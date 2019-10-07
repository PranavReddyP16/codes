#include<stdio.h>

const long long int m = 1e3;

int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
    int i;
	int a[m];
    for(i=0;i<m;i++)
    {
        a[i] = 0;
    }
	int b[k];
    for(i=0;i<k;i++)
    {
        b[i] = 0;
    }
	int x;
	

	int j=k-1;

	for(i=0;i<n;i++)
	{
		scanf("%d",&x);

		if(a[x-1] == 0)
		{
			b[j] = x;
			a[x]  = 1;
			j = j - 1;

		}
	}

	for(i=0;i<k;i++)
	{
		if(b[i]!=0)
			printf("%d ",b[i]);
	}





	
}
