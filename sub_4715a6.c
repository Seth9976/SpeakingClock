// 函数: sub_4715a6
// 地址: 0x4715a6
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1[-1] + 0x298) == 0)
    int32_t esi
    esi.w = 0xffa6
    sub_403e64(arg1[-1], esi)
else
    (*(**(arg1[-1] + 0x298) + 0x28))()

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_42c7c4(*(arg1[-1] + 0x280), 0)
fsbase->NtTib.ExceptionList = arg3
int32_t result = sub_42c608(*(arg1[-1] + 0x280))
*arg1
return result
