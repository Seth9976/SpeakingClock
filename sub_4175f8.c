// 函数: sub_4175f8
// 地址: 0x4175f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
char temp1 = *arg1
*arg1 += arg1.b
void* eax = &arg1[1]
int32_t var_4
void* entry_ebx
void* esp
bool c_3

if (arg1 == 0xffffffff || temp1 + arg1.b u< temp1)
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
    char temp3_1 = *eax
    *eax += eax.b
    bool c_2 = temp3_1 + eax.b u< temp3_1
    bool p_1 = unimplemented  {add byte [eax], al}
    bool a_1 = unimplemented  {add byte [eax], al}
    bool z_1 = temp3_1 == neg.b(eax.b)
    bool d
    var_4 = (add_overflow(temp3_1, eax.b) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | (temp3_1 + eax.b s< 0 ? 1 : 0) << 7 | (z_1 ? 1 : 0) << 6 | (a_1 ? 1 : 0) << 4
        | (p_1 ? 1 : 0) << 2 | (c_2 ? 1 : 0)
    esp = &var_4
    
    if (not(z_1) && not(c_2))
        *(eax * 2) += arg3.b
        *eax += eax.b
        arg6[0x40]
        *(eax - 0x43ffbfc2) += arg2:1.b
        void* eax_5
        eax_5.b = (eax + 1).b * 2
        void* eax_6
        eax_6:1.b = (eax_5 + 1):1.b + (eax_5 + 1).b
        *(eax_6 + 0x403f) += entry_ebx:1.b
        *(&var_4 + arg6) += entry_ebx.b
        *(eax_6 + 0x3e) += entry_ebx.b
        eax = eax_6 + 3
        char temp6_1 = *arg3
        *arg3 += arg2.b
        c_3 = temp6_1 + arg2.b u< temp6_1
        goto label_41769e
    
    *eax += eax.b
    *eax += eax.b
    *eax += eax.b
else
    *eax += arg2.b
    *eax += eax.b
    *(eax * 5 + 0x3eb00040) += entry_ebx.b
    *(arg5 + arg6 + 0x3ec00040) += entry_ebx:1.b
    void* eax_2
    eax_2:1.b = (eax + 2):1.b + (eax + 2).b
    *(eax_2 + 0x403f) += entry_ebx:1.b
    *(eax_2 + 1 + (arg2 << 3)) += entry_ebx:1.b
    *(eax_2 + 0x3e) += entry_ebx.b
    eax = eax_2 + 3
    char temp4_1 = *arg6
    *arg6 += arg3.b
    char* temp5_1 = arg6
    arg6 -= 1
    
    if (temp5_1 != 1)
        while (true)
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
            arg6[arg5 << 1] += arg3.b
        label_4176d3:
            *eax += arg2.b
            *eax += eax.b
            char temp9_1 = eax.b
            eax.b += entry_ebx.b
            *eax = adc.b(*eax, eax.b, temp9_1 + entry_ebx.b u< temp9_1)
            eax.b = 0x3e
            *(arg5 + arg6 + 0x3ec00040) += entry_ebx:1.b
            void* eax_10
            eax_10:1.b = (eax + 2):1.b + (eax + 2).b
            *(eax_10 + 0x403f) += entry_ebx:1.b
            *(esp + arg6) += entry_ebx.b
            eax = eax_10 + 2
            arg6[(entry_ebx << 2) + 0x41] += entry_ebx:1.b
            *(arg3 + 1) += entry_ebx.b
            *(eax - 0x5d) += eax:1.b
            void* ecx_2 = arg3 + 3
        label_417703:
            char temp10_1 = eax.b
            eax.b += arg2.b
            bool p_2 = unimplemented  {add al, dl}
            bool a_2 = unimplemented  {add al, dl}
            eax:1.b = (temp10_1 + arg2.b s< 0 ? 1 : 0) << 7
                | (temp10_1 == neg.b(arg2.b) ? 1 : 0) << 6 | (a_2 ? 1 : 0) << 4
                | (p_2 ? 1 : 0) << 2 | (temp10_1 + arg2.b u< temp10_1 ? 1 : 0)
            *(eax - 0x60) += (ecx_2 + 1).b
            arg3 = ecx_2 + 2
            char temp11_1 = *0x73694c54
            *0x73694c54 += eax.b
            c_3 = temp11_1 + eax.b u< temp11_1
            
            if (temp11_1 != neg.b(eax.b))
                break
            
        label_41769e:
            ecx_2 = arg3 - 1
            int32_t eflags
            arg5 = __outsb(arg2.w, *arg5, arg5, eflags)
            
            if (arg3 == 1 || c_3)
                break
            
            uint8_t temp0_1
            temp0_1, arg6 = __insb(arg6, arg2.w, eflags)
            *arg6 = temp0_1
            esp = *(arg6 + (ecx_2 << 1) + 0x70) * 0x74617265
            *(arg6 + 0x6e)
            arg3 = ecx_2 + 1
            *eax += eax.b
            *eax += eax.b
            *eax += eax.b
        
        *(eax + 0x77) <<= 0x41
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *eax += eax.b
        *(eax + 0x77) += eax:1.b
        *(eax * 2) += eax:1.b
        *eax += eax.b
        arg7 f- fconvert.t(*eax)
        *(eax - 0x43ffbfc1) += arg2:1.b
        void* eax_13
        eax_13.b = (eax + 2).b * 2
        void* eax_14
        eax_14:1.b = (eax_13 + 1):1.b + (eax_13 + 1).b
        *(eax_14 + 0x403f) += entry_ebx:1.b
        *(esp + arg6) += entry_ebx.b
        *(eax_14 + 0xb0041a5) += entry_ebx:1.b
        *(esp - 4) = esp
        *(esp - 8) = esp - 4
        *(esp - 0xc) = 0x64616572
        int32_t esi = *(entry_ebx + 0x74) * 0x4177b8
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *(eax_14 + 2) += (eax_14 + 2).b
        *0xc004177 += 0x77
        char* eax_17
        eax_17.b = 0x77 + entry_ebx.b
        *eax_17 = adc.b(*eax_17, eax_17.b, 0x77 + entry_ebx.b u< 0x77)
        arg6[esi + 0x3ec00040] += entry_ebx:1.b
        *0xc00c17f += entry_ebx:1.b
        *(esp - 0xd + arg6) += entry_ebx.b
        *0x54050041 += (arg3 + 1):1.b
        *(entry_ebx + (esi << 1) - 0x75)
        *0xc008142 += 0x42
        *0xc008142 += 0x42
        *0xc008142 += 0x42
        *0xc008142 += 0x42
        *0xc008142 += 0x42
        *0xc008142 += 0x42
        char temp13 = *0xc008142
        *0xc008142 += entry_ebx:1.b
        
        if (temp13 + entry_ebx:1.b s>= 0)
            jump(0x4177d3)
        
        *(arg2 + 1) -= 0x19
        entry_ebx:1.b *= 2
        undefined
    
    char* temp7_1 = arg6
    arg6 -= 1
    var_4:2.w = arg2.w
    esp = &var_4:2
    
    if (temp4_1 + arg3.b u< temp4_1)
        if (temp7_1 != 1)
            jump(0x4176bf)
        
        jump(0x41764d)
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
eax.b |= 0x77
goto label_4176d3
