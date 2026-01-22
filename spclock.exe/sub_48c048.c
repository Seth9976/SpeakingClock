// 函数: sub_48c048
// 地址: 0x48c048
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
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != *(arg1 + 0x6f))
    *(arg1 + 0x6f) = arg2
    
    if (arg2 != 2)
        *(arg1 + 0x6e) = arg2
    else
        *(arg1 + 0x6e) = 1
    
    if (*(arg1 + 0x6e) != 3)
        void* eax_3 = *(arg1 + 0x5c)
        
        if (eax_3 != 0)
            sub_428174(eax_3)
            sub_40eb14(arg1 + 0x5c)
    else if (*(arg1 + 0x5c) == 0)
        sub_48c2bc(arg1, &var_8)
        int32_t edx_1
        edx_1.b = 1
        *(arg1 + 0x5c) = sub_42807c(sub_426ff4+0xd8, edx_1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_48c0d0
int64_t** result = &var_8
sub_404b88(result)
return result
