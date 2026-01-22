// 函数: sub_413adc
// 地址: 0x413adc
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
*(esp_2 - 4) = i_1
int32_t entry_ebx
*(esp_2 - 8) = entry_ebx
*(esp_2 - 0xc) = arg3
*(esp_2 - 0x10) = &var_4
*(esp_2 - 0x14) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x18) = fsbase->NtTib.ExceptionList
void* esp_8 = esp_2 - 0x18
fsbase->NtTib.ExceptionList = esp_8
int16_t eax = *arg2
uint32_t edx = zx.d(eax)

if (edx u> 0x14)
label_413d47:
    
    if (eax == 0x100)
        sub_404bdc(arg1, *(arg2 + 8))
    else if (eax == 0x101)
        void var_40
        int64_t** esi_3
        ebp_1, esi_3 = sub_4139f0(arg2, &var_40)
        esp_8 += 0x1c
        sub_404bdc(esi_3, ebp_1[-0xf])
    else if ((eax:1.b & 0x40) == 0)
        sub_404b88(arg1)
        
        if (sub_413a54(arg2, arg1) == 0)
            int64_t** esi_6
            ebp_1, esi_6 = sub_413924(arg2)
            esp_8 += 0x1c
            sub_404bdc(esi_6, ebp_1[-0x1d])
    else
        switch (zx.d(eax) & 0xffffbfff)
            case 2
                **(arg2 + 8)
                int64_t* var_44
                sub_409340(i_1, &var_44)
                sub_404bdc(arg1, var_44)
            case 3
                **(arg2 + 8)
                int64_t* var_48
                sub_409340(i_1, &var_48)
                sub_404bdc(arg1, var_48)
            case 4
                *(esp_8 - 0xc) = fconvert.t(**(arg2 + 8))
                int64_t* var_4c
                sub_40aac4(&var_4c)
                sub_404bdc(arg1, var_4c)
            case 5
                *(esp_8 - 0xc) = fconvert.t(**(arg2 + 8))
                int64_t* var_50
                sub_40aac4(&var_50)
                sub_404bdc(arg1, var_50)
            case 6
                void* eax_51 = *(arg2 + 8)
                *(esp_8 - 4) = *(eax_51 + 4)
                *(esp_8 - 8) = *eax_51
                wchar16* var_54
                sub_404e10(sub_4137ec(&var_54), var_54)
            case 7
                void* eax_54 = *(arg2 + 8)
                *(esp_8 - 4) = *(eax_54 + 4)
                *(esp_8 - 8) = *eax_54
                wchar16* var_58
                sub_404e10(sub_413824(&var_58), var_58)
            case 8
                sub_404db0(i_1, **(arg2 + 8))
            case 0xb
                wchar16* var_5c
                int32_t ecx_7
                int32_t esi_4
                ecx_7, esi_4 = sub_41385c(zx.d(**(arg2 + 8)), &var_5c)
                esp_8 += 0x1c
                sub_404e10(ecx_7, var_5c)
            case 0xc
                *(arg2 + 8)
                sub_413adc()
                esp_8 += 0x1c
            case 0x10
                **(arg2 + 8)
                int64_t* var_60
                sub_409340(i_1, &var_60)
                sub_404bdc(arg1, var_60)
            case 0x11
                **(arg2 + 8)
                int64_t* var_64
                sub_409340(i_1, &var_64)
                sub_404bdc(arg1, var_64)
            case 0x12
                **(arg2 + 8)
                int64_t* var_68
                sub_409340(i_1, &var_68)
                sub_404bdc(arg1, var_68)
            case 0x13
                int32_t eax_71 = **(arg2 + 8)
                *(esp_8 - 4) = 0
                *(esp_8 - 8) = eax_71
                int64_t* var_6c
                sub_40942c(&var_6c)
                sub_404bdc(arg1, var_6c)
            case 0x14
                void* eax_74 = *(arg2 + 8)
                *(esp_8 - 4) = *(eax_74 + 4)
                *(esp_8 - 8) = *eax_74
                int64_t* var_70
                sub_40942c(&var_70)
                sub_404bdc(arg1, var_70)
            default
                int64_t** esi_5
                ebp_1, esi_5 = sub_413924(arg2)
                esp_8 += 0x1c
                sub_404bdc(esi_5, ebp_1[-0x1c])
