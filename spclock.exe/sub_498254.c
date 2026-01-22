// 函数: sub_498254
// 地址: 0x498254
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
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
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_1 = *(arg1 + 0x30)

if (sub_403df4(esi_1, 0x46a11c) == 0)
    sub_406550(&var_8)
    esp = &var_8
    
    if (sub_498100(esi_1, 0x4982ec, &var_8) != 0)
        (*(*var_8 + 0xc))()
else
    sub_406550(&var_8)
    
    if (sub_4981d8(esi_1, &var_8) != 0)
        (*(*var_8 + 0xc))()
        esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4982e4
int32_t** result = &var_8
sub_406550(result)
return result
