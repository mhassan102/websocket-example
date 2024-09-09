#include "easywsclient.hpp"
#include <assert.h>
#include <stdio.h>
#include <string>

using easywsclient::WebSocket;
//using namespace std;
static WebSocket::pointer ws = NULL;


int main()
{

    ws = WebSocket::from_url("ws://localhost:8765");
    assert(ws);
    time_t current_time  = time(0);
    time_t last_time = current_time;
    while(1) {
      current_time = time(0);
      if (current_time - last_time > 0) {
            ws->send(std::to_string(rand()));
            ws->poll();
            last_time = current_time;
      }
     }
    delete ws;
    return 0;
}
