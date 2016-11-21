

#ifndef RIP__H__DEFINED__
#define RIP__H__DEFINED__

#include <stdint.h>
#include <string.h>

#include <sys/socket.h>
#include <sys/types.h>


const int RIP_UDP_PORT = 520;
const size_t RIP_PACKET_MAX_ENTRIES = 25;

struct rip_packet_entry
{
	uint16_t addr_family;
	uint16_t must_be_zero0;
	uint32_t ipv4_addr;
	uint32_t must_be_zero1;
	uint32_t must_be_zero2;
	uint32_t metric;
} __attribute__((packed));

struct rip_packet
{
	uint8_t command;
	uint8_t version;
	uint16_t must_be_zero;
	struct rip_packet_entry entries[RIP_PACKET_MAX_ENTRIES];
} __attribute__((packed));


int create_rip_socket();

/* Returns -1 on error, otherwise the number of route entries in the packet received */
int recv_rip_packet(int fd, struct rip_packet *packet);

int validate_rip_packet(struct rip_packet packet);

void print_rip_packet(struct rip_packet packet, size_t num_entries);


#endif /* RIP__H__DEFINED__ */
