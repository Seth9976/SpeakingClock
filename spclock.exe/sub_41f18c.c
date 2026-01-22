// 函数: sub_41f18c
// 地址: 0x41f18c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
int64_t* var_c = nullptr
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_2
int32_t ecx
eax_2, ecx = sub_41e028(*(arg1 - 4))

if (eax_2 != 0xd)
    int32_t eax_11 = *(*(arg1 - 4) + 0x18)
    int32_t eax_13 = *(arg1 - 0xc)
    sub_41eb38(*(arg1 - 4), &var_c, ecx)
    int32_t edx_2
    edx_2.b = 1
    int32_t* eax_18 = sub_41d4c8(*(arg1 - 8), edx_2, &data_41d4b4, var_c, nullptr, eax_13, eax_11)
    sub_419f9c(*(*(arg1 - 4) + 0x30), eax_18)
else
    *(arg1 - 4)
    sub_41fbb4(ecx)
    sub_406550(&var_8)
    sub_416e54(*(arg1 - 8), *(arg1 - 0xc), var_8)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_10_1)(int32_t arg1, int32_t arg2) = sub_41f245
sub_404b88(&var_c)
int32_t** result = &var_8
sub_406550(result)
return result
