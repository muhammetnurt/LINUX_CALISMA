#include<fcntl.h>

int main()
{
	int b;
	int fd=open("/dev/mmcblk0p1", O_RDONLY);
	read(fd, &b, 1);
	return 0;
}
