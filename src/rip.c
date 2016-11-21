
#include "rip.h"

/* Returns -1 on error, otherwise the number of route entries in the packet received */
int recv_rip_packet(int fd, struct rip_packet *packet)
{
	struct rip_packet packet;

	recvfrom(fd, (char*)packet, sizeof(packet), )

}

char *ipv4_addr_to_str(uint32_t addr)
{
	static char str[32];
	uint8_t *octets = (uint8_t*) &addr;
	sprintf(str, "%u.%u.%u.%u", octets[3], octets[2], octets[1], octets[0]);
	return str;
}

int validate_rip_packet(struct rip_packet packet)
{
	assert(packet.version == 2);
}

void print_rip_packet(struct rip_packet packet, size_t num_entries)
{
	printf("## RIP PACKET ##\n");

	printf("version: %u\n", packet.version);
	printf("command: %u\n", packet.command);

	for (int i = 0; i < num_entries; i++)
	{

	}

}
