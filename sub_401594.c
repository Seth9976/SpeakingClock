// 函数: sub_401594
// 地址: 0x401594
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ecx_3 = arg1[1]
void* edx = *arg1
*ecx_3 = edx
*(edx + 4) = ecx_3

if (ecx_3 != edx)
    return 

uint32_t edx_2 = zx.d((ecx_3 - &data_4ad7a4).w:1.b)
void* temp0_1 = *((edx_2 << 2) + &data_4ad724) & rol.d(0xfffffffe, ((ecx_3 - &data_4ad7a4) u>> 3).b)
*((edx_2 << 2) + &data_4ad724) = temp0_1

if (temp0_1 == 0)
    data_4ad720 &= rol.d(0xfffffffe, edx_2.b)
