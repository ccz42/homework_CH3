#include <stdio.h>
#include <stdint.h>
#pragma pack(push,1)
typedef struct 
{
    uint8_t  sensor_id;
    double   temperature;  // 8 字节​
    uint8_t  status;     
}SensorData;
#pragma pack(pop)
int main()
{     
      SensorData rc;
      printf("结构体字节大小为%zu\n",sizeof(rc));
}