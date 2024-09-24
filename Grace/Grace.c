/*
	miau
*/
#include<fcntl.h>
#include<unistd.h>
#define arr "/*@	miau@*/@#include<fcntl.h>@#include<unistd.h>@#define arr @#define print(from, to, inArr) if (inArr) write(fd, &q, 1); for (int i = from; i < to; i++) { if (!inArr && arr[i] == 0x40) write(fd, &nl, 1); else if (!inArr && arr[i] == 0x24) write(fd, &q, 1); else write(fd, &(arr[i]), 1); } if (inArr) write(fd, &q, 1);@#define start int main() { char q = 0x22, nl = 0xA; int fd = creat($Grace_kid.c$, 0644); if (fd < 0) write(2, $Couldnt open file$, 17), write(2, &nl, 1), _exit(1); print(0, 61, 0) print(0, 541, 1) print(61, 541, 0) }@start"
#define print(from, to, inArr) if (inArr) write(fd, &q, 1); for (int i = from; i < to; i++) { if (!inArr && arr[i] == 0x40) write(fd, &nl, 1); else if (!inArr && arr[i] == 0x24) write(fd, &q, 1); else write(fd, &(arr[i]), 1); } if (inArr) write(fd, &q, 1);
#define start int main() { char q = 0x22, nl = 0xA; int fd = creat("Grace_kid.c", 0644); if (fd < 0) write(2, "Couldnt open file", 17), write(2, &nl, 1), _exit(1); print(0, 61, 0) print(0, 541, 1) print(61, 541, 0) }
start