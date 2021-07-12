#include <stdio.h>
#include <math.h>


int print_short_bin(unsigned short a)
/*The function cast a desimal number to binary number*/
{
	int j, bin[16],cnt;
	printf("The Number in Binary representation is: ");
	j = 15;
	cnt=0;
	while(cnt<16)
	{
		if(a>0){
			bin[cnt] = a % 2;
			a = a / 2;
		}
		else
			bin[cnt]=0;
		cnt++;
	}
	while(j>=0)
	{
		printf("%d ",bin[j]);
		j--;
	}	
	printf("\n");
	return 0;
}

unsigned short my_rotate( unsigned short a,  char b)
/*The function rotate the bits in a numbber*/
{
	unsigned short newA=a;
	if(b>=0){
		newA>>=(8*(sizeof(unsigned short))-b);
		a<<=b;
		return newA|a;
	}
	newA<<=(8*(sizeof(unsigned short))+b);
	a>>=(-(b));
	return newA|a;
}

int main()
{
	unsigned short a, aNew;
	int b;
	printf("Please enter 2 numbers:\nFirst the number to rotate: ");
	scanf("%hu", &a);
	printf("Seconde the number that represent the rotation: ");
	scanf("%d",&b);
	printf("\nThe number to rotate is: %hu \n", a);
	print_short_bin(a);
	if (b >= 0)		/*leftRotate*/ 
		printf("The direction of the rotation is: left\n");
	else 			/*rightRotate*/
		printf("The direction of the rotation is: right\n");
	printf("The number of bitis that moves is: %0.1f \n", fabs(b));
	aNew = my_rotate(a,b);
	printf("The number to rotate after the rotation is: %hu \n", aNew);
	print_short_bin(aNew);
	return 0;

}
