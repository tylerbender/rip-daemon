

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <netinet/in.h>
#include <assert.h>

#include <sys/socket.h>
#include <sys/types.h>

#include "rip.h"

int main(int argc, char* argv[])
{
	/* TODO: Read in config */

	int rip_fd = socket(AF_INET, SOCK_DGRAM, 0);

	/* SET MULTICAST GROUP */

  return 0;
}
