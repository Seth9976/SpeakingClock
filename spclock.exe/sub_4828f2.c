// 函数: sub_4828f2
// 地址: 0x4828f2
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_403c68(*(arg1[-1] + 0x2b8))
sub_404544()
sub_404598(arg2)
char ebx = *(arg1[-2] + 0x57)
int32_t* ecx = sub_481bbc(*(arg1[-1] + 0x2b8), ebx)

if (ebx != 0)
    ecx, arg1 = sub_4825a0(arg1[-1], *(arg1[-1] + 0x2b8), ecx)

sub_456b54(arg1[-2], true, ecx)
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2
*(arg1[-1] + 0x2b8) = 0
fsbase->NtTib.ExceptionList = arg4
sub_404b88(&arg1[-3])
*arg1
return &arg1[-3]
