// 函数: sub_42213c
// 地址: 0x42213c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t var_10 = 0
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c
sub_416cf8(*(arg1 - 0x10), *(arg1 - 8), &var_c)
sub_421940(arg1)
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList

if (var_c != 0)
    (*(**(arg1 - 4) + 0x14))()
    void var_8
    esp = &var_8
    sub_420ef8(*(arg1 - 4), var_10)
else
    *(arg1 - 4)
    sub_4229ec(arg1, 0xd)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4221c5
int32_t* result = &var_10
sub_404b88(result)
return result
