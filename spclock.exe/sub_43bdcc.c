// 函数: sub_43bdcc
// 地址: 0x43bdcc
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
fsbase->NtTib.ExceptionList = &ExceptionList
LPARAM lParam = sub_405018(arg2)
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList

if (SendMessageA(sub_45f888(*(arg1 + 0x18)), 0x143, 0, lParam) s< 0)
    sub_406a30(data_4ac0c4, &var_8)
    int32_t edx_1
    edx_1.b = 1
    sub_40451c(sub_40ceb0(sub_4175f8+0x48, edx_1, var_8))
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_43be46
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
