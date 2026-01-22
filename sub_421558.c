// 函数: sub_421558
// 地址: 0x421558
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t* var_8 = nullptr
int32_t var_c = 0
int32_t* var_10 = nullptr
int32_t var_14 = 0
int32_t ebx
int32_t var_18 = ebx
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
ebx.b = 1
sub_416dd4(*(arg1 - 4), *(arg1 - 8), &var_8)

if (var_8 == 0)
label_4215aa:
    
    if (*(arg1 - 9) != 0)
        sub_416dd4(*(arg1 - 0x10), *(arg1 - 8), &var_14)
else
    sub_406550(&var_10)
    
    if (sub_40eb24(var_8, 0x421624, &var_10) == 0)
        goto label_4215aa
    
    int32_t var_c_1 = (*(*var_10 + 0xc))()
    char eax_12
    eax_12, ebp_1 = sub_42148c(&var_4)
    esp = &var_8
    *(ebp_1[-2] + 8)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_42161c
sub_406550(&ebp_1[-4])
sub_406550(&ebp_1[-3])
sub_406550(&ebp_1[-1])
return &ebp_1[-1]
