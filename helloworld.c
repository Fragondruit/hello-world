#inlcude <stdio.h>
#define CH "%c"

main() {
  char* msg = "Hello World";
  for (int i = 0; msg[i] != NULL; i ++) 
    printf(CH, msg[i]);
  return 0;
}
