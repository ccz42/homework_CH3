#include <stdio.h>
#include <stdint.h>
typedef struct 
{
    uint8_t  sensor_id;
    double   temperature;  // 8 字节​
    uint8_t  status;     
}SensorData;
int main()
{     
      SensorData rc;
      printf("结构体字节大小为%zu\n",sizeof(rc));
}