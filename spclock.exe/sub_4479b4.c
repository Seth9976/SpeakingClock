// 函数: sub_4479b4
// 地址: 0x4479b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_406550(&var_8)

if (sub_40eb24(*(arg1 + 0x3c), 0x447a14, &var_8) != 0)
    int32_t* eax_4 = var_8
    (*(*eax_4 + 0xc))(eax_4, arg1 + 0x58)
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_447a0f
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_406550(result)
return result
