#include <stdio.h>

void add_no() {
	int n; int sum=0;
    printf("Give me the no. of inputs\n");
	scanf("%d",&n);
	int array[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",(&array[i]));
		sum = sum + array[i];
	}


printf("sum = %d\n",sum );

}


int main()
{	 
	
	add_no();
	

	return 0;
}

