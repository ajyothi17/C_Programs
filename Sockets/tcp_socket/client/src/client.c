#include "client.h"

int main(void)
{
	int clt_fd = -1;
	char *buf = NULL;

	struct sockaddr_in clt_addr;
	socklen_t clt_addrlen = -1;
	
	if(-1 == (clt_fd = socket(AF_INET, SOCK_STREAM, 0)))
	{
		handle_error("socket() failed");
	}

	memset(&clt_addr, 0, sizeof(struct sockaddr_in));

	clt_addr.sin_family = AF_INET;
    clt_addr.sin_port = htons(PORT);
	if(0 == inet_aton(SERVER_IP, &clt_addr.sin_addr)) {
		handle_error("inet_aton() failed");
	}

	clt_addrlen = sizeof(clt_addr);

	printf("sending connection request\n");

	if(connect(clt_fd,(struct sockaddr*) &clt_addr, clt_addrlen))
	{
		handle_error("connect() failed");
	}

	printf("connection accepted\n");

	if(NULL == (buf = (char*)malloc(sizeof(char*) * SIZE)))
	{
		handle_error("malloc() failed");
	}

	if(NULL == fgets(buf, SIZE, stdin))
	{
		handle_error("fgets() failed");
	}

	if(-1 == write(clt_fd, buf, SIZE))
	{
		handle_error("write() failed");
	}

	if(-1 == read(clt_fd, buf, SIZE))
	{
		handle_error("read() failed");
	}

	printf("msg received from server - %s\n", buf);
	
	if(close(clt_fd))
	{
		handle_error("close() failed");
	}

	free(buf);
	buf = NULL;

	return EXIT_SUCCESS;
}