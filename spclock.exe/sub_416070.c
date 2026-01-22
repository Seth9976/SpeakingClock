// 函数: sub_416070
// 地址: 0x416070
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t i = arg2
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*arg1 != 1)
    void* eax_5
    int32_t edx_1
    eax_5, edx_1 = sub_416064(**(sub_416064(arg1) + 9))
    
    if (arg1 == 0x401004 || *(eax_5 + 1) s< 0)
        edx_1.b = i != 0
        sub_404bdc(arg3, (&data_4aab40)[edx_1 & 0x7f])
        
        if (sub_408f64(*data_4ac44c, 0x416144) != 0)
            sub_408d44(*arg3, &var_8)
            sub_404bdc(arg3, var_8)
    else
        void* esi_2 = eax_5 + 0xd
        
        for (; i != 0; i -= 1)
            esi_2 += zx.d(*esi_2) + 1
        
        sub_404dec(arg3, esi_2)
else
    sub_409340(arg3, arg3)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_416134
int32_t* result = &var_8
sub_404b88(result)
return result
