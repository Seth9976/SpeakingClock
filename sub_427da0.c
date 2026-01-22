// 函数: sub_427da0
// 地址: 0x427da0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx_2
void* ebp_1
ebx_2, ebp_1 = sub_427fa8(arg1)

if (*(ebx_2 + 0x26) != 0)
    sub_427d30(*(ebx_2 + 0x38), arg2)
else
    sub_408f88(arg2, ebp_1 - 4)
    sub_427d30(*(ebx_2 + 0x38), *(ebp_1 - 4))

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_427e08
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
