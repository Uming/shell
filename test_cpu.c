#include<stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "and <integer value>\n");
		return -1;
	}
	int i;
	int n = atoi(argv[1]);
	int s = 0;
	i = 0;
	for (i = 0; i < n; i ++) {
		s += i;
	}
	printf("s = %d\n", s);
	return 0;
}

