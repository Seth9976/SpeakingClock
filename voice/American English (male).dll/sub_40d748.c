// 函数: sub_40d748
// 地址: 0x40d748
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t* ebp_1 = &var_4
int32_t i_1 = 0xf
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t entry_ebx
*(esp_2 - 4) = entry_ebx
*(esp_2 - 8) = arg3
*(esp_2 - 0xc) = &var_4
*(esp_2 - 0x10) = j_sub_40338c
TEB* fsbase
*(esp_2 - 0x14) = fsbase->NtTib.ExceptionList
void* esp_7 = esp_2 - 0x14
fsbase->NtTib.ExceptionList = esp_7
int32_t eax
eax.w = *arg2

switch (zx.d(eax.w))
    case 0
        sub_4039ec(arg1)
    case 1
        if (data_41331c != 0)
            uint32_t edx
            edx.w = 0x100
            sub_40c9a8(1, edx.w)
        
        sub_403a40(arg1, data_413320)
    case 2
        arg2[4]
        void* var_8
        sub_406af0(i_1, &var_8)
        sub_403a40(arg1, var_8)
    case 3
        *(arg2 + 8)
        void* var_c
        sub_406af0(i_1, &var_c)
        sub_403a40(arg1, var_c)
    case 4
        *(esp_7 - 0xc) = fconvert.t(*(arg2 + 8))
        void* var_10
        sub_407d20(&var_10)
        sub_403a40(arg1, var_10)
    case 5
        *(esp_7 - 0xc) = fconvert.t(*(arg2 + 8))
        void* var_14
        sub_407d20(&var_14)
        sub_403a40(arg1, var_14)
    case 6
        *(esp_7 - 4) = *(arg2 + 0xc)
        *(esp_7 - 8) = *(arg2 + 8)
        wchar16* var_18
        sub_403c74(sub_40d460(&var_18), var_18)
    case 7
        *(esp_7 - 4) = *(arg2 + 0xc)
        *(esp_7 - 8) = *(arg2 + 8)
        wchar16* var_1c
        sub_403c74(sub_40d498(&var_1c), var_1c)
    case 8
        wchar16* var_20
        *(esp_7 - 4) = &var_20
        sub_40410c(i_1, *(arg2 + 8))
        int32_t var_24
        sub_403c74(sub_4041f8(0x7fffffff, 1, var_24), var_20)
    case 9, 0xd
        void** esi_2
        ebp_1, esi_2 = sub_40d594(arg2)
        esp_7 += 0x18
        sub_403a40(esi_2, ebp_1[-0xf])
    case 0xb
        eax.w = arg2[4]
        wchar16* var_28
        int32_t ecx_4
        int32_t esi_1
        ecx_4, esi_1 = sub_40d4d0(eax, &var_28)
        esp_7 += 0x18
        sub_403c74(ecx_4, var_28)
    case 0xc
        sub_40d748(arg1, *(arg2 + 8), arg1)
        esp_7 += 0x18
    case 0x10
        arg2[4].b
        void* var_2c
        sub_406af0(i_1, &var_2c)
        sub_403a40(arg1, var_2c)
    case 0x11
        int32_t eax_20
        eax_20.b = arg2[4].b
        void* var_30
        sub_406af0(i_1, &var_30)
        sub_403a40(arg1, var_30)
    case 0x12
        arg2[4]
        void* var_34
        sub_406af0(i_1, &var_34)
        sub_403a40(arg1, var_34)
    case 0x13
        int32_t eax_24 = *(arg2 + 8)
        *(esp_7 - 4) = 0
        *(esp_7 - 8) = eax_24
        void* var_38
        sub_406bdc(&var_38)
        sub_403a40(arg1, var_38)
    case 0x14
        *(esp_7 - 4) = *(arg2 + 0xc)
        *(esp_7 - 8) = *(arg2 + 8)
        void* var_3c
        sub_406bdc(&var_3c)
        sub_403a40(arg1, var_3c)
    default
        int16_t edx_25 = eax.w
        
        if (edx_25 == 0x100)
            sub_403a40(arg1, *(arg2 + 8))
        else if (edx_25 == 0x101)
            void var_44
            void** esi_3
            ebp_1, esi_3 = sub_40d660(arg2, &var_44)
            esp_7 += 0x18
            sub_403a40(esi_3, ebp_1[-0x10])
        else if ((eax:1.b & 0x40) == 0)
            sub_4039ec(arg1)
            
            if (sub_40d6c4(arg2, arg1) == 0)
                void** esi_6
                ebp_1, esi_6 = sub_40d594(arg2)
                esp_7 += 0x18
                sub_403a40(esi_6, ebp_1[-0x1e])
        else
            switch (zx.d(eax.w) & 0xffffbfff)
                case 2
                    **(arg2 + 8)
                    void* var_48
                    sub_406af0(i_1, &var_48)
                    sub_403a40(arg1, var_48)
                case 3
                    **(arg2 + 8)
                    void* var_4c
                    sub_406af0(i_1, &var_4c)
                    sub_403a40(arg1, var_4c)
                case 4
                    *(esp_7 - 0xc) = fconvert.t(**(arg2 + 8))
                    void* var_50
                    sub_407d20(&var_50)
                    sub_403a40(arg1, var_50)
                case 5
                    *(esp_7 - 0xc) = fconvert.t(**(arg2 + 8))
                    void* var_54
                    sub_407d20(&var_54)
                    sub_403a40(arg1, var_54)
                case 6
                    void* eax_50 = *(arg2 + 8)
                    *(esp_7 - 4) = *(eax_50 + 4)
                    *(esp_7 - 8) = *eax_50
                    wchar16* var_58
                    sub_403c74(sub_40d460(&var_58), var_58)
                case 7
                    void* eax_53 = *(arg2 + 8)
                    *(esp_7 - 4) = *(eax_53 + 4)
                    *(esp_7 - 8) = *eax_53
                    wchar16* var_5c
                    sub_403c74(sub_40d498(&var_5c), var_5c)
                case 8
                    sub_403c14(i_1, **(arg2 + 8))
                case 0xb
                    int16_t* eax_57
                    eax_57.w = **(arg2 + 8)
                    wchar16* var_60
                    int32_t ecx_7
                    int32_t esi_4
                    ecx_7, esi_4 = sub_40d4d0(eax_57, &var_60)
                    esp_7 += 0x18
                    sub_403c74(ecx_7, var_60)
                case 0xc
                    sub_40d748(arg1, *(arg2 + 8), arg1)
                    esp_7 += 0x18
                case 0x10
                    **(arg2 + 8)
                    void* var_64
                    sub_406af0(i_1, &var_64)
                    sub_403a40(arg1, var_64)
                case 0x11
                    **(arg2 + 8)
                    void* var_68
                    sub_406af0(i_1, &var_68)
                    sub_403a40(arg1, var_68)
                case 0x12
                    **(arg2 + 8)
                    void* var_6c
                    sub_406af0(i_1, &var_6c)
                    sub_403a40(arg1, var_6c)
                case 0x13
                    int32_t eax_69 = **(arg2 + 8)
                    *(esp_7 - 4) = 0
                    *(esp_7 - 8) = eax_69
                    void* var_70
                    sub_406bdc(&var_70)
                    sub_403a40(arg1, var_70)
                case 0x14
                    void* eax_72 = *(arg2 + 8)
                    *(esp_7 - 4) = *(eax_72 + 4)
                    *(esp_7 - 8) = *eax_72
                    void* var_74
                    sub_406bdc(&var_74)
                    sub_403a40(arg1, var_74)
                default
                    void** esi_5
                    ebp_1, esi_5 = sub_40d594(arg2)
                    esp_7 += 0x18
                    sub_403a40(esi_5, ebp_1[-0x1d])

*(esp_7 + 8)
fsbase->NtTib.ExceptionList = *esp_7
*(esp_7 + 8) = sub_40dc86
sub_403a10(&ebp_1[-0x1e], 7)
sub_404014(&ebp_1[-0x17], 3)
sub_403a10(&ebp_1[-0x14], 0xb)
sub_404014(&ebp_1[-9], 5)
return sub_403a10(&ebp_1[-4], 4)
