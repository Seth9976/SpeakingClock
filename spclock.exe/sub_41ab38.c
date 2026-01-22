// 函数: sub_41ab38
// 地址: 0x41ab38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_11c = ebx
int32_t esi
int32_t var_120 = esi
int32_t edi
int32_t var_124 = edi
int32_t var_18 = 0
int32_t* var_128 = &var_4
int32_t (* var_12c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_118[0x100]

if (arg1[1] == 0)
    sub_404dec(sub_403b48(*arg1, &var_118), &var_118)
else
    esi.w = 0xfffe
    sub_403e64(arg1[1], esi, &var_18, 0, arg2)
    int32_t var_14 = var_18
    char var_10_1 = 0xb
    void* eax_3 = sub_41aaf8(arg1)
    char var_8 = 0
    sub_40a37c(1, &var_14, sub_41abdf+5, eax_3)
    esp = &var_8
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_41abd4
int32_t* result = &var_18
sub_404b88(result)
return result
