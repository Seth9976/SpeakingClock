// 函数: sub_496b6d
// 地址: 0x496b6d
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
int32_t entry_ebx
*(entry_ebx + (arg4 << 1) + 0x49) += entry_ebx:1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*(arg3 * 3) |= arg3:1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
char* ecx = *arg3 * 0x34
*arg1 += arg1.b
*arg1 += ecx:1.b
char temp0_1 = *ecx
*ecx = arg1.b
arg1.b = temp0_1
*arg2 s>>= 0x42
*(arg5 + arg6 + 0x33fc0040) += entry_ebx:1.b
void* edx = &arg2[1]
arg1:1.b += arg1.b
arg1[0x403f] += entry_ebx:1.b
*(&__return_addr + arg6) += entry_ebx.b
void* eax_1 = &arg1[2]
*(eax_1 - 0xfffb68e) += entry_ebx:1.b
*arg5 - *arg6
void* esi = arg5 + 4
uint8_t* edi = arg6 + 4
char temp1 = *(eax_1 - 0x73ffb68f)
*(eax_1 - 0x73ffb68f) += entry_ebx.b
int32_t* esp_1

if (temp1 + entry_ebx.b u>= temp1)
    int32_t temp2_1 = entry_ebx
    entry_ebx += 1
    int32_t var_4 = entry_ebx
    esp_1 = &var_4
    
    if (temp2_1 != 0xffffffff)
        int32_t ebp = *(esi + 0x67) * 0x656a624f
        int32_t eflags_2
        int16_t temp0_3
        temp0_3, eflags_2 = __arpl_memw_gpr16(*(entry_ebx + (esi << 1) - 0x44), esi.w)
        *(entry_ebx + (esi << 1) - 0x44) = temp0_3
        void** ecx_3 = *(ecx + 1) * 0x24
        void* temp0_4 = *ecx_3
        *ecx_3 = eax_1
        void* eax_2
        eax_2.b = temp0_4.b + *temp0_4
        *temp0_4
        *(ebp + (ecx_3 << 1) + 0x44)
        int32_t var_8 = entry_ebx + 2
        
        if (entry_ebx == 0xfffffffe)
            jump(sub_496ca4+4)
        
        jump("ingObject")
else
    *(edi + esi + 0x36640042) += entry_ebx.b
    *(edi + esi + 0x38a40042) += (&ecx[1]):1.b
    eax_1.b += entry_ebx.b
    *(edx + 2)
    int32_t eflags_1
    char temp0_2
    char temp1_1
    temp0_2, temp1_1, eflags_1 = __aaa(eax_1.b, eax_1:1.b, eflags)
    eax_1.b = temp0_2
    eax_1:1.b = temp1_1
    edx += 3
    eax_1.b += eax_1:1.b
    char temp3_1 = *edx
    bool p_1 = unimplemented  {cmp al, byte [edx]}
    bool a_1 = unimplemented  {cmp al, byte [edx]}
    bool z_1 = eax_1.b == temp3_1
    
    if (not(z_1))
        *0x444d4c54 += edx.b
        *0xb4004233 = entry_ebx + 2
        
        if (entry_ebx == 0xfffffffe)
            jump(0x496c6c)
        
        jump(0x496bf8)
    
    bool d
    *0xb4004233 = (add_overflow(eax_1.b, neg.b(temp3_1)) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | (eax_1.b - temp3_1 s< 0 ? 1 : 0) << 7 | (z_1 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4
        | (p_1 ? 1 : 0) << 2 | (eax_1.b u< temp3_1 ? 1 : 0)
    esp_1 = 0xb4004233
    uint8_t temp0_5
    temp0_5, edi = __insb(edi, edx.w, eflags_1)
    *edi = temp0_5
    *(edx + 0x1c00496c) += ecx:1.b
    *eax_1 += eax_1.b
    eax_1:1.b += edx:1.b
    *(eax_1 - 0x43ffbfc3) += edx:1.b
    void* eax_4
    eax_4.b = eax_1.b * 2
    void* eax_5
    eax_5:1.b = (eax_4 + 1):1.b + (eax_4 + 1).b
    *(eax_5 + 0x403f) += entry_ebx:1.b
    *(0xb4004233 + edi) += entry_ebx.b
    eax_1.b = (eax_5 + 2).b + (eax_5 + 2):1.b

*esi - *edi
void* esi_3 = esi + 1
void* edi_1 = &edi[1]
eax_1.b += edx:1.b
*esi_3 - *edi_1
void* esi_4 = esi_3 + 4
eax_1.b += entry_ebx:1.b
*esi_4 - *(edi_1 + 4)
void* esi_5 = esi_4 + 4
char temp8 = eax_1.b
eax_1.b += edx.b

if (temp8 == neg.b(edx.b))
    *(arg4 + (esi_5 << 1) + 0x20049) += edx.b
    undefined

*(esp_1 - 4) = entry_ebx + 1

if (entry_ebx == 0xffffffff)
    jump(&data_496d58:2)

jump("ingObje")
