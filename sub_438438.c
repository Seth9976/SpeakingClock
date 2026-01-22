// 函数: sub_438438
// 地址: 0x438438
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b

while (true)
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int16_t es
    *(arg4 + 0x43) = es
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    void* esp
    *(esp - 4) = arg1
    *(esp - 8) = arg3
    *(esp - 0xc) = arg2
    int32_t* entry_ebx
    *(esp - 0x10) = entry_ebx
    *(esp - 0x14) = esp - 0x10
    *(esp - 0x18) = arg4
    *(esp - 0x1c) = arg5
    *(esp - 0x20) = arg6
    *entry_ebx
    bool p_1 = unimplemented  {test dword [ebx], eax}
    int32_t eflags
    char* esp_3
    void* esp_4
    void* ebp
    
    if (not(p_1))
        entry_ebx += 1
        *(arg2 + arg1) += entry_ebx.b
    label_43845b:
        *(arg3 + (arg5 << 1)) += entry_ebx:1.b
        entry_ebx += 1
        arg1.b *= 2
        *arg2
        esp_3 = 0xfc00403e
    label_438469:
        void* eax = arg1 ^ *arg2
        int16_t es_1
        arg6, es_1 = __les_gprz_memp(*arg5)
        *(&arg5[arg3 * 4] + 0x45) += entry_ebx:1.b
        *(eax + 1) += (eax + 1).b
        *(esp_3 + arg6) += entry_ebx.b
        arg1 = eax + 2
    label_43847b:
        arg6[0x5300045] += arg1.b
        arg5 += 1
        arg5[arg6 * 2].b += entry_ebx:1.b
        ebp = arg4 + 1
        *arg6 += arg3.b
        arg3 += 1
        arg6[(entry_ebx << 2) + 0x45] += arg2:1.b
    label_43848f:
        arg1[(arg6 << 2) + 0x45] += arg2.b
        *arg1 += entry_ebx:1.b
        arg4 = ebp + 1
        arg1.b += entry_ebx.b
        *arg2
        char temp0_2
        char temp1_3
        temp0_2, temp1_3, eflags = __aaa(arg1.b, arg1:1.b, eflags)
        arg1.b = temp0_2
        arg1:1.b = temp1_3
        arg2 = &arg2[1]
        arg1.b += arg1:1.b
        *arg2
        *0xb4004233 = arg1
        *0xb400422f = arg3
        *0xb400422b = arg2
        *0xb4004227 = entry_ebx
        *0xb4004223 = 0xb4004227
        *0xb400421f = arg4
        *0xb400421b = arg5
        *0xb4004217 = arg6
        esp_4 = 0xb4004217
        __out_immb_oeax(0x43, arg1, eflags)
        goto label_4384af
    
    *(arg6 + 0x6e) |= arg3
    void* temp2_1 = arg4
    arg4 -= 1
    arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
    
    if (temp2_1 != 1)
        *entry_ebx
        *(esp - 0x20)
        arg1.b += *arg1
        goto label_43845b
    
    *(esp - 0x24) = arg4
    void* esp_6 = esp - 0x24
    
    if (not(add_overflow(temp2_1, 0xffffffff)))
        arg4 += 1
        arg1.b += arg2:1.b
        *arg1 += arg1.b
        *(esp_6 - 4) = arg1
        *arg1 += arg1.b
        *arg3 += 1
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 = *arg1
        char temp3_1 = arg1[0x4f0b003a]
        arg1[0x4f0b003a] += arg1.b
        arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
        *(esp_6 - 8) = entry_ebx
        esp_3 = esp_6 - 8
        
        if (temp3_1 == neg.b(arg1.b))
            arg1:1.b = (&arg1[1]):1.b + entry_ebx:1.b
            goto label_438469
        
        if (temp3_1 + arg1.b u< temp3_1)
            goto label_43847b
        
        esp_6 = &esp_3[1]
        arg5 = __outsd(arg2.w, *arg5, arg5, eflags)
        int16_t temp0_3
        temp0_3, eflags = __arpl_memw_gpr16(entry_ebx[7].w, arg4.w)
        entry_ebx[7].w = temp0_3
        arg1.b &= 0x45
        goto label_43840e
    
    entry_ebx = *esp_6 * 0x45
