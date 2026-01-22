// 函数: sub_4982fc
// 地址: 0x4982fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
int32_t* var_c = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_406550(&var_c)
char eax_2
void* edi_2
eax_2, edi_2 = sub_498100(arg1, 0x4983d0, &var_c)

if (eax_2 != 0)
    int32_t* esi_1 = *(edi_2 + 0x30)
    
    if (sub_403df4(esi_1, 0x46a11c) == 0)
        sub_406550(&var_8)
        int32_t ebx_1
        
        if (sub_498100(esi_1, 0x4983d0, &var_8) != 0 && (*(*var_c + 0x18))() != 0
                && (*(*var_8 + 0x10))() != 0)
            ebx_1.b = 1
    else
        sub_406550(&var_8)
        
        if (sub_4981d8(esi_1, &var_8) != 0)
            (*(*var_8 + 0x10))()
            esp = &var_8

fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4983c7
int32_t* result = &var_c
sub_405724(result, 0x49819c, 2)
return result
