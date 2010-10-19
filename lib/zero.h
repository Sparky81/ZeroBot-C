/*
 * Copyright (c) 2010 Samuel Hoffman
 *
 * These headers were actually taken from
 * kaiten.c - which is an IRC DDoSing bot.
 * I'm not sure all of these are absolutely
 * necessary...
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include "environment.h"
