#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main(){
	char c;
	int fd3;
	int fd4;
	//int pid=getpid();
	//write(1,&pid,1);
	printf("program basladı");
	fd3=open("/tmp/kumanda",O_RDONLY);
	fd4=open("/tmp/ekran",O_WRONLY);
	//printf	("%d\n",fd3);
	printf("%d\n",fd4);
	dup2(fd3,0);
	dup2(fd4,1);
	dup2(fd4,2);	

	printf	("%d\n",fd3);
	printf("%d\n",fd4);
		read(0, &c, 1);
		printf("\ndeger okundu");
		write(1, &c, 1);
	close(fd3);
	close(fd4);
	
	return 0;
}
