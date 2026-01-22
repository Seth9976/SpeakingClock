// 函数: sub_46ca28
// 地址: 0x46ca28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_a = arg3
char var_9 = arg2
*(arg1 + 0x14) = 0
int16_t ebx = 0

if (*(arg1 + 0x18) == 1)
    ebx = 1

if (*(arg1 + 0x1c) != 0)
    int32_t eax_4 = sub_46c330(arg1)
    int32_t edi_2 = *(arg1 + 0x10) - eax_4
    *(arg1 + 0x14) = edi_2
    
    if (edi_2 s< 0)
        *(arg1 + 0x14) = 0

int32_t var_26 = 0x1c
int32_t var_22 = 0x17
int32_t var_1e = 0

if (*(arg1 + 0x14) s<= 0)
    int32_t var_1a_1 = 0
else
    int32_t var_1a = *(arg1 + 0x10)

int32_t eax_11
void* edx_3
eax_11, edx_3 = sub_46c330(arg1)
int32_t var_16 = eax_11 + 1
int32_t eax_14 = *(arg1 + 0xc)
int32_t var_12 = eax_14
int32_t var_e = eax_14
int32_t __saved_ebp
int32_t* var_38 = &__saved_ebp
sub_46c920(zx.d(*(arg1 + 0x44)), edx_3)
*(arg1 + 0x44) = 0
(*data_4ac4a4)(sub_45f888(*(arg1 + 4)), zx.d(ebx), &var_26, 0xffffffff)
sub_46c7a0(arg1, *(arg1 + 0xc))
int32_t edx_5
edx_5.b = 1
int16_t temp0 = (divs.dp.d(sx.q(sub_46c330(arg1) * 9), 0xa)).w
*(arg1 + 0xa) = temp0
uint32_t result = arg1

if (*(result + 0x1f) != 0)
    result = divu.dp.d(0:(zx.d(temp0)), 0xa)
    *(arg1 + 8) = result.w

return result
