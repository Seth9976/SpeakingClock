// 函数: sub_4887a0
// 地址: 0x4887a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* edi = arg2
int32_t var_8

if (arg1.b != 0)
    arg2.b = 1
    int32_t var_c = sub_403c38(arg1, arg2)
    int32_t* var_c_1 = &var_4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* __saved_esi_2 = fsbase->NtTib.ExceptionList
    int32_t __saved_esi
    fsbase->NtTib.ExceptionList = &__saved_esi
    
    if (arg6 != 0xffffffff)
        sub_488418(var_c_1, edi, arg6, arg3.b, edi)
    else
        (*(*edi + 0x58))(__saved_esi_2, j_sub_40443c, var_c_1)
    
    sub_41c894(var_c_1, 0, 0)
    void* ebp_1 = sub_48845c(var_c_1, arg3, (**var_c_1)(__saved_esi_2, j_sub_40443c, var_c_1))
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = &data_4888ae
    return sub_403c68(*(ebp_1 - 8))

if (arg6 != 0xffffffff)
    HPALETTE eax_30 = (*(*edi + 0x24))(arg6, 1)
    return sub_48839c(arg3, (*(*edi + 0x68))(eax_30), eax_30, arg5, arg4.b)

int32_t eax_11 = sub_41c874(arg3)
int32_t eax_14
int32_t edx_5
edx_5:eax_14 = sx.q(eax_11 + 4)
sub_41c894(arg3, eax_14, edx_5)
(*(*edi + 0x58))(arg5, arg4)
int32_t eax_18 = sub_41c874(arg3)
int32_t eax_20
int32_t edx_7
edx_7:eax_20 = sx.q(eax_11)
sub_41c894(arg3, eax_20, edx_7)
var_8 = eax_18 - (eax_11 + 4)
(*(*arg3 + 0x10))()
int32_t eax_26
int32_t edx_10
edx_10:eax_26 = sx.q(eax_18)
return sub_41c894(arg3, eax_26, edx_10)
