// 函数: sub_41644c
// 地址: 0x41644c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_416064(arg1) + 1)
char eax_2 = *arg1

if (eax_2 == 1)
    sub_40947c(arg2)
else
    char temp1_1 = eax_2 - 1
    char temp2_1
    
    if (temp1_1 != 1)
        temp2_1 = eax_2 - 2
    
    if (temp1_1 == 1 || temp2_1 == 7)
        char* ebx_4 = arg2
        
        if (ebx_4 != 0)
            ebx_4 = *(ebx_4 - 4)
        
        sub_405080(ebx_4 - 1, 2, arg2, &var_8)
        sub_40947c(var_8)
    else
        sub_416194(arg1, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_4164e2
void** result = &var_8
sub_404b88(result)
return result
