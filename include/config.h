/* 
 * Copyright (c) 2010 Samuel Hoffman
 *
 * Your ZeroBot configuration!
 */

#include "includes.h"

me_t me;
server_t irc;

int conf() {
/* Bot Configuration */
   me.nick 	   = "DeltronZero";
   me.gecos	   = "Demon Days";
   me.ident	   = "dare";
   me.channel	= "#ZeroBot";
   me.trigger 	= '!';

/* Server Configuration */

   irc.address	= "irc.alphachat.net";
   irc.port 	= "6667";
   irc.ssl		= 0;
}
