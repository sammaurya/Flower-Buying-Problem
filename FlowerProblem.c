#include <stdio.h>
#include <stdlib.h>
void sort(int [],int);
void delete(int [],int *,int);

int main()
{
	int n,a,b,price=0;
	printf("\nEnter number of flowers : ");
	scanf("%d",&n);
	int p[n];
	printf("\nEnter codes of flowers : ");
	for(int i=0;i<n;i++)
	{
      		scanf("%d",&p[i]);
	
    	}
	sort(p,n);
  	for(int i=0;i<n;)
  	{
    		a=p[i];
    		b=p[i]+4;
    		price++;
   		for(int j=0;j<n;j++)
  		{
      			if(a<=p[j]&&p[j]<=b)
      			{
       				delete(p,&n,j);
				j--;
      			}
    		}
    	}
  	printf("\nMinimum price is %d\n",price);
    
    return 0;
}
void sort(int p[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}
void delete(int p[],int *n,int x)
{
	int i,j;
	for(i=x;i<(*n);i++)
	{
		p[i]=p[i+1];
	}
	(*n)--;
}
















