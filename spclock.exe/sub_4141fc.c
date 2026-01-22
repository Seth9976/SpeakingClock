// 函数: sub_4141fc
// 地址: 0x4141fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

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
int32_t entry_ebx
*(esp_2 - 4) = entry_ebx
*(esp_2 - 8) = arg3
*(esp_2 - 0xc) = &var_4
*(esp_2 - 0x10) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x14) = fsbase->NtTib.ExceptionList
void* esp_7 = esp_2 - 0x14
fsbase->NtTib.ExceptionList = esp_7
int16_t eax = *arg2
uint32_t edx = zx.d(eax)

if (edx u> 0x14)
label_414459:
    
    if (eax == 0x100)
        sub_4054c8(i_1, *(arg2 + 8))
    else if (eax == 0x101)
        void var_3c
        int32_t* esi_3
        ebp_1, esi_3 = sub_4140d0(arg2, &var_3c)
        esp_7 += 0x18
        sub_4053a4(esi_3, ebp_1[-0xe])
    else if ((eax:1.b & 0x40) == 0)
        sub_405368(arg1)
        
        if (sub_414134(arg2, arg1) == 0)
            int16_t var_74
            int32_t* esi_6
            ebp_1, esi_6 = sub_414018(arg2, &var_74)
            esp_7 += 0x18
            sub_4053a4(esi_6, ebp_1[-0x1c])
    else
        switch (zx.d(eax) & 0xffffbfff)
            case 2
                **(arg2 + 8)
                uint8_t* var_40
                sub_4054c8(sub_409340(i_1, &var_40), var_40)
            case 3
                **(arg2 + 8)
                uint8_t* var_44
                sub_4054c8(sub_409340(i_1, &var_44), var_44)
            case 4
                *(esp_7 - 0xc) = fconvert.t(**(arg2 + 8))
                uint8_t* var_48
                sub_4054c8(sub_40aac4(&var_48), var_48)
            case 5
                *(esp_7 - 0xc) = fconvert.t(**(arg2 + 8))
                uint8_t* var_4c
                sub_4054c8(sub_40aac4(&var_4c), var_4c)
            case 6
                void* eax_50 = *(arg2 + 8)
                *(esp_7 - 4) = *(eax_50 + 4)
                *(esp_7 - 8) = *eax_50
                PWSTR var_50
                sub_4137ec(&var_50)
                sub_4053a4(arg1, var_50)
            case 7
                void* eax_53 = *(arg2 + 8)
                *(esp_7 - 4) = *(eax_53 + 4)
                *(esp_7 - 8) = *eax_53
                PWSTR var_54
                sub_413824(&var_54)
                sub_4053a4(arg1, var_54)
            case 8
                sub_40548c(i_1, **(arg2 + 8))
            case 0xb
                esp_7 += 0x18
                PWSTR var_58
                sub_4053a4(sub_41385c(zx.d(**(arg2 + 8)), &var_58), var_58)
            case 0xc
                *(arg2 + 8)
                sub_4141fc()
                esp_7 += 0x18
            case 0x10
                **(arg2 + 8)
                uint8_t* var_5c
                sub_4054c8(sub_409340(i_1, &var_5c), var_5c)
            case 0x11
                **(arg2 + 8)
                uint8_t* var_60
                sub_4054c8(sub_409340(i_1, &var_60), var_60)
            case 0x12
                **(arg2 + 8)
                uint8_t* var_64
                sub_4054c8(sub_409340(i_1, &var_64), var_64)
            case 0x13
                int32_t eax_70 = **(arg2 + 8)
                *(esp_7 - 4) = 0
                *(esp_7 - 8) = eax_70
                uint8_t* var_68
                sub_4054c8(sub_40942c(&var_68), var_68)
            case 0x14
                void* eax_73 = *(arg2 + 8)
                *(esp_7 - 4) = *(eax_73 + 4)
                *(esp_7 - 8) = *eax_73
                uint8_t* var_6c
                sub_4054c8(sub_40942c(&var_6c), var_6c)
            default
                int16_t var_70
                int32_t* esi_5
                ebp_1, esi_5 = sub_414018(arg2, &var_70)
                esp_7 += 0x18
                sub_4053a4(esi_5, ebp_1[-0x1b])
