#include<stdio.h>

const int m = 1e3;

int main()
{
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);


	int a[m];
	int b[k];
	int x,i;
	

	int j = k-1;

	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		
	
		
		if(a[x-1] == 0)
		{
			b[j] = x;
			a[x-1]  = 1;
			j = j - 1;

		}
		
	
	}

	for(i=0;i<k;i++)
	{
		if(b[i]!=0)
		{
			printf("%d ",b[i]);
			
		}

	}
	
	





	
}
