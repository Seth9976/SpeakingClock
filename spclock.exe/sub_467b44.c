// 函数: sub_467b44
// 地址: 0x467b44
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t eax_1
int32_t eax_3

if (arg2 != 0)
    eax_1 = sub_4670ec(arg1)
    eax_3 = sub_4670ec(arg2)

char var_5

if (arg2 != 0 && eax_1 == eax_3)
    int32_t eax_5
    int32_t ecx_1
    int32_t edx
    eax_5, ecx_1, edx = sub_4670ec(arg1)
    int32_t eax_7
    
    if (eax_5 == 0)
        eax_7, ecx_1, edx = sub_4670ec(arg2)
    
    if (eax_5 != 0 || eax_7 != 0)
        edx.b = 1
        int32_t var_c = sub_403c38(ecx_1, edx)
        int32_t* var_20 = &var_4
        int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        int32_t ecx_3
        int32_t edx_2
        edx_2, ecx_3 = (*(*arg1 + 0x3c))(ExceptionList, var_24, var_20)
        edx_2.b = 1
        int32_t var_10 = sub_403c38(ecx_3, edx_2)
        int32_t* var_c_1 = &var_4
        int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
        int32_t __saved_ebx
        fsbase->NtTib.ExceptionList = &__saved_ebx
        (*(*arg2 + 0x3c))(fsbase->NtTib.ExceptionList, var_10_1, var_c_1)
        char var_5_1 = sub_467b00(var_c_1, var_10_1)
        int32_t var_8
        fsbase->NtTib.ExceptionList = var_8
        __return_addr = sub_467c0a
        return sub_403c68(var_10_1)
    
    var_5 = 1
else
    var_5 = 0

return zx.d(var_5)
