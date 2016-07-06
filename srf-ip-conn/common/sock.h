#ifndef SRF_IP_CONN_SOCK_H_
#define SRF_IP_CONN_SOCK_H_

#include <arpa/inet.h>

#define SOCK_ADDR_IN_PTR(sa)		((struct sockaddr_in *)(sa))
#define SOCK_ADDR_IN_FAMILY(sa)		SOCK_ADDR_IN_PTR(sa)->sin_family
#define SOCK_ADDR_IN_PORT(sa)		SOCK_ADDR_IN_PTR(sa)->sin_port
#define SOCK_ADDR_IN_ADDR(sa)		SOCK_ADDR_IN_PTR(sa)->sin_addr

#define SOCK_ADDR_IN6_PTR(sa)		((struct sockaddr_in6 *)(sa))
#define SOCK_ADDR_IN6_FAMILY(sa)	SOCK_ADDR_IN6_PTR(sa)->sin6_family
#define SOCK_ADDR_IN6_PORT(sa)		SOCK_ADDR_IN6_PTR(sa)->sin6_port
#define SOCK_ADDR_IN6_ADDR(sa)		SOCK_ADDR_IN6_PTR(sa)->sin6_addr

void *sock_get_in_addr(struct sockaddr *sa);
uint16_t sock_get_port(struct sockaddr *sa);

#endif
