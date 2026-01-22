// 函数: sub_411168
// 地址: 0x411168
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t eax_1 = *arg1
uint32_t edx = zx.d(eax_1)
uint32_t var_c

if (edx u> 0x14)
label_41136a:
    
    if (eax_1 == 0x100)
        int32_t* eax_44
        eax_44, ebp = sub_410fd0(arg1)
        ebp[-2] = eax_44
    else if (eax_1 == 0x101)
        int32_t eax_46
        eax_46, ebp = sub_4110c0(arg1)
        ebp[-2] = eax_46
    else if ((eax_1:1.b & 0x40) == 0)
        if (sub_411124(arg1, &var_c) == 0)
            var_c = sub_411084(arg1)
    else
        switch (zx.d(eax_1) & 0xffffbfff)
            case 2
                var_c = sx.d(**(arg1 + 8))
            case 3
                var_c = **(arg1 + 8)
            case 4
                uint32_t eax_57
                int32_t edx_9
                eax_57, edx_9 = sub_403370(fconvert.t(**(arg1 + 8)))
                
                if (eax_57 s>> 0x1f != edx_9)
                    sub_403b30()
                    noreturn
                
                var_c = eax_57
            case 5
                uint32_t eax_62
                int32_t edx_10
                eax_62, edx_10 = sub_403370(fconvert.t(**(arg1 + 8)))
                
                if (eax_62 s>> 0x1f != edx_10)
                    sub_403b30()
                    noreturn
                
                var_c = eax_62
            case 6
                uint32_t eax_67
                int32_t edx_11
                eax_67, edx_11 = sub_403370(float.t(**(arg1 + 8)) / fconvert.t(10000f))
                
                if (eax_67 s>> 0x1f != edx_11)
                    sub_403b30()
                    noreturn
                
                var_c = eax_67
            case 7
                uint32_t eax_72
                int32_t edx_12
                eax_72, edx_12 = sub_403370(fconvert.t(**(arg1 + 8)))
                
                if (eax_72 s>> 0x1f != edx_12)
                    sub_403b30()
                    noreturn
                
                var_c = eax_72
            case 8
                int32_t* eax_76
                eax_76, ebp = sub_410fd0(arg1)
                ebp[-2] = eax_76
            case 0xb
                var_c = sx.d(**(arg1 + 8))
            case 0xc
                *(arg1 + 8)
                var_c = sub_411168()
            case 0x10
                var_c = sx.d(**(arg1 + 8))
            case 0x11
                var_c = zx.d(**(arg1 + 8))
            case 0x12
                var_c = zx.d(**(arg1 + 8))
            case 0x13
                uint32_t eax_91 = **(arg1 + 8)
                
                if (eax_91 s< 0)
                    sub_403b30()
                    noreturn
                
                var_c = eax_91
            case 0x14
                uint32_t* eax_93 = *(arg1 + 8)
                uint32_t eax_94 = *eax_93
                
                if (eax_94 s>> 0x1f != eax_93[1])
                    sub_403b30()
                    noreturn
                
                var_c = eax_94
            default
                var_c = sub_411084(arg1)
else
    switch (edx)
        case 0
            var_c = 0
        case 1
            if (data_4aaa10 != 0)
                edx.w = 3
                sub_40ff78(1, edx.w)
            
            var_c = 0
        case 2
            var_c = sx.d(arg1[4])
        case 3
            var_c = *(arg1 + 8)
        case 4
            uint32_t eax_7
            int32_t edx_1
            eax_7, edx_1 = sub_403370(fconvert.t(*(arg1 + 8)))
            
            if (eax_7 s>> 0x1f != edx_1)
                sub_403b30()
                noreturn
            
            var_c = eax_7
        case 5
            uint32_t eax_11
            int32_t edx_2
            eax_11, edx_2 = sub_403370(fconvert.t(*(arg1 + 8)))
            
            if (eax_11 s>> 0x1f != edx_2)
                sub_403b30()
                noreturn
            
            var_c = eax_11
        case 6
            uint32_t eax_15
            int32_t edx_3
            eax_15, edx_3 = sub_403370(float.t(*(arg1 + 8)) / fconvert.t(10000f))
            
            if (eax_15 s>> 0x1f != edx_3)
                sub_403b30()
                noreturn
            
            var_c = eax_15
        case 7
            uint32_t eax_19
            int32_t edx_4
            eax_19, edx_4 = sub_403370(fconvert.t(*(arg1 + 8)))
            
            if (eax_19 s>> 0x1f != edx_4)
                sub_403b30()
                noreturn
            
            var_c = eax_19
        case 8
            int32_t* eax_23
            eax_23, ebp = sub_410fd0(arg1)
            ebp[-2] = eax_23
        case 9, 0xd
            var_c = sub_411084(arg1)
        case 0xa, 0xe, 0xf
            goto label_41136a
        case 0xb
            var_c = sx.d(arg1[4])
        case 0xc
            *(arg1 + 8)
            var_c = sub_411168()
        case 0x10
            var_c = sx.d(arg1[4].b)
        case 0x11
            var_c = zx.d(arg1[4].b)
        case 0x12
            var_c = zx.d(arg1[4])
        case 0x13
            uint32_t eax_33 = *(arg1 + 8)
            
            if (eax_33 s< 0)
                sub_403b30()
                noreturn
            
            var_c = eax_33
        case 0x14
            uint32_t eax_35 = *(arg1 + 8)
            
            if (eax_35 s>> 0x1f != *(arg1 + 0xc))
                sub_403b30()
                noreturn
            
            var_c = eax_35
fsbase->NtTib.ExceptionList = ExceptionList
return ebp[-2]
