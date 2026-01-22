// 函数: sub_4036d0
// 地址: 0x4036d0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

__builtin_memcpy(arg4 - 0x3c, &data_414630, 0x2c)
data_414650 = arg6
data_41464c = arg5
data_414644 = arg4
int32_t entry_ebx
data_414648 = entry_ebx
data_414638 = arg3
data_414640 = arg2
data_414630 = arg4 - 0x3c
int32_t ecx_1 = 0

if (*(arg4 + 0xc) == 0)
    ecx_1 = *arg3

data_41463c = ecx_1
data_414014 = RaiseException
data_414018 = RtlUnwind
sub_4035c8(arg4)
int32_t eax_1 = *(arg4 + 0xc) + 1
data_414658 = eax_1.b
int32_t* ecx_2 = arg1
data_414654 = *ecx_2

if (eax_1 != 1 && (eax_1 - 1).b s< 3)
    ecx_2 = ecx_2[eax_1 - 1]()

if (arg8 != 0)
    *(arg4 + 0xc)
    *(arg4 + 0x10)
    arg8(ecx_2)

int32_t eax_4 = *(arg4 + 0xc)

if (eax_4.b s>= 3)
    ecx_2[eax_4]()

if (data_41402c == 0)
    data_414034 = 1
    int16_t x87status_1
    int16_t temp0_1
    temp0_1, x87status_1 = __fnstcw_memmem16(arg7)
    data_413020 = temp0_1

if (*(arg4 + 0xc) != 1)
    noreturn sub_4038fc() __tailcall

return sub_403670()
