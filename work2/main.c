#include  <stdio.h>
#include <stdint.h>
int  main()
{
   float target_x=1.234f;
   uint8_t *byte_ptr=(uint8_t*)&target_x;
   printf("float 1.234 在内存中的 4 个字节: ");
   for(int i=0;i<4;i++)
   {
      printf("%02X ",byte_ptr[i]);
   }
   printf("\n");
}