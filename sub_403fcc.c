// 函数: sub_403fcc
// 地址: 0x403fcc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_4 = arg2
int32_t eax

if (arg2.b s>= 0)
    eax = (*(eax - 0xc))()

TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebp
int32_t arg_c = ebp
int32_t (* arg_8)() = j_sub_404188
int32_t arg_10 = eax
fsbase->NtTib.ExceptionList = &ExceptionList
