// 函数: sub_4a5dac
// 地址: 0x4a5dac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = data_4ac000
void* const result = data_4b1dec

if (*(result + 0x57) != 0)
    int32_t __saved_ebp
    int32_t* var_14_1 = &__saved_ebp
    int32_t (* var_18_1)() = j_sub_404188
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg1 + 0x449) != 0)
        int32_t* eax_91 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xd), esi)
        sub_42c1ac(0, 0, *(*(arg1 + 0x3cc) + 0x190), eax_91)
        int32_t* eax_97 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xd), esi)
        sub_42c1ac(0xf, 0, *(*(arg1 + 0x3cc) + 0x190), eax_97)
        
        if (data_4b1dfc u<= 9)
            sub_4576f8(*(arg1 + 0x3a8), 0)
        else
            int32_t* eax_105 =
                sub_49299c(sub_492e9c(*(*esi + 0x58), divu.dp.d(0:(zx.d(data_4b1dfc)), 0xa)), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3a8) + 0x190), eax_105)
            sub_4576f8(*(arg1 + 0x3a8), 1)
        
        int32_t* eax_114 =
            sub_49299c(sub_492e9c(*(*esi + 0x58), modu.dp.d(0:(zx.d(data_4b1dfc)), 0xa)), esi)
        sub_42c1ac(0, 0, *(*(arg1 + 0x3ac) + 0x190), eax_114)
    else
        if (data_4b1dfc u> 0xc)
            int32_t* eax_7 = sub_49299c(
                sub_492e9c(*(*esi + 0x58), divs.dp.d(sx.q(zx.d(data_4b1dfc) - 0xc), 0xa)), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3a8) + 0x190), eax_7)
            
            if (divs.dp.d(sx.q(zx.d(data_4b1dfc) - 0xc), 0xa) == 0)
                int32_t* eax_17 = sub_49299c(sub_492e9c(*(*esi + 0x58), 0xa), esi)
                sub_42c1ac(0, 0, *(*(arg1 + 0x3a8) + 0x190), eax_17)
            
            int32_t* eax_26 = sub_49299c(
                sub_492e9c(*(*esi + 0x58), mods.dp.d(sx.q(zx.d(data_4b1dfc) - 0xc), 0xa)), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3ac) + 0x190), eax_26)
        else if (data_4b1dfc != 0)
            int32_t* eax_46 =
                sub_49299c(sub_492e9c(*(*esi + 0x58), divu.dp.d(0:(zx.d(data_4b1dfc)), 0xa)), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3a8) + 0x190), eax_46)
            
            if (divu.dp.d(0:(zx.d(data_4b1dfc)), 0xa) == 0)
                int32_t* eax_54 = sub_49299c(sub_492e9c(*(*esi + 0x58), 0xa), esi)
                sub_42c1ac(0, 0, *(*(arg1 + 0x3a8) + 0x190), eax_54)
            
            int32_t* eax_61 =
                sub_49299c(sub_492e9c(*(*esi + 0x58), modu.dp.d(0:(zx.d(data_4b1dfc)), 0xa)), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3ac) + 0x190), eax_61)
        else
            int32_t* eax_32 = sub_49299c(sub_492e9c(*(*esi + 0x58), 1), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3a8) + 0x190), eax_32)
            int32_t* eax_38 = sub_49299c(sub_492e9c(*(*esi + 0x58), 2), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3ac) + 0x190), eax_38)
        
        if (data_4b1dfc u<= 0xb)
            int32_t* eax_79 = sub_49299c(sub_492e9c(*(*esi + 0x60), 7), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3cc) + 0x190), eax_79)
            int32_t* eax_85 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xe), esi)
            sub_42c1ac(0xf, 0, *(*(arg1 + 0x3cc) + 0x190), eax_85)
        else
            int32_t* eax_67 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xe), esi)
            sub_42c1ac(0, 0, *(*(arg1 + 0x3cc) + 0x190), eax_67)
            int32_t* eax_73 = sub_49299c(sub_492e9c(*(*esi + 0x60), 8), esi)
            sub_42c1ac(0xf, 0, *(*(arg1 + 0x3cc) + 0x190), eax_73)
    
    if (*(arg1 + 0x441) == 0)
        int32_t* eax_126 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xe), esi)
        sub_42c1ac(6, 0, *(*(arg1 + 0x3d0) + 0x190), eax_126)
        int32_t* eax_132 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xe), esi)
        sub_42c1ac(6, 6, *(*(arg1 + 0x3d0) + 0x190), eax_132)
    else
        int32_t* eax_120 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xa), esi)
        sub_42c1ac(6, 0, *(*(arg1 + 0x3d0) + 0x190), eax_120)
    
    if (*(arg1 + 0x440) == 0)
        int32_t* eax_144 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xe), esi)
        sub_42c1ac(2, 0x20, *(*(arg1 + 0x3d0) + 0x190), eax_144)
        int32_t* eax_150 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xe), esi)
        sub_42c1ac(8, 0x20, *(*(arg1 + 0x3d0) + 0x190), eax_150)
    else
        int32_t* eax_138 = sub_49299c(sub_492e9c(*(*esi + 0x60), 9), esi)
        sub_42c1ac(2, 0x20, *(*(arg1 + 0x3d0) + 0x190), eax_138)
    
    int32_t* eax_156 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xb), esi)
    sub_42c1ac(0, 0, *(*(arg1 + 0x3b8) + 0x190), eax_156)
    int32_t* eax_162 = sub_49299c(sub_492e9c(*(*esi + 0x60), 0xc), esi)
    sub_42c1ac(2, 0x73, *(*(arg1 + 0x3d0) + 0x190), eax_162)
    result = nullptr
    fsbase->NtTib.ExceptionList = ExceptionList

return result
