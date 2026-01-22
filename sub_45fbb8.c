// 函数: sub_45fbb8
// 地址: 0x45fbb8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 != *(arg1 + 0x1db))
    *(arg1 + 0x1db) = arg2
    
    if ((((arg1[7].b & 0x10) != 0 ^ 1) & arg2) != 0)
        esi.w = 0xffc5
        sub_403e64(arg1, esi, &var_8)
        esp = &var_8
        sub_406568(&arg1[0x6c], var_8)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_45fc23
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_406550(result)
return result
