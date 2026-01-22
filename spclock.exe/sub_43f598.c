// 函数: sub_43f598
// 地址: 0x43f598
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_43f528(arg1, 0)
void* ebx_1 = sub_43f3f8(arg1, 2)
sub_43f914(ebx_1)
sub_42c41c()
sub_43f2f8(sub_43f914(ebx_1))
*(ebx_1 + 0x1c) = 1
*(ebx_1 + 0x1d) = 0
*(ebx_1 + 0xc) = 1
int32_t lpdi
sub_403578(&lpdi, 0x14, 0)
lpdi = 0x14
int32_t var_14 = sub_405018(*(ebx_1 + 0x18))
SetAbortProc(*(ebx_1 + 0x20), sub_43f000)
StartDocA(*(ebx_1 + 0x20), &lpdi)
return StartPage(*(ebx_1 + 0x20))
