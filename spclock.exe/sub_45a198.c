// 函数: sub_45a198
// 地址: 0x45a198
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = arg2
int32_t esi
esi.w = 0xffc7

if (sub_403e64(arg1, esi) != 0)
    if ((ebx & 2) == 2)
        ebx &= 0xfffffffd
    else if ((ebx & 1) != 1)
        ebx |= 2

return ebx | sub_45a1d8(arg1)
