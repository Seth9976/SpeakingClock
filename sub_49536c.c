// 函数: sub_49536c
// 地址: 0x49536c
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
sub_404b88(arg2)
char ebx_1 = *(*(arg1 + 0x2c) + 0x20)

if (ebx_1 == 0)
    sub_404bdc(arg2, "{Disabled}")
else
    sub_404bdc(arg2, "{Enabled (")
    
    if (ebx_1 == 2)
        sub_404e54(arg2, "brush")
    else
        char ebx_2 = ebx_1 - 3
        
        if (ebx_2 u< 2)
            sub_404e54(arg2, 0x495470)
        else if (ebx_2 == 2)
            sub_404e54(arg2, "grad")
    
    int64_t* var_24_1 = *arg2
    void* const var_28_1 = "), strength: "
    long double var_34_1 = fconvert.t(*(arg1 + 0x1c))
    sub_40ab24(3, 5, 2, &var_8)
    var_34_1:8.d = var_8
    var_34_1:4.d = &data_4954a4
    sub_404f1c(arg2, 4)
    esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_49543e
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
