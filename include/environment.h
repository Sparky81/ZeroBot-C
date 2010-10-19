/*
 * Copyright (c) 2010 Samuel Hoffman
 *
 * Construct the IRC Environment!
 */
#ifndef __ENVIRONMENT_H
#define __ENVIRONMENT_H
#include <string>

using namespace std;

struct me_t {
   string nick;
   string ident;
   string gecos;
   string channel;
   char trigger;
};

struct server_t {
   string address;
   int ssl;
   string port; // sock can't read this as an int ... ?
};

struct channel_t {
   string name;
   string topic;
	string privmsg;
   int users;
};

struct mask_t {
   string nick;
   string user;
   string host;
};

struct message_t {
	string privmsg;
	string notice;
};


#endif
