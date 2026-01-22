// 函数: sub_477e90
// 地址: 0x477e90
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
void* var_8 = nullptr
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c = 0
char* ebx_1 = arg1

if (ebx_1 != 0)
    while (*ebx_1 != 0)
        char* esi_1 = ebx_1
        
        while (true)
            char eax_2 = *ebx_1
            
            if (eax_2 == 0)
                break
            
            if (eax_2 == 0xa)
                break
            
            if (eax_2 == 0xd)
                break
            
            ebx_1 = sub_40daf8(ebx_1)
        
        sub_404c78(&var_8, esi_1, ebx_1 - esi_1)
        int32_t eax_8 = sub_42c570(*(*(*(arg2 - 4) + 0x84) + 0x250), var_8)
        
        if (eax_8 s> var_c)
            var_c = eax_8
        
        if (*ebx_1 == 0xd)
            ebx_1 = &ebx_1[1]
        
        if (*ebx_1 == 0xa)
            ebx_1 = &ebx_1[1]

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_1c_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5) = sub_477f35
int32_t* result = &var_8
sub_404b88(result)
return result
