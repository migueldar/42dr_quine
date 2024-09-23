//comment1
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
	//comment2
	char* arr[20] = {
	"//comment1",
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
	"	//comment2",
	"	char* arr[20] = {",
	"	};",
	"	print(arr, 0, 14, 0);",
	"	print(arr, 0, 19, 1);",
	"	print(arr, 15, 19, 0);",
	"}",
	};
	print(arr, 0, 14, 0);
	print(arr, 0, 19, 1);
	print(arr, 15, 19, 0);
}