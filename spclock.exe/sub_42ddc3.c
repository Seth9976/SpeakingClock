// 函数: sub_42ddc3
// 地址: 0x42ddc3
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 * 2) += 1
*arg1 += arg1.b
void* const __return_addr_1 = __return_addr
int32_t* ebp = arg3
int32_t* ExceptionList
int32_t* ExceptionList_1 = ExceptionList
int32_t* arg_1d
char* eax = arg_1d

if (&__return_addr == 0xffffffff)
    ExceptionList_1:1.b += eax[0xff458801]
else
    *eax += eax.b
    *eax += eax.b
    arg_1d = ebp
    ebp = &arg_1d
    int32_t* arg_d = arg4
    arg3 = arg2
    arg2 = __return_addr_1
    int32_t eax_2
    int32_t eax_4
    
    if (ExceptionList_1 != 0)
        eax_2 = sub_403b40(eax)
        eax_4 = sub_403b40(ExceptionList_1)
    
    if (ExceptionList_1 != 0 && eax_2 == eax_4)
        eax_4.b = 1
    else
        eax_4 = 0
    
    arg5:3.b = eax_4.b
    char eax_6 = (*(*eax + 0x1c))()
    char eax_8
    int32_t ecx_1
    int32_t edx_2
    
    if (eax_6 == 0)
        eax_8, edx_2, ecx_1 = (*(*ExceptionList_1 + 0x1c))()
    
    if (eax_6 != 0 || eax_8 != 0)
        char eax_10 = (*(*eax + 0x1c))()
        char eax_12
        
        if (eax_10 != 0)
            eax_12 = (*(*ExceptionList_1 + 0x1c))()
        
        if (eax_10 != 0 && eax_12 != 0)
            eax_12 = 1
        else
            eax_12 = 0
        
        arg5:3.b = eax_12
    else if (arg5:3.b != 0)
        edx_2.b = 1
        ExceptionList = sub_403c38(ecx_1, edx_2)
        arg_1d = &arg_1d
        arg5 = j_sub_40443c
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        int32_t ecx_3
        int32_t edx_6
        edx_6, ecx_3 = (*(*eax + 0x44))()
        edx_6.b = 1
        int32_t* eax_17 = sub_403c38(ecx_3, edx_6)
        arg_1d = &arg_1d
        arg5 = j_sub_40443c
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        (*(*ExceptionList_1 + 0x44))()
        int32_t (* eax_20)(void* arg1, void* arg2)
        int32_t* edx_9
        eax_20, edx_9 = (**ExceptionList)()
        arg_1d = edx_9
        int32_t eax_22
        int32_t edx_11
        eax_22, edx_11 = (**eax_17)()
        int32_t* temp1 = arg_1d
        bool cond:1 = edx_11 != temp1
        
        if (edx_11 == temp1)
            cond:1 = eax_22 != eax_20
        
        char eax_29
        
        if (not(cond:1))
            int32_t eax_25 = (**ExceptionList)()
            eax_29 = sub_408e34(ExceptionList[1], eax_17[1], eax_25)
        
        if (not(cond:1) && eax_29 != 0)
            eax_29 = 1
        else
            eax_29 = 0
        
        arg5:3.b = eax_29
        fsbase->NtTib.ExceptionList = arg6
        arg8 = sub_42def1
        return sub_403c68(eax_17)

*ebp
return zx.d(*(ebp - 1))
