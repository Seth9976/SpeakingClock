// 函数: sub_499f9c
// 地址: 0x499f9c
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

if (sub_49a970(arg1) == 0)
    arg1[0xaf] = 0
    arg1[0xb0] = 0
else
    (*(*arg1 + 0xf4))()
    int32_t eax_4 = sub_4054d8(var_8)
    esp = &var_8
    arg1[0xaf] = (*data_4ac0d4)(sub_45f888(arg1), eax_4)
    
    if (*(arg1 + 0x29a) != 0)
        esp = &var_8
        arg1[0xb0] = (*data_4ac0d4)(sub_45f888(arg1), &data_49a044)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_49a03e
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_405368(result)
return result
