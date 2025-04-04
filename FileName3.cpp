#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
	double degree_output = 0.0;
	double radian_input = 0.0;

	printf("-------------------------------------------------\n\n");
	printf("이 프로그램은 Radian을 Degree 바꾸는 프로그램입니다. \n\n");
	printf("------------------------------------------------- \n");

	printf("호도법의 예제는 3.141592 라디안은  180도입니다. \n");
	
	radian_input = 90.0;
	degree_output = radian_input * 180.0 / M_PI;
	printf("호도법의 예제는 %6.3lf 라디안은 %6.3If입니다. \n", radian_input, degree_output);


	printf("라이단 값을 입력해 주세요  ");
	scanf_s("%lf", &radian_input);
	printf("\n\n입력된 각도는 %6.3lf \n 입니다. \n\n", radian_input);
	
	degree_output = radian_input * 180.0 / M_PI;

	printf("입력된 각도를 호도법으로 변환하면 %6.3lf\n\n\n", radian_input, degree_output);
}