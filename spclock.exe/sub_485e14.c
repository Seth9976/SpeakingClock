// 函数: sub_485e14
// 地址: 0x485e14
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = *(arg2 + 8)

if (*(esi + 8) != 0xfffffd2e)
    return 

int16_t ebp_1 = *(esi + 0x10)
int32_t eax_1
eax_1.b = sub_485d34(arg1, *(esi + 0xc) + ebp_1, ebp_1).b ^ 1
char temp0_1 = eax_1.b
eax_1.b = neg.b(eax_1.b)
*(arg2 + 0xc) = sbb.d(eax_1, eax_1, temp0_1 != 0)
