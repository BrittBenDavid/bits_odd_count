#include <stdio.h>

int count_odd_bits(unsigned long num)		
/*The function count the bits that are on in the odd's places of the binary num*/
{
	int count, i;
	i=0;
	count=0;
	while(num)		/*calc*/
	{
		if(num%2==1 && num&1 && i%2==1)  /*odd number*/
			count++;		
		i++;
		num>>=1;
	}
	return count;				/*return the number*/
}


int main()
{
	unsigned long num;
	printf("Please enter a number: ");
	scanf("%lu", &num);
	printf("\nThe number that you enterded is: %ld \nThere are %d bits up, in places of odd bits\n", num, count_odd_bits(num));
	return 0;
}

