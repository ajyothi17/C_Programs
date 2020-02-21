#include "server.h"

int main(void)
{
	int srvr_fd = -1;
	char *clt_addr = NULL;
	char *buf = NULL;

	struct sockaddr_in srvr_addr;
	socklen_t srvr_addrlen = -1;

	if(-1 == (srvr_fd = socket(AF_INET, SOCK_STREAM, 0)))
	{
		handle_error("socket() failed");
	}

	memset(&srvr_addr, 0, sizeof(struct sockaddr_in));
	
	srvr_addrlen = sizeof(srvr_addr);

	srvr_addr.sin_family = AF_INET;
	srvr_addr.sin_port = htons(PORT);
	srvr_addr.sin_addr.s_addr = INADDR_ANY;

	if(bind(srvr_fd, (struct sockaddr*)&srvr_addr, srvr_addrlen))
	{
		handle_error("bind() failed");
	}

	if(listen(srvr_fd, BACKLOG))
	{
		handle_error("listen() failed");
	}

	if(-1 == (srvr_fd = accept(srvr_fd, (struct sockaddr*)&srvr_addr, &srvr_addrlen)))
	{
		handle_error("accept() failed");
	}

	if(NULL == (clt_addr = (char*)malloc(sizeof(char*) * SIZE)))
	{
		handle_error("malloc() failed");
	}

	if(NULL == inet_ntop(AF_INET, &srvr_addr, clt_addr, srvr_addrlen))
	{
		handle_error("inet_ntop() failed");
	}

	printf("connection accepted\n");

	if(NULL == (buf = (char*)malloc(sizeof(char*) * SIZE)))
	{
		handle_error("malloc() failed");
	}

	while(true)
    {
        if(-1 == read(srvr_fd, buf, SIZE))
        {
            handle_error("read() failed");
        }

        printf("msg received from client - %s\n", buf);

        if(NULL == fgets(buf, SIZE, stdin))
        {
            handle_error("fgets() failed");
        }

        if(-1 == write(srvr_fd, buf, SIZE))
        {
            handle_error("write() failed");
        }
    }

    if(close(srvr_fd))
    {
        handle_error("close() failed");
    }

	free(clt_addr);
	clt_addr = NULL;

	free(buf);
	buf = NULL;
	
	return EXIT_SUCCESS;
}
