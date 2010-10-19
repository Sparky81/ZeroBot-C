/* Copyright (c) 2010 Samuel Hoffman
 *
 * Main connection to the server
 *
 */

#include "include/includes.h"
#include "include/config.h"

using namespace std;

int main ()
{
   try
   {
      Socket sock(irc.address, irc.port);
      if (!sock.get_address()) throw SocketException ("Could not connect to %s:%s.", irc.address, irc.port);
      if (!sock.connect()) throw SocketException ("Could not connect to %s:%s.", irc.address, irc.port);

      string reply;

      sock >> reply;
      sock >> reply;
      sock << ("USER %s 8 * :%s\n", me.ident, me.gecos);
      sock << ("NICK %s\n", me.nick);
      sock >> reply;

      string::size_type loc = reply.find( "PING :", 0 );
      if (loc != string::npos) 
      {
         string pong = "PONG :" + reply.substr(6,-1);
         sock << pong;
      }

      while (true)
      {
         sock >> reply;
      }    
   }
   catch (SocketException& e)
   {
      cout << "Exception was caught:" << e.description() << "\n";
   }

   return 0;
}
