#include <stdio.h>

int main(void)
{
	int w, r;
	float rm;
	
	scanf("%d%d", &w, &r);
	
	if (w >= 1 && w <= 1000000 && r>=1 && r<=100) {
	rm = w * (1 + (float)r/30);
	
	printf("%d", (int)rm);
	}
	
	return 0;
}
