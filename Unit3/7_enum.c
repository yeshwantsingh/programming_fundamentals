#include <stdio.h>

typedef enum 
{
	LOW,
	LOW_MID,
	MED,
	MID_HIGH,
	HIGH
}Settings;


int main()
{
	Settings s = LOW;
	printf("%d\n", sizeof(s));
	if(s == HIGH)
		printf("They are equal\n");
	else
		printf("They are not equal\n");
}
