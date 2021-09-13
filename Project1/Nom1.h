int nom1() {
	int a = 326, b, c, d;
	b = a / 100;
	c = a / 10 % 10;
	d = a % 10;
	printf("%d \n", b);
	printf("%d \n", c);
	printf("%d \n", d);
	printf("%d ", b + c + d);
	printf("%d", d);
	printf("%d", c);
	printf("%d", b);
	return 0;
}
int nom2() {
	int a, b, c, d;
	scanf_s(" %d", &a);
	b = a / 100;
	c = a / 10 % 10;
	d = a % 10;
	if (b == c && c == d) {
		printf("equal");
	}
	else {
		printf("%d\n", a);
		printf("%d  %d %d\n", b, c, d);
		printf("%d  %d %d\n", c, b, d);
		printf("%d  %d %d\n", d, b, c);
		printf("%d  %d %d\n", d, c, b);
		printf("%d  %d %d\n", c, d, b);
		printf("%d  %d %d\n", b, d, c);
	}
	return 0;
}