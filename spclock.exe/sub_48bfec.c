// 函数: sub_48bfec
// 地址: 0x48bfec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != *(arg1 + 0x49))
    *(arg1 + 0x49) = arg2
    
    if (arg2 != 0)
        (*(*arg1 + 0x34))()
        esp = &var_8
        sub_404bdc(&arg1[0x15], var_8)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_48c042
int64_t** result = &var_8
sub_404b88(result)
return result
