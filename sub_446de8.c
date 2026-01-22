// 函数: sub_446de8
// 地址: 0x446de8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = *(arg1 + 0xc)

if (*(esi + 0x82) == 0)
    return 0x80004001

int32_t* eax_1 = esi
esi.w = 0xffe4
return sub_403e64(eax_1, esi)
