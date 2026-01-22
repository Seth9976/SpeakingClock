// 函数: sub_475b98
// 地址: 0x475b98
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

if (*(arg1 + 0x162) != 0)
    int32_t ecx
    sub_404d80(ecx, *(arg2 + 8))
    *(arg2 + 4)
    *(arg1 + 0x164)
    (*(arg1 + 0x160))(arg2 + 0xc, var_8)
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_475bfc
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
