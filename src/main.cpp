/* Copyright (c) 2010 Samuel Hoffman
 *
 * Main connection to the server
 *
 */

#include "include/includes.h"
#include "include/config.h"
#include "include/SocketException.h"
using namespace std;

Socket sock("irc.failnet.net", "6667");

int join (string channel)
{
	string j = "JOIN " + channel + "\n";
	sock << j;
}

int main()
{
   try
   {
//      cout << ("Will attempt to connect with nick(%s) ident(%s), and gecos(%s)", me.nick, me.ident, me.gecos);
      if (!sock.get_address()) throw SocketException ("Could not get address to IRC Server!");
      if (!sock.connect()) throw SocketException ("Could not connect to IRC Server!");

      string buffer;

      sock >> buffer;
      sock >> buffer;
      sock << ("USER dz 8 * :Demon Days\n");
      sock << ("NICK Deltron_Zero\n");
      sock >> buffer;

      string::size_type loc = buffer.find( "PING :", 0 );
      if (loc != string::npos)
      {
         string pong = "PONG :" + buffer.substr(6,-1);
         sock << pong;
      }

      while (true)
      {
         sock >> buffer;
      }

   }
   catch (SocketException &e)
   {
      cout << "Exception was caught:" << e.description() << "\n";
   }

   return 0;
}
