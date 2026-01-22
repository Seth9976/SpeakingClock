// 函数: sub_49ee40
// 地址: 0x49ee40
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1[0x32]
int32_t ecx
uint32_t result = sub_49e04c(ecx, 0)

if (*(arg1 + 0xdb) == 0 && *(arg1 + 0xc2) != 0)
    *(arg1 + 0xc2) = 0
    int32_t esi
    esi.w = 0xffef
    result = sub_403e64(arg1, esi)

*(arg1 + 0xdb) = 0
return result
