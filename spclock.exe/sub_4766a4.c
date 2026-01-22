// 函数: sub_4766a4
// 地址: 0x4766a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0xb8) == 0)
    return 0

if (IsWindowUnicode(*arg2) == 0)
    BOOL eax_7 = IsDialogMessageA(*(arg1 + 0xb8), arg2)
    return sbb.d(eax_7, eax_7, eax_7 u< 1) + 1

BOOL eax_4 = IsDialogMessageW(*(arg1 + 0xb8), arg2)
return sbb.d(eax_4, eax_4, eax_4 u< 1) + 1
