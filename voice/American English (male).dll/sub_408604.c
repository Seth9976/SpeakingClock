// 函数: sub_408604
// 地址: 0x408604
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
PSTR ebx
PSTR var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t var_2c = 0
int32_t var_28 = 0
int32_t* var_38 = &var_4
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0 && *(arg2 - 0x108) s< 2)
    *(arg2 - 0x108) += 1
    ebx.b = 0x20
    char var_17_1 = 0
    char var_21_1 = 0
    char var_22_1 = 0
    
    while (true)
        char* eax_2
        eax_2.b = *ebp_1[-1]
        
        if (eax_2.b == 0)
            break
        
        *(ebp_1 - 5) = eax_2.b
        eax_2.b = *(ebp_1 - 5)
        
        if (not(test_bit(data_413114, eax_2 & 0xff)))
            PSTR eax_11
            void* ecx_3
            eax_11, ecx_3 = sub_40a9c0(ebp_1[-1])
            ebp_1[-1] = eax_11
            eax_11.b = *(ebp_1 - 5)
            
            if (eax_11.b - 0x61 u< 0x1a)
                eax_11.b -= 0x20
            
            if (eax_11.b - 0x41 u< 0x1a)
                if (eax_11.b == 0x4d && ebx.b == 0x48)
                    eax_11.b = 0x4e
                
                ebx = eax_11
            
            if ((eax_11 & 0xff) - 0x22 u<= 0x38)
                void* eax_13
                eax_13.b = *((eax_11 & 0xff) + 0x4086c5)
                
                switch (eax_13)
                    case 1
                        sub_4082f0(ebp_1)
                        sub_40831c(ebp_1)
                        
                        if (ebp_1[-3] s> 2)
                            int32_t var_44_5 = ebp_1[2]
                            sub_4082a4(zx.d(*(ebp_1 - 0xe)), 4, ebp_1)
                            continue
                        else
                            int32_t var_44_4 = ebp_1[2]
                            sub_4082a4(modu.dp.d(0:(zx.d(*(ebp_1 - 0xe))), 0x64), 2, ebp_1)
                            continue
                    case 2
                        sub_4082f0(ebp_1)
                        sub_40831c(ebp_1)
                        int32_t var_44_8 = ebp_1[2]
                        int32_t* var_48_1 = ebp_1
                        int32_t edx_7
                        edx_7, ebx, ebp_1 = sub_408394(ebp_1[-3], &ebp_1[-9], ebp_1)
                        sub_408284(ebp_1[-9], edx_7)
                        continue
                    case 3
                        sub_4082f0(ebp_1)
                        sub_40831c(ebp_1)
                        int32_t var_44_11 = ebp_1[2]
                        int32_t* var_48_2 = ebp_1
                        int32_t edx_9
                        edx_9, ebx, ebp_1 = sub_4084fc(ebp_1[-3], &ebp_1[-0xa], ebp_1)
                        sub_408284(ebp_1[-0xa], edx_9)
                        continue
                    case 4
                        sub_4082f0(ebp_1)
                        int32_t edx_10 = sub_40831c(ebp_1)
                        int32_t eax_26 = ebp_1[-3] - 1
                        
                        if (eax_26 u< 2)
                            int32_t var_44_14 = ebp_1[2]
                            sub_4082a4(zx.d(ebp_1[-4].w), ebp_1[-3], ebp_1)
                            continue
                        else if (eax_26 == 2)
                            int32_t var_44_15 = ebp_1[2]
                            sub_408284((&data_4146a4)[zx.d(ebp_1[-4].w)], edx_10)
                            continue
                        else
                            int32_t var_44_16 = ebp_1[2]
                            sub_408284(*((zx.d(ebp_1[-4].w) << 2) + &data_4146d4), edx_10)
                            continue
                    case 5
                        void* edx_12 = sub_4082f0(ebp_1)
                        int32_t eax_37 = ebp_1[-3] - 1
                        
                        if (eax_37 u< 2)
                            sub_40831c(ebp_1)
                            int32_t var_44_19 = ebp_1[2]
                            sub_4082a4(zx.d(*(ebp_1 - 0x12)), ebp_1[-3], ebp_1)
                            continue
                        else if (eax_37 == 2)
                            int32_t var_44_20 = ebp_1[2]
                            void* eax_44 = ebp_1[2]
                            int16_t eax_45
                            int32_t edx_14
                            eax_45, edx_14 = sub_4081d0(*(eax_44 + 8), *(eax_44 + 0xc))
                            sub_408284(*((zx.d(eax_45) << 2) + &data_414704), edx_14)
                            continue
                        else if (eax_37 == 3)
                            int32_t var_44_21 = ebp_1[2]
                            void* eax_49 = ebp_1[2]
                            int16_t eax_50
                            int32_t edx_15
                            eax_50, edx_15 = sub_4081d0(*(eax_49 + 8), *(eax_49 + 0xc))
                            sub_408284(*((zx.d(eax_50) << 2) + &data_414720), edx_15)
                            continue
                        else if (eax_37 == 4)
                            int32_t var_44_22 = ebp_1[2]
                            sub_408604(data_41468c, edx_12)
                            continue
                        else
                            int32_t var_44_23 = ebp_1[2]
                            sub_408604(data_414690, edx_12)
                            continue
                    case 6
                        sub_4082f0(ebp_1)
                        sub_408354(ebp_1)
                        int32_t* ecx_29 = ebp_1
                        *(ebp_1 - 0x1f) = 0
                        char* esi_1 = ebp_1[-1]
                        void* eax_57
                        
                        while (true)
                            eax_57.b = *esi_1
                            
                            if (eax_57.b == 0)
                                break
                            
                            if (not(test_bit(data_413114, eax_57 & 0xff)))
                                eax_57.b = *esi_1
                                
                                if (eax_57 s> 0x48)
                                    if (eax_57 == 0x61)
                                    label_408976:
                                        
                                        if (*(ebp_1 - 0x1f) == 0)
                                            eax_57, ecx_29 = sub_4070c8(esi_1, sub_408d92+2, 5)
                                            
                                            if (eax_57 == 0)
                                                *(ebp_1 - 0x1e) = 1
                                            else
                                                eax_57, ecx_29 =
                                                    sub_4070c8(esi_1, sub_408d92+0xa, 3)
                                                
                                                if (eax_57 == 0)
                                                    *(ebp_1 - 0x1e) = 1
                                                else
                                                    eax_57, ecx_29 =
                                                        sub_4070c8(esi_1, sub_408d92+0xe, 4)
                                                    
                                                    if (eax_57 == 0)
                                                        *(ebp_1 - 0x1e) = 1
                                            
                                            break
                                    else if (eax_57 == 0x68)
                                        break
                                else
                                    if (eax_57 == 0x48)
                                        break
                                    
                                    void* temp12_1
                                    
                                    if (eax_57 != 0x22)
                                        temp12_1 = eax_57 - 0x22
                                    
                                    if (eax_57 == 0x22 || temp12_1 == 5)
                                        eax_57.b = *(ebp_1 - 0x1f)
                                        eax_57.b ^= 1
                                        *(ebp_1 - 0x1f) = eax_57.b
                                    else if (eax_57 == 0x41)
                                        goto label_408976
                                
                                esi_1 = &esi_1[1]
                            else
                                eax_57, ecx_29 = sub_40a9c0(esi_1)
                                esi_1 = eax_57
                        
                        eax_57.w = *(ebp_1 - 0x16)
                        
                        if (*(ebp_1 - 0x1e) != 0)
                            if (eax_57.w == 0)
                                eax_57.w = 0xc
                            else if (eax_57.w u> 0xc)
                                eax_57.w -= 0xc
                        
                        if (ebp_1[-3] s> 2)
                            ebp_1[-3] = 2
                        
                        int32_t var_44_26 = ebp_1[2]
                        sub_4082a4(zx.d(eax_57.w), ebp_1[-3], ecx_29)
                        continue
                    case 7
                        sub_4082f0(ebp_1)
                        sub_408354(ebp_1)
                        
                        if (ebp_1[-3] s> 2)
                            ebp_1[-3] = 2
                        
                        int32_t var_44_29 = ebp_1[2]
                        sub_4082a4(zx.d(ebp_1[-6].w), ebp_1[-3], ebp_1)
                        continue
                    case 8
                        sub_4082f0(ebp_1)
                        sub_408354(ebp_1)
                        
                        if (ebp_1[-3] s> 2)
                            ebp_1[-3] = 2
                        
                        int32_t var_44_32 = ebp_1[2]
                        sub_4082a4(zx.d(*(ebp_1 - 0x1a)), ebp_1[-3], ebp_1)
                        continue
                    case 9
                        void* edx_20 = sub_4082f0(ebp_1)
                        
                        if (ebp_1[-3] != 1)
                            int32_t var_44_35 = ebp_1[2]
                            sub_408604(data_4146a4, edx_20)
                            continue
                        else
                            int32_t var_44_34 = ebp_1[2]
                            sub_408604(data_4146a0, edx_20)
                            continue
                    case 0xa
                        sub_4082f0(ebp_1)
                        sub_408354(ebp_1)
                        
                        if (ebp_1[-3] s> 3)
                            ebp_1[-3] = 3
                        
                        int32_t var_44_38 = ebp_1[2]
                        sub_4082a4(zx.d(ebp_1[-7].w), ebp_1[-3], ebp_1)
                        continue
                    case 0xb
                        sub_408354(ebp_1)
                        void* esi_3 = ebp_1[-1] - 1
                        int32_t eax_75
                        void* ecx_43
                        eax_75, ecx_43 = sub_4070c8(esi_3, sub_408d92+2, 5)
                        
                        if (eax_75 != 0)
                            int32_t eax_79
                            void* ecx_45
                            eax_79, ecx_45 = sub_4070c8(esi_3, sub_408d92+0xa, 3)
                            
                            if (eax_79 != 0)
                                int32_t eax_83
                                int32_t edx_22
                                eax_83, edx_22 = sub_4070c8(esi_3, sub_408d92+0xe, 4)
                                
                                if (eax_83 != 0)
                                    if (sub_4070c8(esi_3, sub_408d92+0x16, 4) != 0)
                                        int32_t eax_96
                                        void* ecx_51
                                        eax_96, ecx_51 = sub_4070c8(esi_3, sub_408d92+0x1e, 3)
                                        
                                        if (eax_96 != 0)
                                            int32_t var_44_48 = ebp_1[2]
                                            sub_408240(ebp_1 - 5, 1, ecx_51)
                                            continue
                                        else
                                            sub_40831c(ebp_1)
                                            int32_t var_44_47 = ebp_1[2]
                                            void* eax_98 = ebp_1[2]
                                            int16_t eax_99
                                            int32_t edx_24
                                            eax_99, edx_24 =
                                                sub_4081d0(*(eax_98 + 8), *(eax_98 + 0xc))
                                            sub_408284(*((zx.d(eax_99) << 2) + &data_414704), 
                                                edx_24)
                                            ebp_1[-1] += 2
                                            continue
                                    else
                                        sub_40831c(ebp_1)
                                        int32_t var_44_45 = ebp_1[2]
                                        void* eax_91 = ebp_1[2]
                                        int16_t eax_92
                                        int32_t edx_23
                                        eax_92, edx_23 = sub_4081d0(*(eax_91 + 8), *(eax_91 + 0xc))
                                        sub_408284(*((zx.d(eax_92) << 2) + &data_414720), edx_23)
                                        ebp_1[-1] += 3
                                        continue
                                else
                                    if (*(ebp_1 - 0x16) u>= 0xc)
                                        int32_t var_44_43 = ebp_1[2]
                                        sub_408284(data_41469c, edx_22)
                                    else
                                        int32_t var_44_42 = ebp_1[2]
                                        sub_408284(data_414698, edx_22)
                                    
                                    ebp_1[-1] += 3
                                    *(ebp_1 - 0x1e) = 1
                                    continue
                            else
                                if (*(ebp_1 - 0x16) u>= 0xc)
                                    esi_3 += 2
                                
                                int32_t var_44_41 = ebp_1[2]
                                sub_408240(esi_3, 1, ecx_45)
                                ebp_1[-1] += 2
                                *(ebp_1 - 0x1e) = 1
                                continue
                        else
                            if (*(ebp_1 - 0x16) u>= 0xc)
                                esi_3 += 3
                            
                            int32_t var_44_40 = ebp_1[2]
                            sub_408240(esi_3, 2, ecx_43)
                            ebp_1[-1] += 4
                            *(ebp_1 - 0x1e) = 1
                            continue
                    case 0xc
                        void* edx_25 = sub_4082f0(ebp_1)
                        int32_t var_44_50 = ebp_1[2]
                        sub_408604(data_41468c, edx_25)
                        sub_408354(ebp_1)
                        
                        if (*(ebp_1 - 0x16) == 0 && ebp_1[-6].w == 0 && *(ebp_1 - 0x1a) == 0)
                            continue
                        
                        int32_t var_44_52 = ebp_1[2]
                        void* edx_26 = sub_408240(sub_408d92+0x22, 1, ebp_1)
                        int32_t var_44_53 = ebp_1[2]
                        sub_408604(data_4146a4, edx_26)
                        continue
                    case 0xd
                        if (data_414689 == 0)
                            continue
                        else
                            int32_t var_44_54 = ebp_1[2]
                            sub_408240(&data_414689, 1, ecx_3)
                            continue
                    case 0xe
                        if (data_414694 == 0)
                            continue
                        else
                            int32_t var_44_55 = ebp_1[2]
                            sub_408240(&data_414694, 1, ecx_3)
                            continue
                    case 0xf
                        int32_t esi_4 = ebp_1[-1]
                        
                        while (true)
                            char* eax_114
                            eax_114.b = *ebp_1[-1]
                            
                            if (eax_114.b == 0)
                                break
                            
                            if (eax_114.b == *(ebp_1 - 5))
                                break
                            
                            if (not(test_bit(data_413114, eax_114 & 0xff)))
                                ebp_1[-1] += 1
                            else
                                PSTR eax_113
                                eax_113, ecx_3 = sub_40a9c0(ebp_1[-1])
                                ebp_1[-1] = eax_113
                        
                        int32_t var_44_56 = ebp_1[2]
                        sub_408240(esi_4, ebp_1[-1] - esi_4, ecx_3)
                        
                        if (*ebp_1[-1] == 0)
                            continue
                        else
                            ebp_1[-1] += 1
                            continue
            
            int32_t var_44_57 = ebp_1[2]
            sub_408240(ebp_1 - 5, 1, ecx_3)
        else
            int32_t var_44_1 = ebp_1[2]
            void* eax_6
            void* ecx_1
            eax_6, ecx_1 = sub_40a9a0(ebp_1[-1])
            sub_408240(ebp_1[-1], eax_6, ecx_1)
            ebp_1[-1] = sub_40a9c0(ebp_1[-1])
            ebx.b = 0x20
    
    void* eax_120 = ebp_1[2]
    *(eax_120 - 0x108) -= 1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_38_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_408d8c
return sub_403a10(&ebp_1[-0xa], 2)
