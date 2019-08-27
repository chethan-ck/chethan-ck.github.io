#include<stdio.h>
void main()
{
	int T,M,N,i=1;
        scanf("%d",&T);
    	while(i<=T)
	{
      		scanf("%d%d",&M,&N);
        	if(N%M==0)
        		printf("Yes\n");
        	else
        		printf("No\n");
        	i++;
    
	}

}
