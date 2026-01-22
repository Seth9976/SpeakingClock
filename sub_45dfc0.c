// 函数: sub_45dfc0
// 地址: 0x45dfc0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t cchCount2_2 = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(data_4ac4e0 + 0xc) != 0)
    if (arg1[0x6f] != 0)
        sub_474564(*data_4ac4b8, &cchCount2_2)
        int32_t cchCount2_1 = cchCount2_2
        int32_t cchCount1 = arg1[0x6f]
        
        if (cchCount1 != 0)
            cchCount1 = *(cchCount1 - 4)
        
        int32_t cchCount2 = cchCount2_1
        
        if (cchCount2 != 0)
            cchCount2 = *(cchCount2 - 4)
        
        char* lpString2 = sub_405018(cchCount2_1)
        
        if (CompareStringA(0x400, 1, sub_405018(arg1[0x6f]), cchCount1, lpString2, cchCount2) != 2)
            ActivateKeyboardLayout(*(*data_4ac4b8 + 0x3c), KLF_ACTIVATE)
    
    if (arg1[0x6e].b == 0)
        int32_t eax_12
        int32_t edx_2
        eax_12, edx_2 = sub_45f888(arg1)
        edx_2.b = 1
        sub_464f90(eax_12, edx_2)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_45e096
int32_t* result = &cchCount2_2
sub_404b88(result)
return result
