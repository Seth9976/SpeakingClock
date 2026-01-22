// 函数: sub_41f8f8
// 地址: 0x41f8f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_8 = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t* var_28 = &var_4
int32_t (* var_2c)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_1
int32_t ecx
eax_1, ecx = sub_41fbb4(0)

if (eax_1 != 0xb)
    ecx = sub_41da5c()

**(sub_416064(arg2) + 1)
int32_t ebx_2 = 0

while (true)
    sub_41f9d8(arg1, &var_8, ecx)
    
    if (var_8 == 0)
        break
    
    void** eax_7
    eax_7, ecx = sub_41da94()
    
    if (eax_7 u<= 0x1f)
        ebx_2 |= 1 << (eax_7 u% 0x20)

fsbase->NtTib.ExceptionList = ExceptionList
fsbase->NtTib.ExceptionList = ExceptionList_1
int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_41f9a9
int32_t* result = &var_8
sub_404b88(result)
return result
