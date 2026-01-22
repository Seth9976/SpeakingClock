// 函数: sub_411c38
// 地址: 0x411c38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t* var_24 = &var_4
int32_t (* var_28)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t eax_1 = *arg1
uint32_t edx = zx.d(eax_1)
uint32_t var_14

if (edx u> 0x14)
label_411e34:
    
    if (eax_1 == 0x100)
        wchar16** eax_37
        int32_t edx_15
        eax_37, edx_15, ebp_1 = sub_411a80(arg1)
        ebp_1[-4] = eax_37
        ebp_1[-3] = edx_15
    else if (eax_1 == 0x101)
        int32_t eax_39
        int32_t edx_16
        eax_39, edx_16, ebp_1 = sub_411b80(arg1)
        ebp_1[-4] = eax_39
        ebp_1[-3] = edx_16
    else if ((eax_1:1.b & 0x40) == 0)
        if (sub_411bec(arg1, &var_14) == 0)
            uint32_t eax_91
            int32_t edx_33
            eax_91, edx_33 = sub_4119d4(arg1)
            var_14 = eax_91
            int32_t var_10_31 = edx_33
    else
        switch (zx.d(eax_1) & 0xffffbfff)
            case 2
                uint32_t eax_45
                int32_t edx_19
                edx_19:eax_45 = sx.q(**(arg1 + 8))
                var_14 = eax_45
                int32_t var_10_17 = edx_19
            case 3
                uint32_t eax_49
                int32_t edx_20
                edx_20:eax_49 = sx.q(**(arg1 + 8))
                var_14 = eax_49
                int32_t var_10_18 = edx_20
            case 4
                uint32_t eax_52
                int32_t edx_21
                eax_52, edx_21 = sub_403370(fconvert.t(**(arg1 + 8)))
                var_14 = eax_52
                int32_t var_10_19 = edx_21
            case 5
                uint32_t eax_55
                int32_t edx_22
                eax_55, edx_22 = sub_403370(fconvert.t(**(arg1 + 8)))
                var_14 = eax_55
                int32_t var_10_20 = edx_22
            case 6
                uint32_t eax_58
                int32_t edx_23
                eax_58, edx_23 = sub_403370(float.t(**(arg1 + 8)) / fconvert.t(10000f))
                var_14 = eax_58
                int32_t var_10_21 = edx_23
            case 7
                uint32_t eax_61
                int32_t edx_24
                eax_61, edx_24 = sub_403370(fconvert.t(**(arg1 + 8)))
                var_14 = eax_61
                int32_t var_10_22 = edx_24
            case 8
                wchar16** eax_63
                int32_t edx_25
                eax_63, edx_25, ebp_1 = sub_411a80(arg1)
                ebp_1[-4] = eax_63
                ebp_1[-3] = edx_25
            case 0xb
                uint32_t eax_67
                int32_t edx_26
                edx_26:eax_67 = sx.q(**(arg1 + 8))
                var_14 = eax_67
                int32_t var_10_23 = edx_26
            case 0xc
                *(arg1 + 8)
                uint32_t eax_85
                int32_t edx_30
                eax_85, edx_30 = sub_411c38()
                var_14 = eax_85
                int32_t var_10_29 = edx_30
            case 0x10
                uint32_t eax_71
                int32_t edx_27
                edx_27:eax_71 = sx.q(**(arg1 + 8))
                var_14 = eax_71
                int32_t var_10_24 = edx_27
            case 0x11
                var_14 = zx.d(**(arg1 + 8))
                int32_t var_10_25 = 0
            case 0x12
                var_14 = zx.d(**(arg1 + 8))
                int32_t var_10_26 = 0
            case 0x13
                var_14 = **(arg1 + 8)
                int32_t var_10_27 = 0
            case 0x14
                uint32_t* eax_82 = *(arg1 + 8)
                var_14 = *eax_82
                int32_t var_10_28 = eax_82[1]
            default
                uint32_t eax_87
                int32_t edx_31
                eax_87, edx_31 = sub_4119d4(arg1)
                var_14 = eax_87
                int32_t var_10_30 = edx_31
else
    switch (edx)
        case 0
            var_14 = 0
            int32_t var_10_1 = 0
        case 1
            if (data_4aaa10 != 0)
                edx.w = 0x14
                sub_40ff78(1, edx.w)
            
            var_14 = 0
            int32_t var_10_2 = 0
        case 2
            uint32_t eax_4
            int32_t edx_1
            edx_1:eax_4 = sx.q(arg1[4])
            var_14 = eax_4
            int32_t var_10_3 = edx_1
        case 3
            uint32_t eax_7
            int32_t edx_2
            edx_2:eax_7 = sx.q(*(arg1 + 8))
            var_14 = eax_7
            int32_t var_10_4 = edx_2
        case 4
            uint32_t eax_9
            int32_t edx_3
            eax_9, edx_3 = sub_403370(fconvert.t(*(arg1 + 8)))
            var_14 = eax_9
            int32_t var_10_5 = edx_3
        case 5
            uint32_t eax_11
            int32_t edx_4
            eax_11, edx_4 = sub_403370(fconvert.t(*(arg1 + 8)))
            var_14 = eax_11
            int32_t var_10_6 = edx_4
        case 6
            uint32_t eax_13
            int32_t edx_5
            eax_13, edx_5 = sub_403370(float.t(*(arg1 + 8)) / fconvert.t(10000f))
            var_14 = eax_13
            int32_t var_10_7 = edx_5
        case 7
            uint32_t eax_15
            int32_t edx_6
            eax_15, edx_6 = sub_403370(fconvert.t(*(arg1 + 8)))
            var_14 = eax_15
            int32_t var_10_8 = edx_6
        case 8
            wchar16** eax_17
            int32_t edx_7
            eax_17, edx_7, ebp_1 = sub_411a80(arg1)
            ebp_1[-4] = eax_17
            ebp_1[-3] = edx_7
        case 9, 0xd
            uint32_t eax_35
            int32_t edx_13
            eax_35, edx_13 = sub_4119d4(arg1)
            var_14 = eax_35
            int32_t var_10_16 = edx_13
        case 0xa, 0xe, 0xf
            goto label_411e34
        case 0xb
            uint32_t eax_20
            int32_t edx_8
            edx_8:eax_20 = sx.q(arg1[4])
            var_14 = eax_20
            int32_t var_10_9 = edx_8
        case 0xc
            *(arg1 + 8)
            uint32_t eax_33
            int32_t edx_12
            eax_33, edx_12 = sub_411c38()
            var_14 = eax_33
            int32_t var_10_15 = edx_12
        case 0x10
            uint32_t eax_23
            int32_t edx_9
            edx_9:eax_23 = sx.q(arg1[4].b)
            var_14 = eax_23
            int32_t var_10_10 = edx_9
        case 0x11
            var_14 = zx.d(arg1[4].b)
            int32_t var_10_11 = 0
        case 0x12
            var_14 = zx.d(arg1[4])
            int32_t var_10_12 = 0
        case 0x13
            var_14 = *(arg1 + 8)
            int32_t var_10_13 = 0
        case 0x14
            var_14 = *(arg1 + 8)
            int32_t var_10_14 = *(arg1 + 0xc)
fsbase->NtTib.ExceptionList = ExceptionList
ebp_1[-3]
*ebp_1
return ebp_1[-4]
