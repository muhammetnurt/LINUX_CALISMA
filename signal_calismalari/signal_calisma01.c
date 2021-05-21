#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void yakala(int sig)
{
	
	fprintf(stdout, "\n%d numaralı signal yakalandı.\n",sig);
	//if(sig == SIGHUP)
	//{
		//read_config_file();
		//return;
	//}
	
	
}
int main(int argc, char *argv[])
{
	signal(SIGINT,yakala);
	signal(SIGHUP,yakala);
	fprintf(stdout,"\nargüman : %s\n",argv[1]);
	
	for(;;)
	{
		fprintf(stdout,"\nsignal bekliyor..\n");
		pause();
	}
	return 1;
}
