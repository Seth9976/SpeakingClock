// 函数: sub_472609
// 地址: 0x472609
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 - 4)
sub_476e5c(data_4b1ce0)
sub_404598(__return_addr)
int32_t* esp
int32_t var_8

if (*(*(arg1 - 4) + 0x278) == 4 || (*(*(arg1 - 4) + 0x278) == 6 && *(*(arg1 - 4) + 0x277) == 1))
    int32_t ebx_3
    int32_t esi_3
    
    if (*(*(arg1 - 4) + 0x277) != 1)
        data_4b1ce4
        int32_t ebx_5 = sub_4740a8() - *(*(arg1 - 4) + 0x48)
        ebx_3 = ebx_5 s>> 1
        bool c_3 = unimplemented  {sar ebx, 0x1}
        
        if (ebx_5 s>> 1 s< 0)
            ebx_3 = adc.d(ebx_3, 0, c_3)
        
        data_4b1ce4
        int32_t esi_5 = sub_47409c() - *(*(arg1 - 4) + 0x4c)
        esi_3 = esi_5 s>> 1
        bool c_4 = unimplemented  {sar esi, 0x1}
        
        if (esi_5 s>> 1 s< 0)
            esi_3 = adc.d(esi_3, 0, c_4)
    else
        int32_t ebx_2 = sub_45714c(*(data_4b1ce0 + 0x44)) - *(*(arg1 - 4) + 0x48)
        ebx_3 = ebx_2 s>> 1
        bool c_1 = unimplemented  {sar ebx, 0x1}
        
        if (ebx_2 s>> 1 s< 0)
            ebx_3 = adc.d(ebx_3, 0, c_1)
        
        int32_t esi_2 = sub_457190(*(data_4b1ce0 + 0x44)) - *(*(arg1 - 4) + 0x4c)
        esi_3 = esi_2 s>> 1
        bool c_2 = unimplemented  {sar esi, 0x1}
        
        if (esi_2 s>> 1 s< 0)
            esi_3 = adc.d(esi_3, 0, c_2)
    
    data_4b1ce4
    
    if (ebx_3 s< sub_4740c0())
        data_4b1ce4
        sub_4740c0()
    
    data_4b1ce4
    
    if (esi_3 s< sub_4740b4())
        data_4b1ce4
        sub_4740b4()
    
    int32_t eax_28 = *(*(arg1 - 4) + 0x48)
    var_8 = *(*(arg1 - 4) + 0x4c)
    esp = &var_8
    (*(**(arg1 - 4) + 0x88))(var_8, eax_28)
    
    if (*(*(arg1 - 4) + 0x57) != 0)
        sub_46ff10(*(arg1 - 4))
