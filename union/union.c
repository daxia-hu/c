#include "stdio.h"
#include "stdint.h"
union test
{
    struct Bytes_t
    {
        uint8_t one:1;
        uint8_t two:1;
        uint8_t three:1;
        uint8_t four:1;
        uint8_t five:1;
        uint8_t six:1;
        uint8_t seven:1;
        uint8_t eight:1;
    }Bytes_;
    uint8_t data1;
    uint8_t data2;
};

int main()
{
    union test t;
    t.data1 = 0xf2;
    uint8_t one_data = t.Bytes_.one;
    uint8_t two_data = t.Bytes_.two;
    printf("1:%d 2:%d data:%d\r\n",one_data,two_data,t.data1);
    t.Bytes_.one = 1;
    printf("1:%d 2:%d data:%d\r\n",one_data,two_data,t.data1);
    t.data2 = 0x55;
    printf("1:%d 2:%d data:%d\r\n",one_data,two_data,t.data1);
    return 0;
}


