// 函数: sub_446e78
// 地址: 0x446e78
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1

if (*(ebx + 0x10) != 0)
    ebx = sub_4479b4(*(ebx + 0xc))
    *(ebx + 0x10) = 0

int32_t* esi = *(ebx + 0xc)

if (*(esi + 0x9a) == 0)
    return 0x80004001

int32_t* eax_2 = esi
esi.w = 0xffe1
return sub_403e64(eax_2, esi)
