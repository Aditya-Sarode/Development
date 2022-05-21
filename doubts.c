
/*output =>
*#*#  = i ==1  , j = 1 2 3 4 
*#*#
*#*#
*#*#
*/ 


#include<stdio.h>

void Pattern(int iRow , int iCol)
{
	int i =0 , j =0 ;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
				if(j%2==0)
				{
					printf("# ");
				}
				else	//else
				{
					printf("* ");
				}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0 , iValue2 = 0;
	
	printf("Enter the number of Row : ");
	scanf("%d",&iValue1);
	
	printf("Enter the number of coloumn : ");
	scanf("%d",&iValue2);
	
	Pattern(iValue1 , iValue2);
	
	return 0;
}
