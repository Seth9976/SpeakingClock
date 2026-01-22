// 函数: sub_40c6e8
// 地址: 0x40c6e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void lCData
int32_t eax = GetLocaleInfoA(arg3, arg2, &lCData, 0x100)

if (eax s<= 0)
    return sub_404bdc(arg4, arg1)

sub_404c78(arg4, &lCData, eax - 1)
return arg4
