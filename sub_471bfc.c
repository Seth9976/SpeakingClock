// 函数: sub_471bfc
// 地址: 0x471bfc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x290) != 0)
    if (*(arg2 + 6) != 0xffff || *(arg2 + 4) != 0)
        if ((*(arg2 + 6) & 0x10) != 0)
            int32_t ebx_1
            ebx_1.b = 1
            GetSubMenu(*(arg2 + 8), zx.d(*(arg2 + 4)))
        
        sub_44f914(*(arg1 + 0x290))
    
    sub_477894(data_4b1ce0, nullptr)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_471c9e
char** result = &var_8
sub_404b88(result)
return result
