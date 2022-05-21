
/*output =>

ABCD = i=1
abcd = i=2
ABCD = i=3
abcd = i=4

*/ 


#include<stdio.h>

void Pattern(int iRow , int iCol)
{
	int i =0 , j =0 ;
	char small = '\0',  big = '\0'; 
	
	for(i=1 ;i<=iRow;i++)
	{
		for(j=1 , small = 'a', big = 'A';j<=iCol;j++,small++,big++)
			{
			if(i%2==0)
				{			
					printf("%c ",small);
				}
			else
				{
					printf("%c ",big);
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