#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[1000];
	long idstudent;
	double w, h;
	printf("Enter your nickname : ", name);
	scanf("%s", &name);
	printf("%s 6301(Enter your id)", name);
	scanf("%ld", &idstudent);
	printf("Enter your weight : ");
	scanf("%lf", &w);
	printf("Enter your height : ");
	scanf("%lf", &h);
	double x = ((w) / ((h / 100) * (h / 100)));
	if (idstudent <= 0110) {
		printf("%s 6301%ld Room 1 BMI is %.2lf", name, idstudent, x);
	}
	else if (idstudent <= 0220) {
		printf("%s 6301%ld Room 2 BMI is  %.2lf", name, idstudent, x);
	}
	else if (idstudent <= 329) {
		printf("%s 6301%ld Room 3 BMI is  %.2lf", name, idstudent, x);
	}
	else if (idstudent <= 439) {
		printf("%s 6301%ld Room 4 BMI is  %.2lf", name, idstudent, x);
	}
	else if (idstudent <= 548) {
		printf("%s 6301%ld Room 5 BMI is  %.2lf", name, idstudent, x);
	}
	else if (idstudent <= 657) {
		printf("%s 6301%ld Room 6 BMI is  %.2lf", name, idstudent, x);
	}
	else if (idstudent <= 766) {
		printf("%s 6301%ld Room 7 BMI is  %.2lf", name, idstudent, x);
	}
	else if (idstudent < 875) {
		printf("%s 6301%ld Room 8 BMI is  %.2lf", name, idstudent, x);
	}
	else if (idstudent <= 986) {
		printf("%s 6301%ld Room 9 BMI is  %.2lf", name, idstudent, x);
	}
	else if (idstudent <= 1095) {
		printf("%s 6301%ld Room 10 BMI is  %.2lf", name, idstudent, x);
	}
	else {
		printf("%s 6301%ld NoRoom BMI is  %.2lf", name, idstudent, x);
	}
} 