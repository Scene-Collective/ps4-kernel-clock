//#define DEBUG_SOCKET
#define DEBUG_IP "192.168.2.2"
#define DEBUG_PORT 9023

#include "ps4.h"

int _main(struct thread *td) {
  UNUSED(td);

  initKernel();
  initLibc();

#ifdef DEBUG_SOCKET
  initNetwork();
  DEBUG_SOCK = SckConnect(DEBUG_IP, DEBUG_PORT);
#endif

  jailbreak();
  kernel_clock(14861963);

  initSysUtil();

  printf_notification("Kernel time changed!");

#ifdef DEBUG_SOCKET
  printf_socket("\nClosing socket...\n\n");
  SckClose(DEBUG_SOCK);
#endif

  return 0;
}
