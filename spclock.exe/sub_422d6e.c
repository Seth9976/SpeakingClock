// 函数: sub_422d6e
// 地址: 0x422d6e
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(*(arg1 - 4) + 0x38) = sub_402f6c()
sub_404598(__return_addr)
TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
arg2 = 0x422dc6
char ebx = *(*(arg1 - 4) + 0xf)
uint32_t esi = *(*(arg1 - 4) + 0x14)
(***(arg1 - 4))()
*(*(arg1 - 4) + 0x10) = 1
sub_422b2c()

if (ebx != 0)
    sub_403c68(*(arg1 - 4))

sub_404b6c(esi)
noreturn
