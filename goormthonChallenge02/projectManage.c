#include <stdio.h>

int main(void)
{
	int n, t, m, time = 0;
	int c[100] = {0};

	scanf("%d", &n);
	scanf("%d %d", &t, &m);

	for (int i = 0; i<n; i++) {
		scanf("%d", &c[i]);
		time += c[i];
	}
	
	time += t*60 + m;
	
	t = time/60;
	m = time % 60;
	
	while (t > 23) {
		t -= 24;
	}
	
	printf("%d %d\n", t, m);
	
	return 0;
}
