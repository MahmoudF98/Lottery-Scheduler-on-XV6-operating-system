/* This utility runs unit tests*/
#include "types.h"
#include "pstat.h"
#include "user.h"

int ps(){
	// Get process info first
	struct pstat pinfo = {0};
	if(-1 == getpinfo(&pinfo)){
		return 0;
		printf(1, "\n\t FAILURE\n");
	}

	printf(1,"This process: %d\n",
			getpid());
	printf(1,"Total tickets: %d\n\n",
			pinfo.total_tickets);
	printf(1,
			"PID\tTicks\tTickets\tState\tinuse\n");
for(int i=0;i<NPROC;i++){
	if(pinfo.pid[i]==0)continue;
		printf(1,"%d\t%d\t%d\t%d\t%d\n", 
				pinfo.pid[i],
				pinfo.ticks[i],
				pinfo.tickets[i],
				pinfo.state[i],pinfo.inuse[i]);	}
	return 1;
}

int main(int argc, char *argv[])
{
	ps();

	exit();
}