#ifndef __SERVER_HEADER__
#define __SERVER_HEADER__

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <string.h>
#include <netinet/in.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <unistd.h>

#define true 1
#define false 0

#define SIZE 256
#define ETH_INTERFACE "eth0"
#define PORT 64403
#define BACKLOG 50

#define handle_error(msg) \
						do{ \
							perror(msg); \
							exit(EXIT_FAILURE); \
						}while(true);

#endif
