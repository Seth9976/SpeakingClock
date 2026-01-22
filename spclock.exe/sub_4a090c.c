// 函数: sub_4a090c
// 地址: 0x4a090c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1
*arg1 += arg1.b
bool p = unimplemented  {inc esp}
int32_t entry_ebx
void* esp_1 = entry_ebx + 1
TEB* fsbase
char* eax_5
bool cond:0_1

if (not(p))
    if (sub_40984c(arg1) != 0)
        eax_5 = *(arg4 - 4)
    label_4a098a:
        *(esp_1 - 4) = sub_405018(eax_5)
        data_4abe2c = LoadLibraryA()
        cond:0_1 = data_4abe2c == 0
        goto label_4a099c
else
    __bound_gprv_mema32(arg5, *(fsbase + arg1))
    *arg1
    int32_t edx = *(esp_1 + 0x14)
    char* eax_4 = *(esp_1 + 0x1c) - 0x6561ccfe
    *eax_4 ^= edx:1.b
    int32_t* esp_3 = (esp_1 + 0x20) ^ *(edx + 0x37)
    *esp_3
    uint16_t* esi_1 = esp_3[1]
    arg4 = esp_3[2]
    void* ebx_1 = esp_3[4]
    int32_t edx_1 = esp_3[5]
    int32_t* ecx_1 = esp_3[6]
    eax_5 = esp_3[7]
    esp_1 = &esp_3[8]
    int32_t temp2_1 = *ecx_1 ^ esi_1
    *ecx_1 = temp2_1
    
    if (temp2_1 s< 0)
        int32_t eflags
        uint16_t* esi_2 = __outsb(edx_1.w, *esi_1, esi_1, eflags)
        
        if (add_overflow(ecx_1, 0xffffffff))
            goto label_4a09b3
        
        __outsd(edx_1.w, *esi_2, esi_2, eflags)
        int32_t eflags_1
        int16_t temp0_1
        temp0_1, eflags_1 = __arpl_memw_gpr16(*(ebx_1 + 0x65), edx_1.w)
        *(ebx_1 + 0x65) = temp0_1
        
        if (temp2_1 u< 0)
            goto label_4a09bd
        
        if (temp2_1 u>= 0)
            eax_5.b ^= *eax_5
            return sub_4a094c() __tailcall
        
        *(eax_5 * 9 + 0x458b5b74) += 1
        goto label_4a098a
    
    char temp3_1 = *eax_5
    *eax_5 += eax_5.b
    cond:0_1 = temp3_1 == neg.b(eax_5.b)
label_4a099c:
    
    if (not(cond:0_1))
        *(esp_1 - 4) = &data_4a0a00
        *(esp_1 - 8) = data_4abe2c
        data_4b1dd4 = GetProcAddress()
    label_4a09b3:
        *(esp_1 - 4) = &data_4a0a0c
        esp_1 -= 4
        eax_5 = data_4abe2c
    label_4a09bd:
        *(esp_1 - 4) = eax_5
        data_4b1dd8 = GetProcAddress()
        *esp_1 = &data_4a0a00
        *(esp_1 - 4) = data_4abe2c
        esp_1 += 4
        data_4b1ddc = GetProcAddress()
*(esp_1 + 8)
fsbase->NtTib.ExceptionList = *esp_1
*(esp_1 + 8) = sub_4a09fa
sub_404b88(arg4 - 4)
return arg4 - 4
