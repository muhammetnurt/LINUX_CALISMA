#include <stdio.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main()
{
	
	char c;
	int fd;
#ifdef BASH
	fd=0;
	read(fd,&c,1); #klavyeden bir değer okur. 
	fd=1;
	write(fd,&c,1); #ekrana yazdırır.( stdout ) cevap mesajları için tanımlanır.
	fd=2;
	write(fd,&c,1);	 #ekrana yazdırır.( stderr ) hata durumları için tanımlanır.
#endif	
	fprintf(stdout,"fd değeri 1 olduğu için veriler ekrana yazılır\n");
	fprintf(stderr,"fd değeri 2 olduğu için veriler ekrana yazılır\n");
	// find . -name falan.cfg 1>/tmp/ekran 2>/tmp/hata ( bash üzerinde fd kullanımı.)

	
	return 0;
}
