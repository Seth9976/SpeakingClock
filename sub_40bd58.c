// 函数: sub_40bd58
// 地址: 0x40bd58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t cchCount2_2 = 0
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_d = 0

if (arg3 != 0)
    sub_40bca0(arg1, arg2)
    void* esi_1 = arg3
    
    if (esi_1 != 0)
        esi_1 = *(esi_1 - 4)
    
    sub_405080(esi_1, *arg2, arg1, &cchCount2_2)
    int32_t cchCount2_1 = cchCount2_2
    int32_t cchCount1 = arg3
    
    if (cchCount1 != 0)
        cchCount1 = *(cchCount1 - 4)
    
    int32_t cchCount2 = cchCount2_1
    
    if (cchCount2 != 0)
        cchCount2 = *(cchCount2 - 4)
    
    char* lpString2 = sub_405018(cchCount2_1)
    
    if (CompareStringA(0x400, 1, sub_405018(arg3), cchCount1, lpString2, cchCount2) == 2)
        void* eax_7 = arg3
        
        if (eax_7 != 0)
            eax_7 = *(eax_7 - 4)
        
        *arg2 += eax_7
        char var_d_1 = 1

fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40be25
int32_t* result = &cchCount2_2
sub_404b88(result)
return result
