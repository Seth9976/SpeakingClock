// 函数: sub_4a4d38
// 地址: 0x4a4d38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0x388)
(*(**(arg1 + 0x3a8) + 0x6c))()
*(arg1 + 0x388)
(*(**(arg1 + 0x3ac) + 0x6c))()
*(arg1 + 0x388)
(*(**(arg1 + 0x3b4) + 0x6c))()
*(arg1 + 0x388)
(*(**(arg1 + 0x3b0) + 0x6c))()
*(arg1 + 0x388)
(*(**(arg1 + 0x3bc) + 0x6c))()
*(arg1 + 0x388)
(*(**(arg1 + 0x3c0) + 0x6c))()
*(arg1 + 0x388)
(*(**(arg1 + 0x3ec) + 0x6c))()
*(arg1 + 0x388)
(*(**(arg1 + 0x3cc) + 0x6c))()
*(arg1 + 0x388)
(*(**(arg1 + 0x3b8) + 0x6c))()
*(arg1 + 0x388)
(*(**(arg1 + 0x3d0) + 0x6c))()
*(arg1 + 0x388)
(*(**(arg1 + 0x3d4) + 0x6c))()

if (*(arg1 + 0x44d) != 0)
    sub_49fc68(*(arg1 + 0x3fc))
    
    if (*(arg1 + 0x447) != 0)
        *(arg1 + 0x3fc)
        sub_49fc40()
    else
        *(arg1 + 0x3fc)
        sub_49fc18()
    
    *(arg1 + 0x44d) = 0

int32_t edx_11

if (*(arg1 + 0x4fe) != 0)
    *(arg1 + 0x4fe) = 0
    *(arg1 + 0x500) = 0
    edx_11.b = 1
    int32_t* eax_45 = sub_46d398(sub_4a22c1+0x8f, edx_11)
    (*(*eax_45 + 0xfc))()
    sub_472f50(eax_45)
    int32_t edx_13
    edx_13.b = 1
    int32_t* eax_48 = sub_428a78(sub_42891c+0xa8, edx_13)
    int32_t __saved_ebp
    int32_t* var_1c_1 = &__saved_ebp
    int32_t (* var_20_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_428b18(eax_48, 0x80000001)
    
    if (sub_429318(eax_48) != 0)
        sub_428e74(eax_48, "\Software\Lux Aeterna\Speaking Clock")
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_403c68(eax_48)

if (*(arg1 + 0x4fd) == 0)
    return arg1

*(arg1 + 0x4fd) = 0
*(arg1 + 0x500) = 0
edx_11.b = 1
int32_t* eax_56 = sub_46d398(sub_4a2074+0x48, edx_11)
(*(*eax_56 + 0xfc))()
return sub_472f50(eax_56)