else
    char eax_35 = *(*(arg1 - 4) + 0x278)
    
    if (eax_35 - 6 u< 2)
        void* esi_6 = *(data_4b1ce0 + 0x44)
        
        if (*(*(arg1 - 4) + 0x278) == 7 && sub_403df4(*(*(arg1 - 4) + 4), 0x46a11c) != 0)
            esi_6 = *(*(arg1 - 4) + 4)
        
        int32_t ebx_8
        int32_t esi_7
        
        if (esi_6 == 0 || esi_6 == *(arg1 - 4))
            data_4b1ce4
            int32_t ebx_10 = sub_4740a8() - *(*(arg1 - 4) + 0x48)
            ebx_8 = ebx_10 s>> 1
            bool c_7 = unimplemented  {sar ebx, 0x1}
            
            if (ebx_10 s>> 1 s< 0)
                ebx_8 = adc.d(ebx_8, 0, c_7)
            
            data_4b1ce4
            int32_t esi_9 = sub_47409c() - *(*(arg1 - 4) + 0x4c)
            esi_7 = esi_9 s>> 1
            bool c_8 = unimplemented  {sar esi, 0x1}
            
            if (esi_9 s>> 1 s< 0)
                esi_7 = adc.d(esi_7, 0, c_8)
        else
            int32_t eax_43 = sub_46e120(esi_6)
            int32_t eax_45 = *(esi_6 + 0x48) - *(*(arg1 - 4) + 0x48)
            int32_t eax_46 = eax_45 s>> 1
            bool c_5 = unimplemented  {sar eax, 0x1}
            
            if (eax_45 s>> 1 s< 0)
                eax_46 = adc.d(eax_46, 0, c_5)
            
            ebx_8 = eax_43 + eax_46
            int32_t eax_48 = sub_46e140(esi_6)
            int32_t edx_4 = *(esi_6 + 0x4c) - *(*(arg1 - 4) + 0x4c)
            int32_t edx_5 = edx_4 s>> 1
            bool c_6 = unimplemented  {sar edx, 0x1}
            
            if (edx_4 s>> 1 s< 0)
                edx_5 = adc.d(edx_5, 0, c_6)
            
            esi_7 = eax_48 + edx_5
        
        data_4b1ce4
        
        if (ebx_8 s< sub_4740c0())
            data_4b1ce4
            sub_4740c0()
        
        data_4b1ce4
        
        if (esi_7 s< sub_4740b4())
            data_4b1ce4
            sub_4740b4()
        
        int32_t eax_65 = *(*(arg1 - 4) + 0x48)
        var_8 = *(*(arg1 - 4) + 0x4c)
        esp = &var_8
        (*(**(arg1 - 4) + 0x88))(var_8, eax_65)
        
        if (*(*(arg1 - 4) + 0x57) != 0)
            sub_46ff10(*(arg1 - 4))
    else if (eax_35 == 5)
        int32_t ebx_14
        int32_t esi_12
        
        if (*(*(arg1 - 4) + 0x277) != 1)
            data_4b1ce4
            int32_t eax_81 = sub_4740d8()
            int32_t ebx_16 = eax_81 s>> 1
            bool c_11 = unimplemented  {sar ebx, 0x1}
            
            if (eax_81 s>> 1 s< 0)
                ebx_16 = adc.d(ebx_16, 0, c_11)
            
            data_4b1ce4
            int32_t ebx_17 = ebx_16 + sub_4740c0()
            int32_t eax_85 = *(*(arg1 - 4) + 0x48)
            int32_t eax_86 = eax_85 s>> 1
            bool c_12 = unimplemented  {sar eax, 0x1}
            
            if (eax_85 s>> 1 s< 0)
                eax_86 = adc.d(eax_86, 0, c_12)
            
            ebx_14 = ebx_17 - eax_86
            data_4b1ce4
            int32_t eax_88 = sub_4740cc()
            int32_t esi_14 = eax_88 s>> 1
            bool c_13 = unimplemented  {sar esi, 0x1}
            
            if (eax_88 s>> 1 s< 0)
                esi_14 = adc.d(esi_14, 0, c_13)
            
            data_4b1ce4
            int32_t esi_15 = esi_14 + sub_4740b4()
            int32_t eax_92 = *(*(arg1 - 4) + 0x4c)
            int32_t eax_93 = eax_92 s>> 1
            bool c_14 = unimplemented  {sar eax, 0x1}
            
            if (eax_92 s>> 1 s< 0)
                eax_93 = adc.d(eax_93, 0, c_14)
            
            esi_12 = esi_15 - eax_93
        else
            int32_t ebx_13 = sub_45714c(*(data_4b1ce0 + 0x44)) - *(*(arg1 - 4) + 0x48)
            ebx_14 = ebx_13 s>> 1
            bool c_9 = unimplemented  {sar ebx, 0x1}
            
            if (ebx_13 s>> 1 s< 0)
                ebx_14 = adc.d(ebx_14, 0, c_9)
            
            int32_t esi_11 = sub_457190(*(data_4b1ce0 + 0x44)) - *(*(arg1 - 4) + 0x4c)
            esi_12 = esi_11 s>> 1
            bool c_10 = unimplemented  {sar esi, 0x1}
            
            if (esi_11 s>> 1 s< 0)
                esi_12 = adc.d(esi_12, 0, c_10)
        
        data_4b1ce4
        
        if (ebx_14 s< sub_4740c0())
            data_4b1ce4
            sub_4740c0()
        
        data_4b1ce4
        
        if (esi_12 s< sub_4740b4())
            data_4b1ce4
            sub_4740b4()
        
        int32_t eax_103 = *(*(arg1 - 4) + 0x48)
        var_8 = *(*(arg1 - 4) + 0x4c)
        esp = &var_8
        (*(**(arg1 - 4) + 0x88))(var_8, eax_103)
*(*(arg1 - 4) + 0x278) = 0
void* esp_21

if (*(*(arg1 - 4) + 0x277) != 1)
    *(esp - 4) = *((zx.d(*(*(arg1 - 4) + 0x273)) << 2) + &data_4abab4)
    *(esp - 8) = sub_45f888(*(arg1 - 4))
    ShowWindow()
    esp_21 = esp
else
    void* esp_8
    
    if (*(*(arg1 - 4) + 0x273) != 2)
        *(esp - 4) = *((zx.d(*(*(arg1 - 4) + 0x273)) << 2) + &data_4abab4)
        *(esp - 8) = sub_45f888(*(arg1 - 4))
        ShowWindow()
        *(esp - 4) = *(*(arg1 - 4) + 0x48) | *(*(arg1 - 4) + 0x4c) << 0x10
        *(esp - 8) = 0
        *(esp - 0xc) = 5
        *(esp - 0x10) = sub_45f888(*(arg1 - 4))
        *(esp - 0x14) = DefMDIChildProcA
        CallWindowProcA()
        esp_8 = esp
        sub_457a68(*(arg1 - 4))
    else
        *(esp - 4) = 0
        *(esp - 8) = sub_45f888(*(arg1 - 4))
        *(esp - 0xc) = 0x223
        *(esp - 0x10) = *(*(data_4b1ce0 + 0x44) + 0x29c)
        SendMessageA()
        *(esp - 4) = 3
        *(esp - 8) = sub_45f888(*(arg1 - 4))
        ShowWindow()
        esp_8 = esp
    
    *(esp_8 - 4) = 0
    *(esp_8 - 8) = 0
    *(esp_8 - 0xc) = 0x234
    *(esp_8 - 0x10) = *(*(data_4b1ce0 + 0x44) + 0x29c)
    SendMessageA()
    esp_21 = esp_8

*(esp_21 + 8)
TEB* fsbase
fsbase->NtTib.ExceptionList = *esp_21
*(esp_21 + 8) = 0x472b97
void* result = *(arg1 - 4)
*(result + 0x358) &= 0xfb
return result
