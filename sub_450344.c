// 函数: sub_450344
// 地址: 0x450344
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_1c
__builtin_memset(&var_1c, 0, 0x17)
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int24_t var_8
var_8:2.w = arg2
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* const edi_1

if ((var_8:2.b & 0x10) == 0)
    arg3.b = 1
    sub_44f914(*(arg5 - 4))
    edi_1 = nullptr
else
    HMENU eax
    int32_t ecx
    eax, ecx = GetSubMenu(arg1, arg3)
    ecx.b = 1
    sub_44f914(*(arg5 - 4))
    edi_1 = nullptr

if (edi_1 != 0 && *(edi_1 + 0x30) != 0)
    **(edi_1 + 0x30)
    sub_404d70()
    int32_t cchCount1_1
    int32_t cchCount1 = cchCount1_1
    
    if (cchCount1 != 0)
        cchCount1 = *(cchCount1 - 4)
    
    sub_404d70()
    int32_t cchCount2_1
    int32_t cchCount2 = cchCount2_1
    
    if (cchCount2 != 0)
        cchCount2 = *(cchCount2 - 4)
    
    sub_404d70()
    int32_t var_14
    char* lpString2 = sub_405018(var_14)
    **(edi_1 + 0x30)
    sub_404d70()
    int32_t var_18
    
    if (CompareStringA(0x400, 1, sub_405018(var_18), cchCount1, lpString2, cchCount2) == 2)
        sub_451274(*(edi_1 + 0x30), &var_1c)
        int32_t* eax_11
        eax_11.b = var_1c == 0

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_2c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_450476
return sub_404bac(&var_1c, 5)
