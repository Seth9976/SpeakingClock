// 函数: sub_4672a2
// 地址: 0x4672a2
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
sub_403c68(*(arg1 - 0xc))
fsbase->NtTib.ExceptionList = arg3
int32_t* ebp = sub_467338(*(arg1 - 4), *(arg1 - 8))
int32_t esi
esi.w = 0xffef
sub_403e64(ebp[-1], esi)
fsbase->NtTib.ExceptionList = arg5
int32_t result = sub_404bac(&ebp[-6], 2)
*ebp
return result