else
    switch (edx)
        case 0
            sub_405368(arg1)
        case 1
            if (data_4aaa10 != 0)
                edx.w = 8
                i_1 = sub_40ff78(1, edx.w)
            
            sub_4054c8(i_1, data_4aaa14)
        case 2
            arg2[4]
            uint8_t* var_8
            sub_4054c8(sub_409340(i_1, &var_8), var_8)
        case 3
            *(arg2 + 8)
            uint8_t* var_c
            sub_4054c8(sub_409340(i_1, &var_c), var_c)
        case 4
            *(esp_7 - 0xc) = fconvert.t(*(arg2 + 8))
            uint8_t* var_10
            sub_4054c8(sub_40aac4(&var_10), var_10)
        case 5
            *(esp_7 - 0xc) = fconvert.t(*(arg2 + 8))
            uint8_t* var_14
            sub_4054c8(sub_40aac4(&var_14), var_14)
        case 6
            *(esp_7 - 4) = *(arg2 + 0xc)
            *(esp_7 - 8) = *(arg2 + 8)
            PWSTR var_18
            sub_4137ec(&var_18)
            sub_4053a4(arg1, var_18)
        case 7
            *(esp_7 - 4) = *(arg2 + 0xc)
            *(esp_7 - 8) = *(arg2 + 8)
            PWSTR var_1c
            sub_413824(&var_1c)
            sub_4053a4(arg1, var_1c)
        case 8
            *(esp_7 - 4) = arg1
            sub_405578(0x7fffffff, 1, *(arg2 + 8))
        case 9, 0xd
            int16_t var_38
            int32_t* esi_2
            ebp_1, esi_2 = sub_414018(arg2, &var_38)
            esp_7 += 0x18
            sub_4053a4(esi_2, ebp_1[-0xd])
        case 0xa, 0xe, 0xf
            goto label_414459
        case 0xb
            esp_7 += 0x18
            PWSTR var_20
            sub_4053a4(sub_41385c(zx.d(arg2[4]), &var_20), var_20)
        case 0xc
            *(arg2 + 8)
            sub_4141fc()
            esp_7 += 0x18
        case 0x10
            arg2[4].b
            uint8_t* var_24
            sub_4054c8(sub_409340(i_1, &var_24), var_24)
        case 0x11
            arg2[4].b
            uint8_t* var_28
            sub_4054c8(sub_409340(i_1, &var_28), var_28)
        case 0x12
            arg2[4]
            uint8_t* var_2c
            sub_4054c8(sub_409340(i_1, &var_2c), var_2c)
        case 0x13
            int32_t eax_24 = *(arg2 + 8)
            *(esp_7 - 4) = 0
            *(esp_7 - 8) = eax_24
            uint8_t* var_30
            sub_4054c8(sub_40942c(&var_30), var_30)
        case 0x14
            *(esp_7 - 4) = *(arg2 + 0xc)
            *(esp_7 - 8) = *(arg2 + 8)
            uint8_t* var_34
            sub_4054c8(sub_40942c(&var_34), var_34)

*(esp_7 + 8)
fsbase->NtTib.ExceptionList = *esp_7
*(esp_7 + 8) = sub_414748
sub_405380(&ebp_1[-0x1c], 2)
sub_404bac(&ebp_1[-0x1a], 5)
sub_405380(&ebp_1[-0x15], 3)
sub_404bac(&ebp_1[-0x12], 4)
sub_405380(&ebp_1[-0xe], 2)
sub_404bac(&ebp_1[-0xc], 5)
sub_405380(&ebp_1[-7], 3)
return sub_404bac(&ebp_1[-4], 4)
