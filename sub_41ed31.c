// 函数: sub_41ed31
// 地址: 0x41ed31
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*(arg3 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2, eflags)
int32_t ebx
int32_t var_128 = ebx
*(arg3 - 4) = 0
void* var_12c = arg3
int32_t (* var_130)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404b88(arg3 - 4)

if (sub_403df4(*(*(arg3 + 8) - 4), &data_418674) != 0)
    sub_404c20(arg3 - 4, *(*(*(arg3 + 8) - 4) + 8))

if (*(arg3 - 4) == 0)
    sub_404dec(sub_403b48(**(*(arg3 + 8) - 4), arg3 - 0x104), arg3 - 0x104)

*(arg3 - 0x124) = *(arg3 - 4)
*(arg3 - 0x120) = 0xb
*(arg3 - 0x11c) = *data_4ac154
*(arg3 - 0x118) = 0xb
*(arg3 - 0x114) = *(*(arg3 + 8) - 8)
*(arg3 - 0x110) = 0xb
*(arg3 - 0x10c) = *(arg1 + 4)
*(arg3 - 0x108) = 0xb
void** const edx
edx.b = 1
int32_t eax_16
void* ebp
eax_16, ebp = sub_40cfa8(sub_41715c+0x210, edx, data_4ac42c, 3, arg3 - 0x124)
sub_40451c(eax_16)
int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41ee2c
sub_404b88(ebp - 4)
return ebp - 4
