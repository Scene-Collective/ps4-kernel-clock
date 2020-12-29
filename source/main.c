#include "ps4.h"

int _main(struct thread *td) {
  UNUSED(td);
  initKernel();
  initLibc();

  jailbreak();
  kernel_clock(14861963);

  initSysUtil();

  printf_notification("Kernel time changed!");

  return 0;
}