else
    switch (edx)
        case 0
            sub_404b88(arg1)
        case 1
            if (data_4aaa10 != 0)
                edx.w = 0x100
                sub_40ff78(1, edx.w)
            
            sub_404bdc(arg1, data_4aaa14)
        case 2
            arg2[4]
            int64_t* var_8
            sub_409340(i_1, &var_8)
            sub_404bdc(arg1, var_8)
        case 3
            *(arg2 + 8)
            int64_t* var_c
            sub_409340(i_1, &var_c)
            sub_404bdc(arg1, var_c)
        case 4
            *(esp_8 - 0xc) = fconvert.t(*(arg2 + 8))
            int64_t* var_10
            sub_40aac4(&var_10)
            sub_404bdc(arg1, var_10)
        case 5
            *(esp_8 - 0xc) = fconvert.t(*(arg2 + 8))
            int64_t* var_14
            sub_40aac4(&var_14)
            sub_404bdc(arg1, var_14)
        case 6
            *(esp_8 - 4) = *(arg2 + 0xc)
            *(esp_8 - 8) = *(arg2 + 8)
            wchar16* var_18
            sub_404e10(sub_4137ec(&var_18), var_18)
        case 7
            *(esp_8 - 4) = *(arg2 + 0xc)
            *(esp_8 - 8) = *(arg2 + 8)
            wchar16* var_1c
            sub_404e10(sub_413824(&var_1c), var_1c)
        case 8
            wchar16* var_20
            *(esp_8 - 4) = &var_20
            sub_404e10(sub_405578(0x7fffffff, 1, *(arg2 + 8)), var_20)
        case 9, 0xd
            int64_t** esi_2
            ebp_1, esi_2 = sub_413924(arg2)
            esp_8 += 0x1c
            sub_404bdc(esi_2, ebp_1[-0xe])
        case 0xa, 0xe, 0xf
            goto label_413d47
        case 0xb
            wchar16* var_24
            int32_t ecx_4
            int32_t esi_1
            ecx_4, esi_1 = sub_41385c(zx.d(arg2[4]), &var_24)
            esp_8 += 0x1c
            sub_404e10(ecx_4, var_24)
        case 0xc
            *(arg2 + 8)
            sub_413adc()
            esp_8 += 0x1c
        case 0x10
            arg2[4].b
            int64_t* var_28
            sub_409340(i_1, &var_28)
            sub_404bdc(arg1, var_28)
        case 0x11
            arg2[4].b
            int64_t* var_2c
            sub_409340(i_1, &var_2c)
            sub_404bdc(arg1, var_2c)
        case 0x12
            arg2[4]
            int64_t* var_30
            sub_409340(i_1, &var_30)
            sub_404bdc(arg1, var_30)
        case 0x13
            int32_t eax_25 = *(arg2 + 8)
            *(esp_8 - 4) = 0
            *(esp_8 - 8) = eax_25
            int64_t* var_34
            sub_40942c(&var_34)
            sub_404bdc(arg1, var_34)
        case 0x14
            *(esp_8 - 4) = *(arg2 + 0xc)
            *(esp_8 - 8) = *(arg2 + 8)
            int64_t* var_38
            sub_40942c(&var_38)
            sub_404bdc(arg1, var_38)

*(esp_8 + 8)
fsbase->NtTib.ExceptionList = *esp_8
*(esp_8 + 8) = sub_41400f
sub_404bac(&ebp_1[-0x1d], 7)
sub_405380(&ebp_1[-0x16], 3)
sub_404bac(&ebp_1[-0x13], 0xb)
sub_405380(&ebp_1[-8], 4)
return sub_404bac(&ebp_1[-4], 4)
