// 函数: sub_47254c
// 地址: 0x47254c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int64_t* var_c = nullptr
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((arg1[7].b & 0x10) == 0 && (arg1[0xd6].b & 4) != 0)
    sub_406a30(data_4ac4c8, &var_c)
    int32_t edx_2
    edx_2.b = 1
    sub_40451c(sub_40ceb0(sub_417654+0x48, edx_2, var_c))
    void arg_4
    esp_1 = &arg_4

sub_4779c0(data_4b1ce0)
arg1[0xd6].b |= 4
*(esp_1 - 4) = &var_4
*(esp_1 - 8) = j_sub_40443c
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
void* esp_4 = esp_1 - 0xc
fsbase->NtTib.ExceptionList = esp_4

if ((arg1[7].b & 0x10) != 0)
    if ((arg1[7].b & 0x10) != 0 && arg1[0xc] != 0 && *(arg1 + 0x1da) != 0)
        *(esp_4 - 4) = 1
        *(esp_4 - 8) = sub_45f888(arg1)
        ShowWindow()
else if (*(arg1 + 0x1da) == 0)
    *(esp_4 - 4) = &var_4
    *(esp_4 - 8) = j_sub_404188
    *(esp_4 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_4 - 0xc
    esi.w = 0xffac
    sub_403e64(arg1, esi, 0)
    *(esp_4 - 4)
    fsbase->NtTib.ExceptionList = *(esp_4 - 0xc)
    
    if (*(data_4b1ce4 + 0x6c) == arg1)
        sub_471284(arg1, 0)
    
    if (*(arg1 + 0x277) == 1)
        (*(*arg1 + 0xb0))()
    else if ((arg1[0xd6].b & 8) == 0)
        int32_t ebx_19 = 0
        
        if (sub_45f888(arg1) == GetActiveWindow() && sub_46b8c0(sub_45f888(arg1)) == 0)
            ebx_19 = sub_46bbe8(sub_45f888(arg1))
        
        if (ebx_19 == 0)
            *(esp_4 - 4) = 0
            *(esp_4 - 8) = sub_45f888(arg1)
            ShowWindow()
        else
            *(esp_4 - 4) = 0x97
            *(esp_4 - 8) = 0
            *(esp_4 - 0xc) = 0
            *(esp_4 - 0x10) = 0
            *(esp_4 - 0x14) = 0
            *(esp_4 - 0x18) = 0
            *(esp_4 - 0x1c) = sub_45f888(arg1)
            SetWindowPos()
            *(esp_4 - 4) = ebx_19
            SetActiveWindow()
    else
        *(esp_4 - 4) = 0x97
        *(esp_4 - 8) = 0
        *(esp_4 - 0xc) = 0
        *(esp_4 - 0x10) = 0
        *(esp_4 - 0x14) = 0
        *(esp_4 - 0x18) = 0
        *(esp_4 - 0x1c) = sub_45f888(arg1)
        SetWindowPos()
else
    *(esp_4 - 4) = &var_4
    *(esp_4 - 8) = j_sub_404188
    *(esp_4 - 0xc) = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = esp_4 - 0xc
    esi.w = 0xffab
    sub_403e64(arg1, esi, 0)
    *(esp_4 - 4)
    fsbase->NtTib.ExceptionList = *(esp_4 - 0xc)
    
    if (arg1[0x9e].b == 4 || (arg1[0x9e].b == 6 && *(arg1 + 0x277) == 1))
        int32_t ebx_3
        int32_t esi_3
        
        if (*(arg1 + 0x277) != 1)
            data_4b1ce4
            int32_t ebx_5 = sub_4740a8() - arg1[0x12]
            ebx_3 = ebx_5 s>> 1
            bool c_3 = unimplemented  {sar ebx, 0x1}
            
            if (ebx_5 s>> 1 s< 0)
                ebx_3 = adc.d(ebx_3, 0, c_3)
            
            data_4b1ce4
            int32_t esi_5 = sub_47409c() - arg1[0x13]
            esi_3 = esi_5 s>> 1
            bool c_4 = unimplemented  {sar esi, 0x1}
            
            if (esi_5 s>> 1 s< 0)
                esi_3 = adc.d(esi_3, 0, c_4)
        else
            int32_t ebx_2 = sub_45714c(*(data_4b1ce0 + 0x44)) - arg1[0x12]
            ebx_3 = ebx_2 s>> 1
            bool c_1 = unimplemented  {sar ebx, 0x1}
            
            if (ebx_2 s>> 1 s< 0)
                ebx_3 = adc.d(ebx_3, 0, c_1)
            
            int32_t esi_2 = sub_457190(*(data_4b1ce0 + 0x44)) - arg1[0x13]
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
        
        *(esp_4 - 4) = arg1[0x12]
        *(esp_4 - 8) = arg1[0x13]
        (*(*arg1 + 0x88))()
        
        if (*(arg1 + 0x57) != 0)
            sub_46ff10(arg1)
    else
        char eax_43 = arg1[0x9e].b
        
        if (eax_43 - 6 u< 2)
            void* esi_6 = *(data_4b1ce0 + 0x44)
            
            if (arg1[0x9e].b == 7 && sub_403df4(arg1[1], 0x46a11c) != 0)
                esi_6 = arg1[1]
            
            int32_t ebx_8
            int32_t esi_7
            
            if (esi_6 == 0 || esi_6 == arg1)
                data_4b1ce4
                int32_t ebx_10 = sub_4740a8() - arg1[0x12]
                ebx_8 = ebx_10 s>> 1
                bool c_7 = unimplemented  {sar ebx, 0x1}
                
                if (ebx_10 s>> 1 s< 0)
                    ebx_8 = adc.d(ebx_8, 0, c_7)
                
                data_4b1ce4
                int32_t esi_9 = sub_47409c() - arg1[0x13]
                esi_7 = esi_9 s>> 1
                bool c_8 = unimplemented  {sar esi, 0x1}
                
                if (esi_9 s>> 1 s< 0)
                    esi_7 = adc.d(esi_7, 0, c_8)
            else
                int32_t eax_51 = sub_46e120(esi_6)
                int32_t eax_53 = *(esi_6 + 0x48) - arg1[0x12]
                int32_t eax_54 = eax_53 s>> 1
                bool c_5 = unimplemented  {sar eax, 0x1}
                
                if (eax_53 s>> 1 s< 0)
                    eax_54 = adc.d(eax_54, 0, c_5)
                
                ebx_8 = eax_51 + eax_54
                int32_t eax_56 = sub_46e140(esi_6)
                int32_t edx_8 = *(esi_6 + 0x4c) - arg1[0x13]
                int32_t edx_9 = edx_8 s>> 1
                bool c_6 = unimplemented  {sar edx, 0x1}
                
                if (edx_8 s>> 1 s< 0)
                    edx_9 = adc.d(edx_9, 0, c_6)
                
                esi_7 = eax_56 + edx_9
            
            data_4b1ce4
            
            if (ebx_8 s< sub_4740c0())
                data_4b1ce4
                sub_4740c0()
            
            data_4b1ce4
            
            if (esi_7 s< sub_4740b4())
                data_4b1ce4
                sub_4740b4()
            
            *(esp_4 - 4) = arg1[0x12]
            *(esp_4 - 8) = arg1[0x13]
            (*(*arg1 + 0x88))()
            
            if (*(arg1 + 0x57) != 0)
                sub_46ff10(arg1)
        else if (eax_43 == 5)
            int32_t ebx_14
            int32_t esi_12
            
            if (*(arg1 + 0x277) != 1)
                data_4b1ce4
                int32_t eax_89 = sub_4740d8()
                int32_t ebx_16 = eax_89 s>> 1
                bool c_11 = unimplemented  {sar ebx, 0x1}
                
                if (eax_89 s>> 1 s< 0)
                    ebx_16 = adc.d(ebx_16, 0, c_11)
                
                data_4b1ce4
                int32_t ebx_17 = ebx_16 + sub_4740c0()
                int32_t eax_93 = arg1[0x12]
                int32_t eax_94 = eax_93 s>> 1
                bool c_12 = unimplemented  {sar eax, 0x1}
                
                if (eax_93 s>> 1 s< 0)
                    eax_94 = adc.d(eax_94, 0, c_12)
                
                ebx_14 = ebx_17 - eax_94
                data_4b1ce4
                int32_t eax_96 = sub_4740cc()
                int32_t esi_14 = eax_96 s>> 1
                bool c_13 = unimplemented  {sar esi, 0x1}
                
                if (eax_96 s>> 1 s< 0)
                    esi_14 = adc.d(esi_14, 0, c_13)
                
                data_4b1ce4
                int32_t esi_15 = esi_14 + sub_4740b4()
                int32_t eax_100 = arg1[0x13]
                int32_t eax_101 = eax_100 s>> 1
                bool c_14 = unimplemented  {sar eax, 0x1}
                
                if (eax_100 s>> 1 s< 0)
                    eax_101 = adc.d(eax_101, 0, c_14)
                
                esi_12 = esi_15 - eax_101
            else
                int32_t ebx_13 = sub_45714c(*(data_4b1ce0 + 0x44)) - arg1[0x12]
                ebx_14 = ebx_13 s>> 1
                bool c_9 = unimplemented  {sar ebx, 0x1}
                
                if (ebx_13 s>> 1 s< 0)
                    ebx_14 = adc.d(ebx_14, 0, c_9)
                
                int32_t esi_11 = sub_457190(*(data_4b1ce0 + 0x44)) - arg1[0x13]
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
            
            *(esp_4 - 4) = arg1[0x12]
            *(esp_4 - 8) = arg1[0x13]
            (*(*arg1 + 0x88))()
    
    arg1[0x9e].b = 0
    
    if (*(arg1 + 0x277) != 1)
        *(esp_4 - 4) = *((zx.d(*(arg1 + 0x273)) << 2) + &data_4abab4)
        *(esp_4 - 8) = sub_45f888(arg1)
        ShowWindow()
        esp_4 = esp_4
    else
        void* esp_24
        
        if (*(arg1 + 0x273) != 2)
            *(esp_4 - 4) = *((zx.d(*(arg1 + 0x273)) << 2) + &data_4abab4)
            *(esp_4 - 8) = sub_45f888(arg1)
            ShowWindow()
            *(esp_4 - 4) = arg1[0x12] | arg1[0x13] << 0x10
            *(esp_4 - 8) = 0
            *(esp_4 - 0xc) = 5
            *(esp_4 - 0x10) = sub_45f888(arg1)
            *(esp_4 - 0x14) = DefMDIChildProcA
            CallWindowProcA()
            esp_24 = esp_4
            sub_457a68(arg1)
        else
            *(esp_4 - 4) = 0
            *(esp_4 - 8) = sub_45f888(arg1)
            *(esp_4 - 0xc) = 0x223
            *(esp_4 - 0x10) = *(*(data_4b1ce0 + 0x44) + 0x29c)
            SendMessageA()
            *(esp_4 - 4) = 3
            *(esp_4 - 8) = sub_45f888(arg1)
            ShowWindow()
            esp_24 = esp_4
        
        *(esp_24 - 4) = 0
        *(esp_24 - 8) = 0
        *(esp_24 - 0xc) = 0x234
        *(esp_24 - 0x10) = *(*(data_4b1ce0 + 0x44) + 0x29c)
        SendMessageA()
        esp_4 = esp_24

*(esp_4 + 8)
fsbase->NtTib.ExceptionList = *esp_4
*(esp_4 + 8) = 0x472b97
arg1[0xd6].b &= 0xfb
return arg1
