// 函数: sub_480fa4
// 地址: 0x480fa4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int64_t* var_c = nullptr
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != *(arg1 + 0x260))
    if (arg2 == 0)
        char eax = *(arg1 + 0x26e)
        
        if (eax == 2 || eax == 3)
            sub_406a30(data_4ac3a4, &var_c)
            sub_48058c(var_c)
    
    *(arg1 + 0x260) = arg2
    
    if (arg2 == 0)
        *(arg1 + 0x26c) = 0

fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (__stdcall* var_18_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4) =
    sub_481029
int64_t** result = &var_c
sub_404b88(result)
return result
