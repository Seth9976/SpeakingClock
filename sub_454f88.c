// 函数: sub_454f88
// 地址: 0x454f88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t ebx
int32_t var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
int32_t* esp_1 = &var_38
int32_t var_d = *arg1
int32_t var_9 = arg1[1]
int32_t var_14 = arg2
int32_t* result = nullptr

if (data_4b1c8c != 0)
    int32_t var_3c_1 = 0x11
    esp_1 = &var_38
    int16_t eax
    eax.b = (GetKeyState(0x11) & 0x8000) != 0
    eax.b ^= *(*data_4ac2fc + 0xbc)
    
    if (eax.b != 0)
        int32_t ecx_1
        void* edx_3
        edx_3, ecx_1 = (*(*data_4b1c90 + 8))()
        int32_t ebx_2 = *(data_4b1c8c + 8) - 1
        int32_t __saved_ebp
        
        if (ebx_2 s>= 0)
            int32_t i_1 = ebx_2 + 1
            int32_t edi_3 = 0
            int32_t i
            
            do
                int32_t* eax_4
                eax_4, ecx_1, edx_3 = sub_41a0f4(data_4b1c8c, edi_3)
                
                if (eax_4 != var_14 && *(eax_4 + 0x1da) != 0)
                    char eax_8
                    eax_8, edx_3, ecx_1 = (*(*eax_4 + 0x50))()
                    
                    if (eax_8 != 0)
                        *(esp_1 - 4) = sub_45f888(eax_4)
                        int32_t eax_11
                        eax_11, ecx_1, edx_3 = IsWindowVisible()
                        
                        if (eax_11 != 0)
                            *(esp_1 - 4) = &__saved_ebp
                            char eax_12
                            eax_12, edx_3 = sub_454f44()
                            ecx_1 = *(esp_1 - 4)
                            
                            if (eax_12 == 0)
                                void* esi_3
                                esi_3.w = 0xffbb
                                char eax_14
                                eax_14, ecx_1, edx_3 = sub_403e64(eax_4, esi_3, nop)
                                esp_1 = &esp_1[2]
                                
                                if (eax_14 != 0)
                                    char var_5 = 1
                                    *(esp_1 - 4) = &var_d
                                    *(esp_1 - 8) = &var_5
                                    esi_3.w = 0xffbc
                                    ecx_1, edx_3 = sub_403e64(eax_4, esi_3, nop)
                                    
                                    if (var_5 != 0)
                                        *(esp_1 - 4) = var_9
                                        *(esp_1 - 8) = var_d
                                        void var_2c
                                        *(esp_1 - 0xc) = &var_2c
                                        int32_t eax_16
                                        eax_16, ecx_1, edx_3 = PtInRect()
                                        
                                        if (eax_16 != 0)
                                            ecx_1, edx_3 = sub_4546b4(data_4b1c90, eax_4)
                
                edi_3 += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (*(data_4b1c90 + 8) s> 0)
            int32_t* result_1
            result_1, edx_3 = sub_45476c(data_4b1c90, edx_3, ecx_1)
            result = result_1
        
        if (result != 0)
            *(esp_1 - 4) = &__saved_ebp
            char eax_21 = sub_454da8(result, edx_3)
            *(esp_1 - 4)
            
            if (eax_21 == 0)
                result = nullptr

*esp_1
esp_1[1]
esp_1[2]
return result
