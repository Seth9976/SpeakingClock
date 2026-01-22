// 函数: sub_4a0068
// 地址: 0x4a0068
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int32_t var_c = 0
int32_t ebx
int32_t var_10 = ebx
int32_t __saved_eax
int32_t __saved_eax_1 = __saved_eax
int32_t edi
int32_t var_18 = edi
int32_t edx
int32_t edi_1 = edx
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_4b1dbc == 0)
    edx.b = 1
    int32_t* eax_3
    int32_t ecx
    int32_t ecx_2
    eax_3, ecx_2 = sub_403c38(ecx, edx)
    sub_49ffe8(ecx_2, &var_c)
    var_c = var_c
    void* const var_10_1 = &data_4a0108
    int32_t var_14 = edi_1
    sub_404f1c(&var_8, 3)
    (*(*eax_3 + 0x38))()
else
    (*(*data_4b1dbc + 0x18))()

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4a00f7
return sub_404bac(&var_c, 2)
