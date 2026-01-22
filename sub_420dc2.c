// 函数: sub_420dc2
// 地址: 0x420dc2
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1[-1]
sub_421090()

if (*(arg1[-1] + 0x18) != arg1[-2] && 1 == *(arg1 - 0x25) && sub_42058c(arg1[-1]) == arg1[-4] + 2)
    sub_420600(arg1[-1], arg1[-3])

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
int32_t result = sub_404bac(&arg1[-0x4e], 4)
*arg1
return result
