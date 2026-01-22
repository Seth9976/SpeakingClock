// 函数: sub_4a6604
// 地址: 0x4a6604
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
int32_t var_c = esi
void* const result = data_4b1dec

if (*(result + 0x57) != 0)
    int32_t __saved_ebp
    int32_t* var_14_1 = &__saved_ebp
    int32_t (* var_18_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x449) != 0)
        int32_t* eax_90 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x60), 0x13), esi)
        sub_42c1ac(0, 0, *(*(arg1 + 0x3ec) + 0x190), eax_90)
        
        if (data_4b1dfc u<= 9)
            int32_t* eax_106 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x68), 0xa), esi)
            sub_42c1ac(0, 8, *(*(arg1 + 0x3ec) + 0x190), eax_106)
        else
            int32_t* eax_99 = sub_49299c(
                sub_492e9c(*(*data_4ac000 + 0x68), divu.dp.d(0:(zx.d(data_4b1dfc)), 0xa)), esi)
            sub_42c1ac(0, 8, *(*(arg1 + 0x3ec) + 0x190), eax_99)
        
        int32_t* eax_114 = sub_49299c(
            sub_492e9c(*(*data_4ac000 + 0x68), modu.dp.d(0:(zx.d(data_4b1dfc)), 0xa)), esi)
        sub_42c1ac(0, 0x16, *(*(arg1 + 0x3ec) + 0x190), eax_114)
    else
        if (data_4b1dfc u> 0xc)
            int32_t* eax_8 = sub_49299c(
                sub_492e9c(*(*data_4ac000 + 0x68), divs.dp.d(sx.q(zx.d(data_4b1dfc) - 0xc), 0xa)), 
                esi)
            sub_42c1ac(0, 8, *(*(arg1 + 0x3ec) + 0x190), eax_8)
            
            if (divs.dp.d(sx.q(zx.d(data_4b1dfc) - 0xc), 0xa) == 0)
                int32_t* eax_19 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x68), 0xa), esi)
                sub_42c1ac(0, 8, *(*(arg1 + 0x3ec) + 0x190), eax_19)
            
            int32_t* eax_29 = sub_49299c(
                sub_492e9c(*(*data_4ac000 + 0x68), mods.dp.d(sx.q(zx.d(data_4b1dfc) - 0xc), 0xa)), 
                esi)
            sub_42c1ac(0, 0x16, *(*(arg1 + 0x3ec) + 0x190), eax_29)
        else if (data_4b1dfc != 0)
            int32_t* eax_52 = sub_49299c(
                sub_492e9c(*(*data_4ac000 + 0x68), divu.dp.d(0:(zx.d(data_4b1dfc)), 0xa)), esi)
            sub_42c1ac(0, 8, *(*(arg1 + 0x3ec) + 0x190), eax_52)
            
            if (divu.dp.d(0:(zx.d(data_4b1dfc)), 0xa) == 0)
                int32_t* eax_61 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x68), 0xa), esi)
                sub_42c1ac(0, 8, *(*(arg1 + 0x3ec) + 0x190), eax_61)
            
            int32_t* eax_69 = sub_49299c(
                sub_492e9c(*(*data_4ac000 + 0x68), modu.dp.d(0:(zx.d(data_4b1dfc)), 0xa)), esi)
            sub_42c1ac(0, 0x16, *(*(arg1 + 0x3ec) + 0x190), eax_69)
        else
            int32_t* eax_36 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x68), 1), esi)
            sub_42c1ac(0, 8, *(*(arg1 + 0x3ec) + 0x190), eax_36)
            int32_t* eax_43 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x68), 2), esi)
            sub_42c1ac(0, 0x16, *(*(arg1 + 0x3ec) + 0x190), eax_43)
        
        if (data_4b1dfc u<= 0xb)
            int32_t* eax_83 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x60), 0x11), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3ec) + 0x190), eax_83)
        else
            int32_t* eax_76 = sub_49299c(sub_492e9c(*(*data_4ac000 + 0x60), 0x12), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3ec) + 0x190), eax_76)
    
    int32_t* eax_123 =
        sub_49299c(sub_492e9c(*(*data_4ac000 + 0x68), divu.dp.d(0:(zx.d(data_4b1dfe)), 0xa)), esi)
    sub_42c1ac(0, 0x2a, *(*(arg1 + 0x3ec) + 0x190), eax_123)
    int32_t* eax_131 =
        sub_49299c(sub_492e9c(*(*data_4ac000 + 0x68), modu.dp.d(0:(zx.d(data_4b1dfe)), 0xa)), esi)
    sub_42c1ac(0, 0x38, *(*(arg1 + 0x3ec) + 0x190), eax_131)
    result = nullptr
    fsbase->NtTib.ExceptionList = ExceptionList

return result
