// 函数: sub_4a4f2c
// 地址: 0x4a4f2c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404598(__return_addr)
sub_403c68(*(arg1 - 8))
BOOL result = *(arg1 - 4)

if (*(result + 0x4fd) == 0)
    return result

*(*(arg1 - 4) + 0x4fd) = 0
*(*(arg1 - 4) + 0x500) = 0
*(arg1 - 4)
int32_t edx
edx.b = 1
int32_t* eax_3 = sub_46d398(sub_4a2074+0x48, edx)
(*(*eax_3 + 0xfc))()
return sub_472f50(eax_3)
