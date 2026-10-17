#include <stdio.h>
#include <stdint.h>
#include "sensor.h"
typedef struct 
{
    uint8_t  sensor_id;
    double   temperature;  // 8 字节​
    uint8_t  status;     
}SensorData1;
#pragma pack(push,1)
typedef struct 
{
    uint8_t  sensor_id;
    double   temperature;  // 8 字节​
    uint8_t  status;     
}SensorData2;
#pragma pack(pop)
void test1()
{
   printf("不紧密排列的内存为%zu字节\n",sizeof(SensorData2));
   printf("紧密排列的内存为%zu字节\n",sizeof(SensorData1));
}
void test2(float * a)
{
   uint8_t *byte_ptr=(uint8_t *)a;
   printf("float 1.234 在内存中的 4 个字节: ");
   for(int i=0;i<4;i++)
   {
      printf("%02X ",byte_ptr[i]);
   }
   printf("\n");
}

