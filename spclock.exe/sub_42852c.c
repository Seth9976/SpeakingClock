// 函数: sub_42852c
// 地址: 0x42852c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
void* var_8 = nullptr
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_1 = (*(**(arg1 + 8) + 0x54))(ExceptionList, var_1c, var_18)
int32_t* eax_3
int32_t eax_5

if (eax_1 s>= 0)
    eax_3 = (*(**(arg1 + 8) + 0x18))()
    eax_5 = (*(*eax_3 + 0x58))()

if (eax_1 s< 0 || eax_5 s< 0)
    sub_404bdc(arg4, arg5)
else
    (*(*eax_3 + 0xc))()
    int32_t ebx_4 = arg3
    
    if (ebx_4 != 0)
        ebx_4 = *(ebx_4 - 4)
    
    sub_405080(0x7fffffff, ebx_4 + 2, var_8, arg4)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4285cc
int32_t* result = &var_8
sub_404b88(result)
return result
