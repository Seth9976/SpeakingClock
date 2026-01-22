// 函数: sub_40b48c
// 地址: 0x40b48c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_34 = ebx
int32_t esi
int32_t var_38 = esi
int32_t edi
int32_t var_3c = edi
int32_t var_30 = 0
int32_t var_2c = 0
char* var_8 = arg1
int32_t* var_40 = &var_4
int32_t (* var_44)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (var_8 != 0 && *(arg2 - 0x108) s< 2)
    *(arg2 - 0x108) += 1
    char var_22_1 = 0x20
    char var_17_1 = 0
    char var_21_1 = 0
    char var_23_1 = 0
    
    while (*var_8 != 0)
        *(ebp_1 - 5) = *var_8
        
        if (not(test_bit(data_4aa800, zx.d(*(ebp_1 - 5)))))
            PSTR eax_13
            void* ecx_3
            eax_13, ecx_3 = sub_40daf8(var_8)
            var_8 = eax_13
            char ebx_1 = *(ebp_1 - 5)
            
            if (ebx_1 - 0x61 u< 0x1a)
                ebx_1 -= 0x20
            
            if (ebx_1 - 0x41 u< 0x1a)
                if (ebx_1 == 0x4d && *(ebp_1 - 0x1e) == 0x48)
                    ebx_1 = 0x4e
                
                *(ebp_1 - 0x1e) = ebx_1
            
            if (zx.d(ebx_1) - 0x22 u<= 0x38)
                switch (ebx_1)
                    case 0x22, 0x27
                        int64_t* esi_4 = var_8
                        
                        while (*var_8 != 0)
                            if (*var_8 == *(ebp_1 - 5))
                                break
                            
                            if (not(test_bit(data_4aa800, zx.d(*var_8))))
                                var_8 = &var_8[1]
                            else
                                PSTR eax_133
                                eax_133, ecx_3 = sub_40daf8(var_8)
                                var_8 = eax_133
                        
                        int32_t var_4c_56 = ebp_1[2]
                        sub_40b0a8(esi_4, var_8 - esi_4, ecx_3)
                        
                        if (*var_8 == 0)
                            continue
                        else
                            var_8 = &var_8[1]
                            continue
                    case 0x2f
                        if (data_4af815 == 0)
                            continue
                        else
                            int32_t var_4c_54 = ebp_1[2]
                            sub_40b0a8(&data_4af815, 1, ecx_3)
                            continue
                    case 0x3a
                        if (data_4af820 == 0)
                            continue
                        else
                            int32_t var_4c_55 = ebp_1[2]
                            sub_40b0a8(&data_4af820, 1, ecx_3)
                            continue
                    case 0x41
                        sub_40b1b8(ebp_1)
                        void* esi_3 = var_8 - 1
                        int32_t eax_93
                        void* ecx_43
                        eax_93, ecx_43 = sub_409de0(esi_3, "AM/PM", 5)
                        
                        if (eax_93 != 0)
                            int32_t eax_97
                            void* ecx_45
                            eax_97, ecx_45 = sub_409de0(esi_3, 0x40bc28, 3)
                            
                            if (eax_97 != 0)
                                int32_t eax_101
                                void* edx_17
                                eax_101, edx_17 = sub_409de0(esi_3, "AMPM", 4)
                                
                                if (eax_101 != 0)
                                    if (sub_409de0(esi_3, "AAAA", 4) != 0)
                                        int32_t eax_114
                                        void* ecx_51
                                        eax_114, ecx_51 = sub_409de0(esi_3, 0x40bc3c, 3)
                                        
                                        if (eax_114 != 0)
                                            int32_t var_4c_48 = ebp_1[2]
                                            sub_40b0a8(ebp_1 - 5, 1, ecx_51)
                                            continue
                                        else
                                            sub_40b180(ebp_1)
                                            int32_t var_4c_47 = ebp_1[2]
                                            void* eax_116 = ebp_1[2]
                                            int16_t eax_117
                                            void* edx_19
                                            eax_117, edx_19 =
                                                sub_40b01c(*(eax_116 + 8), *(eax_116 + 0xc))
                                            sub_40b0ec(*((zx.d(eax_117) << 2) + &data_4af890), 
                                                edx_19)
                                            var_8 = &var_8[2]
                                            continue
                                    else
                                        sub_40b180(ebp_1)
                                        int32_t var_4c_45 = ebp_1[2]
                                        void* eax_109 = ebp_1[2]
                                        int16_t eax_110
                                        void* edx_18
                                        eax_110, edx_18 =
                                            sub_40b01c(*(eax_109 + 8), *(eax_109 + 0xc))
                                        sub_40b0ec(*((zx.d(eax_110) << 2) + &data_4af8ac), edx_18)
                                        var_8 = &var_8[3]
                                        continue
                                else
                                    if (*(ebp_1 - 0x16) u>= 0xc)
                                        int32_t var_4c_43 = ebp_1[2]
                                        sub_40b0ec(data_4af828, edx_17)
                                    else
                                        int32_t var_4c_42 = ebp_1[2]
                                        sub_40b0ec(data_4af824, edx_17)
                                    
                                    var_8 = &var_8[3]
                                    *(ebp_1 - 0x1f) = 1
                                    continue
                            else
                                if (*(ebp_1 - 0x16) u>= 0xc)
                                    esi_3 += 2
                                
                                int32_t var_4c_41 = ebp_1[2]
                                sub_40b0a8(esi_3, 1, ecx_45)
                                var_8 = &var_8[2]
                                *(ebp_1 - 0x1f) = 1
                                continue
                        else
                            if (*(ebp_1 - 0x16) u>= 0xc)
                                esi_3 += 3
                            
                            int32_t var_4c_40 = ebp_1[2]
                            sub_40b0a8(esi_3, 2, ecx_43)
                            var_8 = &var_8[4]
                            *(ebp_1 - 0x1f) = 1
                            continue
                    case 0x43
                        sub_40b154(ebp_1)
                        data_4af818
                        sub_40b48c(ebp_1[2])
                        sub_40b1b8(ebp_1)
                        
                        if (*(ebp_1 - 0x16) == 0 && ebp_1[-6].w == 0 && *(ebp_1 - 0x1a) == 0)
                            continue
                        
                        int32_t var_4c_52 = ebp_1[2]
                        sub_40b0a8(0x40bc40, 1, ebp_1)
                        data_4af830
                        sub_40b48c(ebp_1[2])
                        continue
                    case 0x44
                        sub_40b154(ebp_1)
                        int32_t eax_42 = ebp_1[-3] - 1
                        
                        if (eax_42 u< 2)
                            sub_40b180(ebp_1)
                            int32_t var_4c_19 = ebp_1[2]
                            sub_40b108(zx.d(*(ebp_1 - 0x12)), ebp_1[-3], ebp_1)
                            continue
                        else if (eax_42 == 2)
                            int32_t var_4c_20 = ebp_1[2]
                            void* eax_49 = ebp_1[2]
                            int16_t eax_50
                            void* edx_11
                            eax_50, edx_11 = sub_40b01c(*(eax_49 + 8), *(eax_49 + 0xc))
                            sub_40b0ec(*((zx.d(eax_50) << 2) + &data_4af890), edx_11)
                            continue
                        else if (eax_42 == 3)
                            int32_t var_4c_21 = ebp_1[2]
                            void* eax_54 = ebp_1[2]
                            int16_t eax_55
                            void* edx_12
                            eax_55, edx_12 = sub_40b01c(*(eax_54 + 8), *(eax_54 + 0xc))
                            sub_40b0ec(*((zx.d(eax_55) << 2) + &data_4af8ac), edx_12)
                            continue
                        else if (eax_42 == 4)
                            data_4af818
                            sub_40b48c(ebp_1[2])
                            continue
                        else
                            data_4af81c
                            sub_40b48c(ebp_1[2])
                            continue
                    case 0x45
                        sub_40b154(ebp_1)
                        sub_40b180(ebp_1)
                        int32_t var_4c_11 = ebp_1[2]
                        int32_t* var_50_2 = ebp_1
                        void* edx_7
                        edx_7, ebp_1 = sub_40b374(ebp_1[-3], &ebp_1[-0xb], ebp_1)
                        sub_40b0ec(ebp_1[-0xb], edx_7)
                        continue
                    case 0x47
                        sub_40b154(ebp_1)
                        sub_40b180(ebp_1)
                        int32_t var_4c_8 = ebp_1[2]
                        int32_t* var_50_1 = ebp_1
                        void* edx_5
                        edx_5, ebp_1 = sub_40b1f8(ebp_1[-3], &ebp_1[-0xa], ebp_1)
                        sub_40b0ec(ebp_1[-0xa], edx_5)
                        continue
                    case 0x48
                        sub_40b154(ebp_1)
                        sub_40b1b8(ebp_1)
                        int32_t* ecx_29 = ebp_1
                        ebp_1[-8].b = 0
                        char* esi_1 = var_8
                        
                        while (*esi_1 != 0)
                            if (not(test_bit(data_4aa800, zx.d(*esi_1))))
                                uint32_t eax_66 = zx.d(*esi_1)
                                
                                if (eax_66 == 0x48)
                                    break
                                
                                if (eax_66 == 0x22 || eax_66 == 0x27)
                                    ebp_1[-8].b ^= 1
                                else if (eax_66 == 0x41)
                                    goto label_40b802
                                
                                if (eax_66 == 0x61)
                                label_40b802:
                                    
                                    if (ebp_1[-8].b == 0)
                                        int32_t eax_73
                                        eax_73, ecx_29 = sub_409de0(esi_1, "AM/PM", 5)
                                        
                                        if (eax_73 == 0)
                                            *(ebp_1 - 0x1f) = 1
                                        else
                                            int32_t eax_75
                                            eax_75, ecx_29 = sub_409de0(esi_1, 0x40bc28, 3)
                                            
                                            if (eax_75 == 0)
                                                *(ebp_1 - 0x1f) = 1
                                            else
                                                int32_t eax_77
                                                eax_77, ecx_29 = sub_409de0(esi_1, "AMPM", 4)
                                                
                                                if (eax_77 == 0)
                                                    *(ebp_1 - 0x1f) = 1
                                        
                                        break
                                else if (eax_66 == 0x68)
                                    break
                                
                                esi_1 = &esi_1[1]
                            else
                                PSTR eax_65
                                eax_65, ecx_29 = sub_40daf8(esi_1)
                                esi_1 = eax_65
                        
                        *(ebp_1 - 0x22) = *(ebp_1 - 0x16)
                        
                        if (*(ebp_1 - 0x1f) != 0)
                            if (*(ebp_1 - 0x22) == 0)
                                *(ebp_1 - 0x22) = 0xc
                            else if (*(ebp_1 - 0x22) u> 0xc)
                                *(ebp_1 - 0x22) -= 0xc
                        
                        if (ebp_1[-3] s> 2)
                            ebp_1[-3] = 2
                        
                        int32_t var_4c_26 = ebp_1[2]
                        sub_40b108(zx.d(*(ebp_1 - 0x22)), ebp_1[-3], ecx_29)
                        continue
                    case 0x4d
                        sub_40b154(ebp_1)
                        void* edx_8 = sub_40b180(ebp_1)
                        int32_t eax_31 = ebp_1[-3] - 1
                        
                        if (eax_31 u< 2)
                            int32_t var_4c_14 = ebp_1[2]
                            sub_40b108(zx.d(ebp_1[-4].w), ebp_1[-3], ebp_1)
                            continue
                        else if (eax_31 == 2)
                            int32_t var_4c_15 = ebp_1[2]
                            sub_40b0ec((&data_4af830)[zx.d(ebp_1[-4].w)], edx_8)
                            continue
                        else
                            int32_t var_4c_16 = ebp_1[2]
                            sub_40b0ec(*((zx.d(ebp_1[-4].w) << 2) + &data_4af860), edx_8)
                            continue
                    case 0x4e
                        sub_40b154(ebp_1)
                        sub_40b1b8(ebp_1)
                        
                        if (ebp_1[-3] s> 2)
                            ebp_1[-3] = 2
                        
                        int32_t var_4c_29 = ebp_1[2]
                        sub_40b108(zx.d(ebp_1[-6].w), ebp_1[-3], ebp_1)
                        continue
                    case 0x53
                        sub_40b154(ebp_1)
                        sub_40b1b8(ebp_1)
                        
                        if (ebp_1[-3] s> 2)
                            ebp_1[-3] = 2
                        
                        int32_t var_4c_32 = ebp_1[2]
                        sub_40b108(zx.d(*(ebp_1 - 0x1a)), ebp_1[-3], ebp_1)
                        continue
                    case 0x54
                        sub_40b154(ebp_1)
                        
                        if (ebp_1[-3] != 1)
                            data_4af830
                            sub_40b48c(ebp_1[2])
                            continue
                        else
                            data_4af82c
                            sub_40b48c(ebp_1[2])
                            continue
                    case 0x59
                        sub_40b154(ebp_1)
                        sub_40b180(ebp_1)
                        
                        if (ebp_1[-3] s> 2)
                            int32_t var_4c_5 = ebp_1[2]
                            sub_40b108(zx.d(*(ebp_1 - 0xe)), 4, ebp_1)
                            continue
                        else
                            int32_t var_4c_4 = ebp_1[2]
                            sub_40b108(modu.dp.d(0:(zx.d(*(ebp_1 - 0xe))), 0x64), 2, ebp_1)
                            continue
                    case 0x5a
                        sub_40b154(ebp_1)
                        sub_40b1b8(ebp_1)
                        
                        if (ebp_1[-3] s> 3)
                            ebp_1[-3] = 3
                        
                        int32_t var_4c_38 = ebp_1[2]
                        sub_40b108(zx.d(ebp_1[-7].w), ebp_1[-3], ebp_1)
                        continue
            
            int32_t var_4c_57 = ebp_1[2]
            sub_40b0a8(ebp_1 - 5, 1, ecx_3)
        else
            int32_t var_4c_1 = ebp_1[2]
            void* eax_8
            void* ecx_1
            eax_8, ecx_1 = sub_40dad8(var_8)
            sub_40b0a8(var_8, eax_8, ecx_1)
            var_8 = sub_40daf8(var_8)
            *(ebp_1 - 0x1e) = 0x20
    
    void* eax_143 = ebp_1[2]
    *(eax_143 - 0x108) -= 1

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_40_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40bc17
return sub_404bac(&ebp_1[-0xb], 2)
