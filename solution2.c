#include<stdio.h>

void main()

{
    
	int t,a,b,c,i=1,j;
    
	scanf("%d",&t);
    
	while(i<=t)
    
	{
        
		j=0;
        
		scanf("%d%d%d",&a,&b,&c);
        
		while(a!=b)
        
		{
            
			if(a>b)
            
			{
                
				if((a-2)>=b)
                    
					a=a-2;
                
				else
                    
					a=a-1;
            
			}
            
			else
            
			{
                
				a=a*c;
            
			}
            
		j++;
        
		}
        
	printf("%d\n",j);
        
	i++;
            
        
    
	}

}