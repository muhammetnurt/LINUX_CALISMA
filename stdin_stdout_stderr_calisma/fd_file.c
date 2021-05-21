/*
  C diline ait yüksek seviyeli giriş/çıkış fonks.
  FILE *f
  f=fopen("/etc/passwd","r");
  fread(...,f);
  fwrite(...,f);
  fgets(...,f);
  fprintf(...,f);
  fclose(f);
 */
 
/*
  Düşük seviyeli giriş/çıkış fonks.
  int fd;
  fd=open("/etc/passwd",O_RDONLY);
  read(fd, ...);
  write(fd, ...);
  close(fd);
 */

/*
int main()
{
	FILE *f;
	int fd;
		f=fopen("/etc/passwd","r"); // yöntem 1
		fd=fileno(f);
		write(fd,&buf, ... );
		// .....
	fd=open("/etc/passwd",O_RDONLY); // yöntem 2
	f=fdopen(fd,"r");
	fgets(buf,sizeof(BUF)-1,f);
	// ..... 
	
	return 0;
}


*/

#include <stdio.h>
#include <unistd.h>
/*
unistd.h kütüphanesi içinde aşağıdaki gibi tanımlanmıştır.
#define STDIN_FILENO 	0 			// STANDARD İNPUT
#define STDOUT_FILENO 	1 		// STANDARD OUTPUT
#define STDERR_FILENO 	2 		// STANDARD ERROR OUTPUT.
*/
int main(){
	char c;
	fscanf(stdin,"%c",&c);
	fprintf(stdout,"%c",&c);
	return 0;
}
/*
int main(){
	char c;
	read(stdin,&c,1);
	write(stdout,&c,1);
	return 0;
}
*/