label_43840e:
    *arg1 += arg1.b
    *arg1 = &arg1[*arg1]
    *arg1 += 1
    *arg1 = &arg1[*arg1]
    *arg3 += 1
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 = *arg1
    char temp4_1 = arg1[0x4f0b003b]
    arg1[0x4f0b003b] += arg1.b
    bool c_4 = temp4_1 + arg1.b u< temp4_1
    bool z_4 = temp4_1 == neg.b(arg1.b)
    arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
    *(esp_6 - 4) = entry_ebx
    esp_4 = esp_6 - 4
    
    if (not(z_4))
        if (not(c_4))
            goto label_43842d
        
        char temp0_1
        char temp1_2
        temp0_1, temp1_2, eflags = __aaa(arg1.b, arg1:1.b, eflags)
        arg1.b = temp0_1
        arg1:1.b = temp1_2
        *(arg6 + arg5 + 0x3ae00042) += (&arg2[1]):1.b
        arg2 = &arg2[2]
        arg1[0xffffffe7] += arg1:1.b
        entry_ebx += 1
    label_4384af:
        *(arg6 * 9 + 0x45) += arg2.b
        arg1[5] += arg1:1.b
        void* esi = arg5 + 1
        *(esp_4 + arg1 + 0x68b80046) += arg3:1.b
        arg1.b += arg2.b
        arg1.b += arg2:1.b
        *(esi * 9 + 0x45) += entry_ebx.b
        arg1.b += entry_ebx:1.b
        arg1:1.b += entry_ebx:1.b
        *(arg3 + 0x45) += arg1.b
        arg1[0xffffffa1] += arg2:1.b
        arg4 += 6
        *arg1 += entry_ebx:1.b
        *(esp_4 - 4) = 0x45
        esp = esp_4 - 4
        *(arg4 + (esi << 1) + 0x6a340045) += arg1:1.b
        char temp7_1 = *arg1
        *arg1 += arg2:1.b
        
        if (temp7_1 != neg.b(arg2:1.b) && temp7_1 + arg2:1.b u>= temp7_1)
            trap(0xd)
        
        char temp8_1 = arg1[0xf000460e]
        arg1[0xf000460e] += arg1.b
        void* const esi_1
        
        if (temp8_1 + arg1.b s>= 0)
            arg1 = sx.d(arg1.w)
            esi_1 = 0xd400045
        label_43853f:
            arg1[(arg6 << 3) - 0x2ed7ffbb] += entry_ebx.b
            *(esp + arg3 - 0xaf3ffba) += arg2:1.b
            *(esi_1 + 1 + arg3) += arg1.b
            arg1[arg6 << 3] += arg1.b
            arg1.b *= 2
            __out_immb_oeax(0x43, arg1, eflags)
            char temp9 = arg1:1.b
            char temp10 = arg1.b
            arg1:1.b += arg1.b
            BOOL eax_2
            int16_t edx_1
            eax_2, edx_1 = sub_4785a5(arg1)
            *(eax_2 - 0x42ee4ffa) = adc.b(*(eax_2 - 0x42ee4ffa), edx_1:1.b, temp9 + temp10 u< temp9)
            undefined
        
        arg1[(arg6 << 1) + 0x45] += arg3:1.b
        *arg1 += arg1.b
        arg1 = *0xf6b00045
        arg1[0xfffffff7] += arg2:1.b
        arg2[(esi << 3) + 0x45] += arg1:1.b
        arg6[(esi << 3) + 0x45] += arg2.b
        arg1[0x780045a9] += arg2:1.b
        arg3.b = 0x45
        *(arg6 * 5 - 0x16afffbb) += arg1:1.b
        entry_ebx += 2
        *(esp + (arg6 << 2) + 0x45) += entry_ebx:1.b
        *(arg3 + ((arg4 + 3) << 3) - 0x3fc3ffbd) += arg1:1.b
    label_43852b:
        arg1[0xffffffc0] += arg1:1.b
        arg1:1.b += arg2:1.b
        *(arg4 + 2) = rol.b(*(arg4 + 2), 0xf8)
        esi_1 = 0xbe980045
        arg1[0xd] += arg1.b
        goto label_43853f
    
    if (not(z_4))
        ebp = arg4 + 1
        goto label_43848f
    
label_43842d:
    esp = esp_4 + 1
    
    if (c_4)
        arg4 += 1
        arg1.b = 0x8a
        *arg6 = *arg5
        arg6 = &arg6[1]
        goto label_43852b
    
    arg1 = entry_ebx + arg5
    *(entry_ebx + (arg1 << 1)) = *(entry_ebx + (arg1 << 1))
