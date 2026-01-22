// 函数: sub_40de70
// 地址: 0x40de70
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t* ebp_1 = &var_4
int32_t i_1 = 0xe
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_1
    i_1 -= 1
while (i != 1)
*(esp_2 - 4) = i_1
int32_t entry_ebx
*(esp_2 - 8) = entry_ebx
*(esp_2 - 0xc) = arg3
*(esp_2 - 0x10) = &var_4
*(esp_2 - 0x14) = j_sub_40338c
TEB* fsbase
*(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
void* esp_8 = esp_2 - 0x18
fsbase->NtTib.ExceptionList = esp_8
int32_t eax
eax.w = *arg2

switch (zx.d(eax.w))
    case 0
        sub_403ffc(arg1)
    case 1
        if (data_41331c != 0)
            uint32_t edx
            edx.w = 8
            i_1 = sub_40c9a8(1, edx.w)
        
        sub_404148(i_1, data_413320)
    case 2
        arg2[4]
        uint8_t* var_8
        sub_404148(sub_406af0(i_1, &var_8), var_8)
    case 3
        *(arg2 + 8)
        uint8_t* var_c
        sub_404148(sub_406af0(i_1, &var_c), var_c)
    case 4
        *(esp_8 - 0xc) = fconvert.t(*(arg2 + 8))
        uint8_t* var_10
        sub_404148(sub_407d20(&var_10), var_10)
    case 5
        *(esp_8 - 0xc) = fconvert.t(*(arg2 + 8))
        uint8_t* var_14
        sub_404148(sub_407d20(&var_14), var_14)
    case 6
        *(esp_8 - 4) = *(arg2 + 0xc)
        *(esp_8 - 8) = *(arg2 + 8)
        PWSTR var_18
        sub_40d460(&var_18)
        sub_404038(arg1, var_18)
    case 7
        *(esp_8 - 4) = *(arg2 + 0xc)
        *(esp_8 - 8) = *(arg2 + 8)
        PWSTR var_1c
        sub_40d498(&var_1c)
        sub_404038(arg1, var_1c)
    case 8
        *(esp_8 - 4) = arg1
        sub_40410c(i_1, *(arg2 + 8))
        int32_t var_20
        sub_4041f8(0x7fffffff, 1, var_20)
    case 9, 0xd
        int16_t var_3c
        BSTR* esi_2
        ebp_1, esi_2 = sub_40dc8c(arg2, &var_3c)
        esp_8 += 0x1c
        sub_404038(esi_2, ebp_1[-0xe])
    case 0xb
        eax.w = arg2[4]
        esp_8 += 0x1c
        PWSTR var_24
        sub_404038(sub_40d4d0(eax, &var_24), var_24)
    case 0xc
        sub_40de70(arg1, *(arg2 + 8), arg1)
        esp_8 += 0x1c
    case 0x10
        arg2[4].b
        uint8_t* var_28
        sub_404148(sub_406af0(i_1, &var_28), var_28)
    case 0x11
        int32_t eax_19
        eax_19.b = arg2[4].b
        uint8_t* var_2c
        sub_404148(sub_406af0(i_1, &var_2c), var_2c)
    case 0x12
        arg2[4]
        uint8_t* var_30
        sub_404148(sub_406af0(i_1, &var_30), var_30)
    case 0x13
        int32_t eax_23 = *(arg2 + 8)
        *(esp_8 - 4) = 0
        *(esp_8 - 8) = eax_23
        uint8_t* var_34
        sub_404148(sub_406bdc(&var_34), var_34)
    case 0x14
        *(esp_8 - 4) = *(arg2 + 0xc)
        *(esp_8 - 8) = *(arg2 + 8)
        uint8_t* var_38
        sub_404148(sub_406bdc(&var_38), var_38)
    default
        int16_t edx_25 = eax.w
        
        if (edx_25 == 0x100)
            sub_404148(i_1, *(arg2 + 8))
        else if (edx_25 == 0x101)
            void var_40
            BSTR* esi_3
            ebp_1, esi_3 = sub_40dd44(arg2, &var_40)
            esp_8 += 0x1c
            sub_404038(esi_3, ebp_1[-0xf])
        else if ((eax:1.b & 0x40) == 0)
            sub_403ffc(arg1)
            
            if (sub_40dda8(arg2, arg1) == 0)
                int16_t var_78
                BSTR* esi_6
                ebp_1, esi_6 = sub_40dc8c(arg2, &var_78)
                esp_8 += 0x1c
                sub_404038(esi_6, ebp_1[-0x1d])
        else
            switch (zx.d(eax.w) & 0xffffbfff)
                case 2
                    **(arg2 + 8)
                    uint8_t* var_44
                    sub_404148(sub_406af0(i_1, &var_44), var_44)
                case 3
                    **(arg2 + 8)
                    uint8_t* var_48
                    sub_404148(sub_406af0(i_1, &var_48), var_48)
                case 4
                    *(esp_8 - 0xc) = fconvert.t(**(arg2 + 8))
                    uint8_t* var_4c
                    sub_404148(sub_407d20(&var_4c), var_4c)
                case 5
                    *(esp_8 - 0xc) = fconvert.t(**(arg2 + 8))
                    uint8_t* var_50
                    sub_404148(sub_407d20(&var_50), var_50)
                case 6
                    void* eax_49 = *(arg2 + 8)
                    *(esp_8 - 4) = *(eax_49 + 4)
                    *(esp_8 - 8) = *eax_49
                    PWSTR var_54
                    sub_40d460(&var_54)
                    sub_404038(arg1, var_54)
                case 7
                    void* eax_52 = *(arg2 + 8)
                    *(esp_8 - 4) = *(eax_52 + 4)
                    *(esp_8 - 8) = *eax_52
                    PWSTR var_58
                    sub_40d498(&var_58)
                    sub_404038(arg1, var_58)
                case 8
                    sub_40410c(i_1, **(arg2 + 8))
                case 0xb
                    int16_t* eax_56
                    eax_56.w = **(arg2 + 8)
                    esp_8 += 0x1c
                    PWSTR var_5c
                    sub_404038(sub_40d4d0(eax_56, &var_5c), var_5c)
                case 0xc
                    sub_40de70(arg1, *(arg2 + 8), arg1)
                    esp_8 += 0x1c
                case 0x10
                    **(arg2 + 8)
                    uint8_t* var_60
                    sub_404148(sub_406af0(i_1, &var_60), var_60)
                case 0x11
                    **(arg2 + 8)
                    uint8_t* var_64
                    sub_404148(sub_406af0(i_1, &var_64), var_64)
                case 0x12
                    **(arg2 + 8)
                    uint8_t* var_68
                    sub_404148(sub_406af0(i_1, &var_68), var_68)
                case 0x13
                    int32_t eax_68 = **(arg2 + 8)
                    *(esp_8 - 4) = 0
                    *(esp_8 - 8) = eax_68
                    uint8_t* var_6c
                    sub_404148(sub_406bdc(&var_6c), var_6c)
                case 0x14
                    void* eax_71 = *(arg2 + 8)
                    *(esp_8 - 4) = *(eax_71 + 4)
                    *(esp_8 - 8) = *eax_71
                    uint8_t* var_70
                    sub_404148(sub_406bdc(&var_70), var_70)
                default
                    int16_t var_74
                    BSTR* esi_5
                    ebp_1, esi_5 = sub_40dc8c(arg2, &var_74)
                    esp_8 += 0x1c
                    sub_404038(esi_5, ebp_1[-0x1c])

*(esp_8 + 8)
fsbase->NtTib.ExceptionList = *esp_8
*(esp_8 + 8) = sub_40e3c9
sub_404014(&ebp_1[-0x1d], 2)
sub_403a10(&ebp_1[-0x1b], 5)
sub_404014(&ebp_1[-0x16], 3)
sub_403a10(&ebp_1[-0x13], 4)
sub_404014(&ebp_1[-0xf], 2)
sub_403a10(&ebp_1[-0xd], 5)
sub_404014(&ebp_1[-8], 4)
return sub_403a10(&ebp_1[-4], 4)
