// 函数: sub_41aa08
// 地址: 0x41aa08
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
int32_t __saved_ecx
int32_t __saved_ecx_2 = __saved_ecx
int32_t __saved_edx
int32_t __saved_edx_1 = __saved_edx
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_406550(&var_8)
sub_41a968(arg1, &var_8)

if (var_8 != 0)
    (*(*var_8 + 0x10))()
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_41aa64
int32_t** result = &var_8
sub_406550(result)
return result
