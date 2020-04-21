/* Maria  Morales */
#include <stdio.h>

/* Function that sorts 3 numbers from smallest to biggest */
void sort(int* num1, int* num2, int* num3){
	int temp;
	if(*num1 > *num2) {
		temp = *num1;
		*num1 = *num2;
		*num2 = temp;
	}
	if (*num2 > *num3) {
		temp = *num2;
		*num2 = *num3;
		*num3 = temp;

		if (*num2 < *num1) {
		temp = *num2;
		*num2 = *num1;
		*num1 = temp;
	  }
	}
}

int main(void) {
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

  printf("Before sorting: %d %d %d\n", a, b, c);
	sort(&a, &b, &c);
	printf("After sorting: %d %d %d\n", a, b, c);

	return 0;
}
