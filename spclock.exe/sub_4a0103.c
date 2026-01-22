// 函数: sub_4a0103
// 地址: 0x4a0103
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 += 1
*arg1 += arg1.b
int32_t entry_ebx
*arg2 += entry_ebx:1.b
*arg1 &= arg1.b
arg1[0x5590c301] += arg2:1.b
int32_t var_4 = 0
int32_t esi
int32_t var_c = esi
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_49ffbc(arg1)
void* ebx_1
void* ebp
ebx_1, ebp = sub_4a0730(arg1, nullptr, &var_4)
(*(**(ebx_1 + 0x44) + 0xc))(entry_ebx, var_4)
sub_4a060c(*(ebp - 4))
sub_407b88(0)
fsbase->NtTib.ExceptionList = entry_ebx
__return_addr = sub_4a0182
sub_404b88(ebp - 4)
return ebp - 4
