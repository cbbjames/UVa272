#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char c;
	bool a = false;
	while (scanf("%c", &c) == 1) {
		if (c == '\"') {
			if (!a) { a = true; printf("``"); }
			else { a = false; printf("\'\'"); }
		}
		else
			printf("%c", c);
	}
	//system("PAUSE");
	return 0;
}