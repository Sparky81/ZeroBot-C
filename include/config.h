/* 
 * Copyright (c) 2010 Samuel Hoffman
 *
 * Your ZeroBot configuration!
 */
#include "includes.h"
#include "environment.h"

me_t me;
server_t irc;

/* Bot Configuration */
int main() {
   me.nick 	   = "DeltronZero";
   me.gecos	   = "Demon Days";
   me.ident	   = "dare";
   me.channel	= "#ZeroBot";
   me.trigger 	= '!';

/* Server Configuration */

   irc.address	= "irc.alphachat.net";
   irc.port 	= 6667;
   irc.ssl		= 0;
}
