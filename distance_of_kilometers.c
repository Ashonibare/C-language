#include<stdio.h>

/* Distance of a marathon in kilometers, by Victor Animasahun. April 25, 2022 */

int main(void)
{
	int miles = 26, yards = 385;
	double kilometers;

	kilometers = 1.609 * (miles + yards / 1760.0);
	printf("\nA marathon is %f kilometers.\n\n", kilometers);
	return 0;
}
