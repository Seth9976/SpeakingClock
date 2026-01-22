// 函数: sub_406b44
// 地址: 0x406b44
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

char* var_4 = arg4
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg5)
int16_t x87status_1
int16_t temp0_1
temp0_1, x87status_1 = __fnstcw_memmem16(arg5)
int16_t x87control
int16_t x87status_2
x87control, x87status_2 = __fldcw_memmem16(temp0_1 | 0xf00)
long double x87_r7 = float.t(1)
long double x87_r6_1

if ((arg1[1] & 0x80000000) == 0)
    x87_r6_1 = float.t(*arg1)
else
    int32_t var_c_2 = arg1[1] & 0x7fffffff
    int32_t var_14_1 = 0x7fffffff
    x87_r6_1 = float.t((*arg1).q) + float.t(0xffffffff.q) + x87_r7

long double x87_r5_3 = float.t(arg3)
long double x87_r4 = x87_r6_1

do
    arg4 -= 1
    long double st0_1
    int16_t temp0_2
    bool c2_1
    st0_1, c2_1, temp0_2 = __fprem(x87_r4, x87_r5_3)
    x87_r6_1 = x87_r6_1 / x87_r5_3
    arg1.b = (int.w(st0_1)).b
    arg1.b += 0x30
    
    if (arg1.b u>= 0x3a)
        arg1.b += 7
    
    *arg4 = arg1.b
    x87_r4 = x87_r6_1
    x87_r4 - x87_r7
    arg1.w = (x87_r4 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, x87_r7) ? 1 : 0) << 0xa
        | (x87_r4 == x87_r7 ? 1 : 0) << 0xe | 0x2000
while (not(test_bit(arg1:1.b, 0)))

int16_t x87control_1
int16_t x87status_3
x87control_1, x87status_3 = __fldcw_memmem16(temp0)
void* ecx_1 = var_4 - arg4
char* edx = arg2 - ecx_1

if (arg2 u> ecx_1)
    void* esi = arg4 - edx
    arg1.b = 0x30
    
    while (true)
        char* temp2_1 = edx
        edx -= 1
        
        if (temp2_1 == 1)
            break
        
        *(edx + esi) = 0x30
    
    *esi = 0x30

return arg1
