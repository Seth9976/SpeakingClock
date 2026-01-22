// 函数: sub_42ebb0
// 地址: 0x42ebb0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_24 = arg3

if (arg1[0xa] == 0)
    return 

HPALETTE hPal = (*(*arg1 + 0x24))()
HPALETTE hPal_1 = nullptr

if (hPal != 0)
    hPal_1 = SelectPalette(sub_42c73c(arg2), hPal, 0xffffffff)
    RealizePalette(sub_42c73c(arg2))

int32_t* eax_6 = var_24
RECT lprect
lprect.left = *eax_6
var_1c
void* edi_1 = &var_1c
void* esi_3 = &eax_6[1]
*edi_1 = *esi_3
void* edi_2 = edi_1 + 4
void* esi_4 = esi_3 + 4
*edi_2 = *esi_4
*(edi_2 + 4) = *(esi_4 + 4)
lprect.right -= 1
lprect.bottom -= 1
PlayEnhMetaFile(sub_42c73c(arg2), *(arg1[0xa] + 8), &lprect)

if (hPal != 0)
    SelectPalette(sub_42c73c(arg2), hPal_1, 0xffffffff)
