/*
 * Copyright (c) 2010 Samuel Hoffman
 *
 * Construct the IRC Environment!
 */
#ifndef __ENVIRONMENT_H
#define __ENVIRONMENT_H

struct me_t {
   char *nick;
   char *ident;
   char *gecos;
   char *channel;
} me;

struct server_t {
   char *address;
   int ssl;
   int port;
} irc;

struct channel_t {
   char *c;
   char *topic;
   int users;
} channel;

#endif
