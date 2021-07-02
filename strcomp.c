#include <stdio.h>
void compare(char* x, char* y)
{
	int flag = 0;
	while (*x != '\0' || *y != '\0') {
		if (*x == *y) {
			x++;
			y++;
		}
		else if ((*x == '\0' && *y != '\0')
				|| (*x != '\0' && *y == '\0')
				|| *x != *y) {
			flag = 1;
			printf("not same\n");
			break;
		}
	}
	if (flag == 0) {
		printf("same\n");
	}
}
int main()
{
    char s1[20],s2[20];
    scanf("%s%s",&s1&s2);
	compare(s1, s2);
	return 0;
}
