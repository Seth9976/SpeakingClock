// 函数: sub_455348
// 地址: 0x455348
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
struct HWND__* var_1c
struct HWND__** esp_1 = &var_1c
HCURSOR result

if (data_4b1c84 != 0)
label_45539e:
    LRESULT eax_12 = sub_45521c(*(data_4b1c64 + 0x8f), &var_1c, arg1, data_4b1c64)
    esp_1 = &var_1c
    
    if (data_4b1c84 == 0 && data_4b1c88 != 0)
        int32_t eax_13 = data_4b1c78
        HWND eax_14 = GetDesktopWindow()
        sub_4617c0(data_4b1c74, eax_14, data_4b1c88, eax_13)
        esp_1 = &var_1c
    
    bool var_18
    
    if (*(data_4b1c64 + 0x8f) != 0)
        var_18 = data_4b1c84 != 0
        data_4b1c84 = 2
    else
        data_4b1c84 = 1
        var_18 = false
    
    if (eax_12 == *(data_4b1c68 + 8))
    label_455458:
        void* eax_21 = data_4b1c68
        *(eax_21 + 0x10) = *arg1
        *(eax_21 + 0x14) = arg1[1]
        int32_t var_14
        
        if (*(data_4b1c68 + 8) != 0)
            sub_457310(*(data_4b1c68 + 8), arg1, &var_14)
            void* eax_25 = data_4b1c68
            *(eax_25 + 0x18) = var_14
            int32_t var_10
            *(eax_25 + 0x1c) = var_10
        
        int32_t var_20_3 = arg1[1]
        int32_t eax_26
        eax_26.b = 2
        sub_45526c(eax_26)
        *arg1
        int16_t eax_29 = (*(*data_4b1c68 + 4))(var_20_3)
        
        if (data_4b1c88 != 0)
            if (eax_12 == 0 || (*(eax_12 + 0x51) & 0x20) != 0 || *(data_4b1c68 + 4) != 0)
                sub_461770(data_4b1c88, eax_29)
                
                if (*(data_4b1c88 + 0x6a) != 0)
                    sub_4618bc(data_4b1c88, *arg1, arg1[1])
                else
                    int32_t eax_33 = arg1[1]
                    HWND eax_34 = GetDesktopWindow()
                    sub_4617c0(*arg1, eax_34, data_4b1c88, eax_33)
            else
                sub_461930(data_4b1c88)
                SetCursor(sub_4745ec(*data_4ac4b8, sx.d(eax_29)))
        
        result = SetCursor(sub_4745ec(*data_4ac4b8, sx.d(eax_29)))
        esp_1 = &var_1c
        
        if (data_4b1c84 == 2)
            LRESULT esi_1
            
            if (eax_12 != 0)
                int32_t* eax_46 = sub_4552a8()
                *(data_4b1c68 + 0x60) = eax_46
                
                if (eax_46 != 0)
                    sub_457310(eax_46, arg1, &var_14)
                    esi_1.w = 0xffd8
                    result = sub_403e64(eax_46, esi_1, &var_14)
                    esp_1 = &var_18
                    *(data_4b1c68 + 0x5c) = result.b
                else
                    esi_1.w = 0xffd8
                    result = sub_403e64(*(data_4b1c68 + 8), esi_1, data_4b1c68 + 0x18)
                    esp_1 = &var_18
                    *(data_4b1c68 + 0x5c) = result.b
            else
                void* eax_44 = data_4b1c68
                esi_1.w = 0xffe7
                result = sub_403e64(*(eax_44 + 0x40), esi_1, eax_44, *arg1, arg1[1])
                esp_1 = &var_1c
            
            if (data_4b1c68 != 0)
                void* ebx_2 = data_4b1c68
                result = sub_408e34(ebx_2 + 0x4c, ebx_2 + 0x64, 0x10)
                
                if (result.b == 0)
                    if (esp_1[1].b != 0 && (*(*data_4b1c68 + 0x3c))() != 0)
                        (*(*data_4b1c68 + 0x34))()
                    
                    (*(*data_4b1c68 + 0x30))()
                    result = data_4b1c68
                    void* __offset(HICON__, 0x68) edi_5 = &result[0x1a]
                    void* __offset(HICON__, 0x50) esi_3 = &result[0x14]
                    edi_5 - 0x68 = esi_3 - 0x50
                    void* __offset(HICON__, 0x6c) edi_6 = edi_5 + 4
                    void* esi_4 = esi_3 + 4
                    edi_6 - 0x6c = *esi_4
                    edi_6 - 0x6c = *(esi_4 + 4)
    else
        void* eax_17
        eax_17.b = 1
        result = sub_45526c(eax_17)
        
        if (data_4b1c68 != 0)
            *(data_4b1c68 + 8) = eax_12
            *(data_4b1c68 + 0xc) = var_1c
            void* eax_20 = data_4b1c68
            *(eax_20 + 0x10) = *arg1
            *(eax_20 + 0x14) = arg1[1]
            result = sub_45526c(0)
            
            if (data_4b1c68 != 0)
                goto label_455458
else
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(data_4b1c74 - *arg1)
    
    if ((eax_2 ^ edx_1) - edx_1 s>= data_4b1c80)
        goto label_45539e
    
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(data_4b1c78 - arg1[1])
    result = (eax_7 ^ edx_2) - edx_2
    
    if (result s>= data_4b1c80)
        goto label_45539e

esp_1[4]
esp_1[5]
esp_1[6]
return result
