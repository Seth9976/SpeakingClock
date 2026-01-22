// 函数: sub_4033ec
// 地址: 0x4033ec
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

*(arg6 + 4) = 0x403437
int32_t* eax = sub_4056cc()
int32_t* edx = *eax
*eax = *edx
int32_t* eax_1 = edx[3]
eax_1[1] &= 0xfffffffd

if (*eax_1 != 0xeedfade)
    sub_402eb0(edx[2])
    sub_403170()

TEB* fsbase
*arg1 = fsbase->NtTib.ExceptionList->Next
return 1
