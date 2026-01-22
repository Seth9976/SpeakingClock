// 函数: sub_41d578
// 地址: 0x41d578
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
sub_406550(&var_8)

if (arg2 != 0)
    void* eax_5 = sub_416064(***(arg1 + 0xc)) + 5
    sub_406550(&var_8)
    esp = &var_8
    
    if (sub_40eb48(arg2, eax_5, &var_8) == 0)
        sub_406550(&var_8)

sub_416e54(*(arg1 + 4), *(arg1 + 0xc), var_8)
esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_41d5f6
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_406550(result)
return result
