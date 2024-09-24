/*
	miau 1
*/
#include <unistd.h>
#include <string.h>
void print(char** arr, int from, int to, int inArr) {
	char quote = 0x22, newline = 0xA, comma = 0x2c, tab = 0x9;
	for (int i = from; i <= to; i++) {
		if (inArr) write(1, &tab, 1), write(1, &quote, 1);
		write(1, arr[i], strlen(arr[i]));
		if (inArr) write(1, &quote, 1), write(1, &comma, 1);
		write(1, &newline, 1);
	}
}
int main() {
	/*
		miau 2
	*/
	char* arr[24] = {
	"/*",
	"	miau 1",
	"*/",
	"#include <unistd.h>",
	"#include <string.h>",
	"void print(char** arr, int from, int to, int inArr) {",
	"	char quote = 0x22, newline = 0xA, comma = 0x2c, tab = 0x9;",
	"	for (int i = from; i <= to; i++) {",
	"		if (inArr) write(1, &tab, 1), write(1, &quote, 1);",
	"		write(1, arr[i], strlen(arr[i]));",
	"		if (inArr) write(1, &quote, 1), write(1, &comma, 1);",
	"		write(1, &newline, 1);",
	"	}",
	"}",
	"int main() {",
	"	/*",
	"		miau 2",
	"	*/",
	"	char* arr[24] = {",
	"	};",
	"	print(arr, 0, 18, 0);",
	"	print(arr, 0, 23, 1);",
	"	print(arr, 19, 23, 0);",
	"}",
	};
	print(arr, 0, 18, 0);
	print(arr, 0, 23, 1);
	print(arr, 19, 23, 0);
}
