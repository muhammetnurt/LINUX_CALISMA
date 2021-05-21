#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t processId;

    //Fork fonksiyonu ile yeni bir proses oluşturuluyor.
    processId = fork();

    if(processId < 0){ //Fork işlemi başarısız
      printf("\nFork işlemi başarısız");
      exit(EXIT_FAILURE);
    }
    else if(processId > 0){ //Parent proseste yapılacak işlemler
        printf("\nFork islemi parents proses calisiyor.");
        printf("%d",processId);
    }
    else if (processId == 0) {//Child proseste yapılacak işlemler
        printf("\nfork islemi child proses calisiyor");
        printf("%d\n",processId);
    }
    
    return 0;
}
