#include <unistd.h>
#include <stdio.h>


int main() {

	int my_pid;
	my_pid = getpid();
	printf("my pid is: %d \n",my_pid);
	reboot(RB_REBOOT);
	return 0;
}