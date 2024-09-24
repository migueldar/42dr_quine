int i = 4;
char newline = 0xA;
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
void printi(int fd) {
	i += 0x2F;
	char newline = 0xA;
	write(fd, $int i = $, 8);
	write(fd, &i, 1);
	write(fd, $;$, 1);
	write(fd, &newline, 1);
}
void print(int fd, char** arr, int from, int to, int inArr) {
	char quote = 0x22, comma = 0x2c, tab = 0x9;
	for (int i = from; i <= to; i++) {
		if (inArr) write(fd, &tab, 1), write(fd, &quote, 1);
		write(fd, arr[i], strlen(arr[i]));
		if (inArr) write(fd, &quote, 1), write(fd, &comma, 1);
		write(fd, &newline, 1);
	}
}
int main() {
	char* fileName = $Sully_ .c$;
	fileName[6] = i + 0x30;
	int fd = creat(fileName, 0644);
	if (fd < 0) write(2, $Couldnt open file$, 17), write(2, &newline, 1), _exit(1);
	char* arr[33] = {
	"char newline = 0xA;",
	"#include <unistd.h>",
	"#include <string.h>",
	"#include <fcntl.h>",
	"void printi(int fd) {",
	"	i += 0x2F;",
	"	char newline = 0xA;",
	"	write(fd, $int i = $, 8);",
	"	write(fd, &i, 1);",
	"	write(fd, $;$, 1);",
	"	write(fd, &newline, 1);",
	"}",
	"void print(int fd, char** arr, int from, int to, int inArr) {",
	"	char quote = 0x22, comma = 0x2c, tab = 0x9;",
	"	for (int i = from; i <= to; i++) {",
	"		if (inArr) write(fd, &tab, 1), write(fd, &quote, 1);",
	"		write(fd, arr[i], strlen(arr[i]));",
	"		if (inArr) write(fd, &quote, 1), write(fd, &comma, 1);",
	"		write(fd, &newline, 1);",
	"	}",
	"}",
	"int main() {",
	"	char* fileName = $Sully_ .c$;",
	"	fileName[6] = i + 0x30;",
	"	int fd = creat(fileName, 0644);",
	"	if (fd < 0) write(2, $Couldnt open file$, 17), write(2, &newline, 1), _exit(1);",
	"	char* arr[33] = {",
	"	};",
	"	printi(fd);",
	"	print(fd, arr, 0, 27, 0);",
	"	print(fd, arr, 0, 33, 1);",
	"	print(fd, arr, 27, 33, 0);",
	"}",
	};
	printi(fd);
	print(fd, arr, 0, 27, 0);
	print(fd, arr, 0, 33, 1);
	print(fd, arr, 27, 33, 0);
}
