/*signal-block.c*/
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int main (void){
	sigset_t sigset;
	int ndx;

	sigisemptyset(&sidset);
}

void sigint_handler(int signo){

	printf("ctrl-c 키를 누르셨죠\n");
//	prinitf("또 누르시면 종료됩니다\n");
}
int main(void){
	old_fun = signal(SIGINT, sigint_handler);

	while(1){
		printf("signal hander registered!\n");
		sleep(1);
	}
	return (0);
}


