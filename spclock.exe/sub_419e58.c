// 函数: sub_419e58
// 地址: 0x419e58
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_5 = 0

if (sub_403b40(arg1) == sub_403b40(arg2) && sub_41ae58(arg1) == sub_41ae58(arg2))
    int32_t edx_1
    edx_1.b = 1
    int32_t eax_9 = sub_403c38(arg3, edx_1)
    int32_t __saved_ebp
    int32_t* var_20_2 = &__saved_ebp
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx_1
    int32_t edx_3
    void* ebp
    void* esi_1
    ecx_1, edx_3, ebp, esi_1 = sub_419dec(eax_9, arg1, arg3)
    edx_3.b = 1
    *(ebp - 0xc) = sub_403c38(ecx_1, edx_3)
    void* var_20_3 = ebp
    int32_t (* var_24_1)(void* arg1, void* arg2) = j_sub_40443c
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebp_1 = sub_419dec(*(ebp - 0xc), esi_1, *(ebp + 8))
    int32_t eax_15
    int32_t edx_6
    int32_t entry_ebx
    eax_15, edx_6 = (***(ebp_1 - 8))(arg5, arg4, entry_ebx)
    int32_t eax_17
    int32_t edx_8
    eax_17, edx_8 = (***(ebp_1 - 0xc))(eax_15, edx_6)
    bool cond:0 = edx_8 != arg4
    
    if (edx_8 == arg4)
        cond:0 = eax_17 != arg5
    
    char eax_24
    
    if (not(cond:0))
        int32_t eax_20 = (***(ebp_1 - 8))()
        eax_24 = sub_408e34(*(*(ebp_1 - 8) + 4), *(*(ebp_1 - 0xc) + 4), eax_20)
    
    if (not(cond:0) && eax_24 != 0)
        eax_24 = 1
    else
        eax_24 = 0
    
    *(ebp_1 - 1) = eax_24
    fsbase->NtTib.ExceptionList = entry_ebx
    uint32_t (* var_c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
        int32_t arg5) = sub_419f4f
    return sub_403c68(*(ebp_1 - 0xc))

return zx.d(var_5)
