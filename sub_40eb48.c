// 函数: sub_40eb48
// 地址: 0x40eb48
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_8 = 0
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

if (arg1 != 0)
    sub_406550(&var_8)
    char eax_2
    struct _EXCEPTION_REGISTRATION_RECORD* esi_2
    eax_2, ebp_1, esi_2 = sub_403d1c(arg1, 0x40ebd0, &var_8)
    int32_t* eax_4
    
    if (eax_2 != 0)
        eax_4 = sub_40eb24(ebp_1[-1], esi_2, arg3)
    
    if (eax_2 != 0 && eax_4.b != 0)
        eax_4.b = 1
    else
        eax_4, ebp_1 = sub_403d1c(arg1, esi_2, arg3)
        
        if (eax_4.b != 0)
            eax_4.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_40ebc6
sub_406550(&ebp_1[-1])
return &ebp_1[-1]
