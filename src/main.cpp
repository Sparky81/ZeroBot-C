//============================================================================
// Name        : zerobot.cpp
// Author      : ZeroBot Development Team
// Version     : Samuel Hoffman
// Copyright   : Copyright (c) 2010
// Description : ZeroBot Core File
//============================================================================

#include "include/akeldema.h"

void fail(char *zero) {
	perror(zero);
	exit(-1);
}

int main() {
	int send;
	int get;
	int fd;
	char buffer[513];
	struct hostent *he;
	struct sockaddr_in addr;

	if ((he = gethostbyname(server)) == NULL) herror("gethostbyname");
	if ((fd = socket(PF_INET, SOCK_STREAM, 0)) == -1) fail("socket");
	
	addr.sin_family = AF_INET;
	addr.sin_port	= htons(port);
}
