#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pty.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(){
	int master;
	int slave;
	pid_t i;
	int status;
	char c;
	char *command ="ls -l .|\n";
	i=fork();
	
	openpty(&master, &slave, NULL, NULL, NULL); //NULL ile tanımlanan ifadeler daha sonra incelenebilir. ilk iki arguman pty için tanımlanmalıdır.
	
	if(i < 0){ //Fork işlemi başarısız
		printf("\nFork işlemi başarısız");
		exit(EXIT_FAILURE);
	}
	if (i == 0) {//Child proseste yapılacak işlemler
		printf("\nfork islemi child proses calisiyor");
		printf("%d\n",i);
		close(master);
		dup2(slave,0);
		dup2(slave,1);
		dup2(slave,2);
		execv("/bin/sh", NULL);
		return EXIT_FAILURE;
	}
	else{
		close(slave);
		write(master, command,strlen(command));
		
		while(read(master,&c,1)==1){
			fprintf(stdout,"%c",c);
		}
	wait(&status);
	}
	return EXIT_SUCCESS;
}

