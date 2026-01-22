// 函数: sub_415528
// 地址: 0x415528
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t esi = *arg1
int16_t edi = *arg2
int32_t ecx
int80_t x87_r0
int80_t x87_r1

if (esi u< 0x10f && edi u< 0x10f)
    return sub_414f78(arg1, arg2, ecx, x87_r0, x87_r1)

if (esi == 0x400c)
    *(arg1 + 8)
    return sub_415528()

if (edi == 0x400c)
    *(arg2 + 8)
    return sub_415528()

if ((esi & 0xfff) u< 0x10f && (edi & 0xfff) u< 0x10f)
    return sub_414f78(arg1, arg2, ecx, x87_r0, x87_r1)

return sub_415104(arg1, arg2, ecx)
