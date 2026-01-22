// 函数: sub_448b04
// 地址: 0x448b04
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4570b8(arg1, arg2)
sub_404bdc(&arg1[0xa1], arg4)

if (arg3 s>= 0)
    sub_4738d4(arg1, arg3)

if (arg5 s>= 0)
    sub_473910(arg1, arg5.w)

if (arg5 s< 0 && arg3 s< 0)
    sub_46fcfc(arg1, 4)

int32_t var_c = (*(*arg1 + 0xfc))()
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_448b93
return sub_403c68(arg1)
