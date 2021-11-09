#include<stdio.h>
//Floyd's algorithms starts here
void floyd(int a[5][5], int num1,int num2)
{
	int k,i,j;
	for(k=0;k<5;k++)
	{
		// Pick all vertices as source one by one
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				// if vertex k is on the shortest path from i to j, update dist[i][j]
				if(a[i][j]>a[i][k]+a[k][j])
				{
					a[i][j]=a[i][k]+a[k][j];
					
				}
		    }
	    }	
	}
	int b=0;
//print the shortest distance by given 2 vertice
	for(int i=0;i<num1;i++)
	    {
	    	for(int j=0;j<num2;j++)
	    	{
				
				b = a[i][j];
			}
	    	
		}
	printf("The shortest path is %d\n", b);
	
}
int main()
{
	// making graph
	int cost[5][5] = {{0, 1, 'INF', 1, 5}, {9, 0, 3, 2, "INF"}, {'INF', 'INF', 0, 4, 'INF'}, {'INF', 'INF', 2, 0,3}, {3,'INF','INF','INF',0}}; 
	//vertices inputs
	int num1,num2;
	printf("Enter a vertice1: ");
	scanf("%d", &num1);
	printf("Enter a vertice2: ");
	scanf("%d", &num2);
	// calling floyd function
	floyd(cost,num1,num2);
}