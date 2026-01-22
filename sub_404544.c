// 函数: sub_404544
// 地址: 0x404544
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg6 + 4) = 0x40458f
int32_t* eax = sub_406b68()
int32_t* edx = *eax
*eax = *edx
int32_t* eax_1 = edx[3]
eax_1[1] &= 0xfffffffd

if (*eax_1 != 0xeedfade)
    sub_403c68(edx[2])
    sub_404084()

TEB* fsbase
*arg1 = fsbase->NtTib.ExceptionList->Next
return 1
