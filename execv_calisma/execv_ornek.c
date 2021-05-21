#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#define EXIT_FAILURE -1 /* A number not equal to 0 */
#define EXIT_SUCCESS 0

/*
Bir prosesin içerisinde ayrı bir program çalıştırmak için kullanılır.
Aynı işi yapan fakat aralarında çok küçük farklılıklar bulunan 6 adet exec fonksiyonu vardır. İlk parametre olarak çalıştırılabilir dosyanın yol bilgisini alırlar.

int execl(const char *path, const char *arg0, … , (char *) 0);  					//	exec fonksiyonu çalıştıracağımız programa gönderilecek olan parametreleri liste şeklinde alır.

int execv(const char *path, char *const argv[]); 									// 	exec fonksiyonu çalıştıracağımız programa gönderilecek olan parametreleri dizi şeklinde alır.

int execle(const char *path, const char *arg0, … , (char *) 0, char *const envp[]); //	exec fonksiyonu ek olarak çevre değişkeni(envp) parametresi alır.

int execve(const char *path, char *const argv[], char *const envp[]);				

int execlp(const char * file, const char *arg0, … , (char *) 0);					//	exec fonksiyonu çalıştırılabilir dosyanın yerinin belirlenmesinde PATH çevre değişkenlerine bakar.

int execvp(const char *file, char *const argv[]);
*/

int main (){

	char *argv[]={"ls","-l",NULL};

	execv("/usr/bin/ls",argv);
	printf("on parents proese.running main()");
	perror("ls Calismadi");

	return EXIT_FAILURE;
}

