#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void yakala(int sig)
{
	signal(SIGINT,yakala);
	signal(SIGTERM,yakala);
	
	fprintf(stdout, "\n%d numaralı signal yakalandı.\n",sig);	
}
int main(int argc, char *argv[])
{
	signal(SIGINT,yakala);
	signal(SIGTERM,yakala);
	fprintf(stdout,"\nargüman : %s\n",argv[1]);
	
	for(int i=0;i<100;i++)
	{
		fprintf(stdout,"\nsignal bekliyor..%d\n",i);
		sleep(1);
	}
	return 1;
}
