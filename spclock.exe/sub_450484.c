// 函数: sub_450484
// 地址: 0x450484
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int32_t eax
int32_t var_8 = eax
*(arg2 + 0xc) = 0
uint32_t uId_3 = 0xffffffff
uint32_t uId_2 = 0xffffffff
int32_t var_18 = 0xffffffff
int32_t eax_2 = GetMenuItemCount(*(arg2 + 8))
int32_t* esp_1 = &var_28
int32_t result = eax_2 - 1

if (result s>= 0)
    int32_t i_1 = result + 1
    uint32_t uId = 0
    int32_t i
    
    do
        int32_t var_2c_1 = 0x400
        int16_t eax_6 = GetMenuState(*(arg2 + 8), uId, MF_BYPOSITION)
        result = sub_4502e8(*(arg2 + 8), eax_6.b, uId, *(arg2 + 4), &var_4)
        esp_1 = &var_28
        
        if (result.b != 0)
            if ((eax_6 & 2) == 0)
                if (uId_3 s>= 0)
                    *(arg2 + 0xc) = 3
                else
                    uId_3 = uId
                    *(arg2 + 0xc) = 2
                
                if ((eax_6 & 0x80) != 0)
                    uId_2 = uId
                else if (uId_2 s>= 0)
                    uint32_t uId_1 = uId
            else if (uId_3 s< 0)
                uId_3 = 0xfffffffe
        
        uId += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

if (uId_3 s< 0xffffffff)
    *(arg2 + 0xc) = 0x10000
else if (uId_3 s>= 0 || eax_2 - 1 s< 0)
label_4505ca:
    result = *(arg2 + 0xc)
    
    if (result == 2)
        result = result << 0x10 | ebp_1[-3]
        *(arg2 + 0xc) = result
    else if (result == 3)
        if (ebp_1[-5] s< 0)
            ebp_1[-5] = ebp_1[-3]
        
        result = result << 0x10 | ebp_1[-5]
        *(arg2 + 0xc) = result
else
    int32_t var_1c_1 = eax_2
    int32_t esi_1 = 0
    
    while (true)
        *(esp_1 - 4) = 0x400
        *(esp_1 - 8) = esi_1
        *(esp_1 - 0xc) = *(arg2 + 8)
        int32_t eax_13 = GetMenuState()
        *(esp_1 - 4) = ebp_1
        *(esp_1 - 8) = zx.d(*(arg2 + 4))
        result, ebp_1 = sub_450344(*(arg2 + 8), eax_13, esi_1)
        *(esp_1 - 8)
        esp_1 -= 4
        
        if (result.b != 0)
            if ((eax_13.w & 2) != 0)
                *(arg2 + 0xc) = 0x10000
                break
            
            if (ebp_1[-3] s>= 0)
                *(arg2 + 0xc) = 3
            else
                ebp_1[-3] = esi_1
                *(arg2 + 0xc) = 2
            
            if ((eax_13.w & 0x80) != 0)
                ebp_1[-4] = esi_1
            else if (ebp_1[-4] s>= 0)
                ebp_1[-5] = esi_1
        
        esi_1 += 1
        int32_t temp1_1 = ebp_1[-6]
        ebp_1[-6] -= 1
        
        if (temp1_1 == 1)
            goto label_4505ca

*esp_1
esp_1[1]
esp_1[2]
*ebp_1
return result
