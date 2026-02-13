#include<stdio.h>
struct status
{
	int power;
	int wifi;
	int bluetooth;
};
int main ()
{
	struct status s={1,0,1};
	printf("poewr=%d,wifi=%d,bluetooth=%d", s.power,s.wifi,s.bluetooth);
	return 0;
}
