// 函数: sub_477454
// 地址: 0x477454
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int64_t* var_c = nullptr
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_1 = sub_405018(arg2)
arg2.w = 0x102
char var_5
sub_477268(eax_1, arg2.w, arg1, &var_5)
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList

if (var_5 != 0 && sub_477a48(arg1) != 0)
    int32_t ebx_1
    ebx_1.b = 1
    sub_4783a4(arg1, &var_c)
    (*(**(arg1 + 0x4c) + 0x18))()
    void var_8
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4774d9
int64_t** result = &var_c
sub_404b88(result)
return result
