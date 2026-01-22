// 函数: sub_428368
// 地址: 0x428368
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp

if (*(arg1 + 4) != 0)
    char eax_1
    int32_t ecx_1
    int32_t edx_1
    eax_1, ecx_1, edx_1 = sub_40984c(*(arg1 + 4))
    
    if (eax_1 != 0)
        edx_1.b = 1
        int32_t* eax_3 = sub_403c38(ecx_1, edx_1)
        int32_t* __saved_ebx = &var_4
        int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        *(arg1 + 4)
        (*(*eax_3 + 0x68))(ExceptionList, var_10, __saved_ebx)
        int32_t esi
        void* ebp_1 = sub_4285f8(arg1, eax_3, esi)
        fsbase->NtTib.ExceptionList = eax_3
        __return_addr = &data_4283d7
        return sub_403c68(*(ebp_1 - 4))

return sub_428174(arg1)
