// 函数: sub_40a0ae
// 地址: 0x40a0ae
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
ecx.b = arg1 & 0xdf
int32_t eax = 1
int32_t ebx = *(arg2 - 0xc)
uint32_t result

if (ebx s<= *(arg2 + 8))
    *(arg2 - 0xc) += 1
    int32_t* esi_2 = *(arg2 + 0xc) + (ebx << 3)
    result = *esi_2
    uint32_t ecx_11
    uint32_t result_1
    int32_t (__fastcall* esi_7)(int32_t arg1, wchar16* arg2)
    
    switch (esi_2[1].b)
        case 0
            int32_t edx_7 = *(arg2 - 0x24)
            char ebx_3 = ecx.b
            
            if (edx_7 u> 0x10)
                edx_7 = 0
            
            char temp1_1 = ecx.b
            ecx.b -= 0x44
            
            if (temp1_1 == 0x44)
                return sub_4092f4(result, edx_7, ecx, arg2 - 0x59) __tailcall
            
            if (ebx_3 == 0x58)
                return sub_4092f4(result, edx_7, 0x10, arg2 - 0x59) __tailcall
            
            if (ebx_3 == 0x55)
                return sub_4092f4(result, edx_7, 0xa, arg2 - 0x59) __tailcall
            
            goto label_40a119
        case 1, 7, 8, 9, 0xe
            goto label_40a119
        case 2
            if (ecx.b != 0x53)
                goto label_40a119
            
            return result
        case 3
            ebx:1.b = 0
            goto label_40a26a
        case 4
            if (ecx.b != 0x53)
                goto label_40a119
            
            result.b = *result
            ecx_11 = zx.d(result.b)
        case 5
            if (ecx.b != 0x50)
                goto label_40a119
            
            return sub_4092f4(result, 8, 0x10, arg2 - 0x59) __tailcall
        case 6
            if (ecx.b != 0x53)
                goto label_40a119
            
            uint32_t result_2 = result
            result.b = 0
            int32_t i = *(arg2 - 0x24)
            
            if (i != 0)
                while (i != 0)
                    char temp2_1 = *result_2
                    result_2 += 1
                    i -= 1
                    
                    if (0 == temp2_1)
                        break
            
            return result
        case 0xa
            esi_7 = sub_404db0
        label_40a1ef:
            
            if (ecx.b != 0x53)
                goto label_40a119
            
            *(arg2 - 4)
            (esi_7 + *(arg2 - 4))(ebx)
            result_1 = *(arg2 - 0x14)
            result = result_1
            goto label_40a216
        case 0xb
            if (ecx.b != 0x53)
                goto label_40a119
            
            result_1 = result
            goto label_40a216
        case 0xc
            ebx:1.b = 1
        label_40a26a:
            ebx.b = 0
            
            if (ecx.b != 0x47)
                ebx.b = 1
            
            int32_t eax_10
            uint32_t edx_14
            
            if (ecx.b == 0x47 || ecx.b == 0x45)
                eax_10 = *(arg2 - 0x24)
                edx_14 = 3
                
                if (eax_10 u> 0x12)
                    eax_10 = 0xf
            else
                ebx.b = 2
                
                if (ecx.b != 0x46)
                    ebx.b = 3
                    
                    if (ecx.b != 0x4e)
                        if (ecx.b != 0x4d)
                            goto label_40a119
                        
                        ebx.b = 4
                
                eax_10 = 0x12
                edx_14 = *(arg2 - 0x24)
                
                if (edx_14 u> 0x12)
                    edx_14 = 2
                    
                    if (ecx.b == 0x4d)
                        edx_14 = zx.d(data_4af814)
            
            *(arg2 - 4)
            return sub_40a4b0(ebx:1.b, arg2 - 0x69, edx_14, eax_10, ebx.b)
        case 0xd
            if (ecx.b != 0x53)
                goto label_40a119
            
            if (*result u<= 1)
                return result
            
            result = sub_409f54()
            result_1 = *(arg2 - 0x10)
        label_40a216:
            
            if (result_1 == 0)
                return result
            
            ecx_11 = *(result_1 - 4)
        case 0xf
            esi_7 = sub_404e10
            goto label_40a1ef
        case 0x10
            goto label_40a133
    
    if (ecx_11 u<= *(arg2 - 0x24))
        return result
    
    *(arg2 - 0x24)
    return result

while (true)
    sub_40a2db(eax, arg2)
    int64_t* edx_2 = *(arg2 - 0x18)
    *(arg2 - 4)
    result, ecx = sub_409efc(eax, edx_2, *(arg2 - 0x28) - edx_2)
label_40a133:
    int32_t edx_3 = *(arg2 - 0x24)
    
    if (edx_3 u> 0x20)
        edx_3 = 0
    
    char ebx_2 = ecx.b
    char temp0_1 = ecx.b
    ecx.b -= 0x44
    
    if (temp0_1 == 0x44)
        return sub_409360(result, edx_3, ecx.w, arg2 - 0x49) __tailcall
    
    if (ebx_2 == 0x58)
        return sub_409360(result, edx_3, 0x10, arg2 - 0x49) __tailcall
    
    if (ebx_2 == 0x55)
        return sub_409360(result, edx_3, 0xa, arg2 - 0x49) __tailcall
    
label_40a119:
    eax = 0
