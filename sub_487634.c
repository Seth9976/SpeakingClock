// 函数: sub_487634
// 地址: 0x487634
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
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
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_487208(arg1, arg2)
int16_t temp0 = *(arg1 + 0x30)

if (temp0 != 0)
    sub_404fb0(*arg2, "{Disabled}")
    int32_t ecx_1
    
    if (temp0 != 0)
        int32_t eax_4 = sub_404e48(*arg2)
        void* eax_6
        eax_6, ecx_1 = j_sub_40502c(arg2)
        *(eax_6 + eax_4 - 1) = 0x2c
    else
        ecx_1 = sub_404bdc(arg2, 0x4876f8)
    
    int32_t var_24_1 = *arg2
    void* const var_28_1 = " rot: "
    *(arg1 + 0x30)
    sub_409340(ecx_1, &var_8)
    struct _EXCEPTION_REGISTRATION_RECORD* var_2c_1 = var_8
    int32_t var_30_1 = 0x487714
    sub_404f1c(arg2, 4)
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4876d3
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
