#include <stdio.h>
#include "malloc.h"
#include "String.h"
#include "math.h"

unsigned char cr;
unsigned char ar[6] = {0, 1, 2, 3, 4, 5};
unsigned int br = 0;
typedef struct sct
{
    unsigned int val;
    unsigned char str[6];

} stu;

unsigned int myBlockAdd = 0;

void main(void)
{ //两种方法对比
    //方法1 用三个变量运算

    // br = (cr | ar[0]) << 24;
    // br = br + ((cr | ar[1]) << 16);
    // br = br + ((cr | ar[2]) << 8);
    // br = br + ((cr | ar[3]));
    //用两个个变量运算 数据一致
    br = 0;
    br = (br | ar[0]) << 8; //最高位
    br = (br | ar[1]) << 8;
    br = (br | ar[2]) << 8;
    br = (br | ar[3]); //数据最低位
    struct sct data;
    memcpy(data.str, ar, 6);
    // printf("hex is %x\n\r", data.str);
    //  myBlockAdd = (unsigned char)((data.str[2] & 0x000000ff) << 24);
    //  myBlockAdd = myBlockAdd + (unsigned char)((data.str[3] & 0x000000ff) << 16);
    //  myBlockAdd = myBlockAdd + (unsigned char)((data.str[4] & 0x000000ff) << 8);
    //  myBlockAdd = myBlockAdd + (unsigned char)(data.str[5]);
    myBlockAdd = data.str[2];
    myBlockAdd = myBlockAdd + (data.str[3] << 8);
    myBlockAdd = myBlockAdd + (data.str[4] << 16);
    myBlockAdd = myBlockAdd + (data.str[5] << 24);
    // printf("hex is %x\n\r", myBlockAdd);
    // int count = 360;
    // float fl;
    // for (size_t i = 0; i < count;)
    // {
    //     /* code */
    //     i = i + 30;
    //     printf("sin %d is %f\n\r", i, 5000 + (5000 * sin(i * 3.14 / 180)));
    // }

    // CALCULATE HEART RATE
    float fl = 5.33;
    int val = 0x11223344;
    printf("int val is %d\n\r", val);
    printf("int add is %d\n\r", &val);
    printf("hex is %x\n\r", val);
    char *po = (char *)&val;
    printf("hex is %x\n\r", *po);
    printf("hex is %x\n\r", *(po + 1));
    printf("hex is %x\n\r", *(po + 2));
    printf("hex is %x\n\r", *(po + 3));

    ////////////////////////////////////////////////////
}