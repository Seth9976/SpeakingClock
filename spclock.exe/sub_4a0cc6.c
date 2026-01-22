// 函数: sub_4a0cc6
// 地址: 0x4a0cc6
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1 = arg1.b
arg1.b += arg3:1.b
arg1.b = sbb.b(arg1.b, 0x47, temp1 + arg3:1.b u< temp1)
void* entry_ebx
arg1[(entry_ebx << 3) - 0x26d7ffba] += arg3:1.b
arg1.b += arg1:1.b
arg1.b ^= *arg5
int32_t eflags
char temp0
char temp1_1
temp0, temp1_1, eflags = __aad_immb(0x46, arg1.b, arg1:1.b)
arg1.b = temp0
arg1:1.b = temp1_1
arg1[0x2d] += entry_ebx:1.b
arg1[0x6c00470e] += arg2:1.b
int32_t eflags_1
char temp0_1
temp0_1, eflags_1 = __das(arg1.b, eflags)
arg1.b = temp0_1
arg1[0xffffffe6] += arg1.b
*arg3 += entry_ebx.b
*(entry_ebx + 0xf) += arg2.b
arg1[3] += arg1:1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
int16_t es = *(__return_addr + 2)
void* esp_3 = __return_addr + 4
char* edx_2 = arg2 + 1
uint16_t* esi = *(edx_2 + (arg1 << 1) + 0x74) * 0x368326e
*arg1 += arg1.b
*arg1 += arg1.b
char temp2 = arg3.b
arg3.b |= arg1[0x65]
bool z = (temp2 | arg1[0x65]) == 0
bool o = false
uint8_t* edi_2
uint8_t temp0_2
temp0_2, edi_2 = __insb(&arg5[2], edx_2.w, eflags_1)
*edi_2 = temp0_2

if (not(z))
    goto label_4a0d90

void* eax_1
void* esp_9
void* esp_20
void* esp_37
char* esi_5
uint8_t* edi_5
uint16_t* gsbase
bool c_4
bool z_4
uint8_t* edi_7
bool c_1
bool z_1

if (z)
    edi_2[0x6e]
    arg3.b |= edi_2[0x6e]
    o = false
label_4a0d90:
    *(esp_3 - 4) = esp_3
    esp_9 = esp_3 - 4
    esi = __outsd(edx_2.w, *esi, esi, eflags_1)
    
    if (o)
        *arg1 += arg1.b
    label_4a0dde:
        __outsb(edx_2.w, *(gsbase + esi), esi, eflags_1)
        edi_2 = *(esp_9 - 1)
        esi = *(esp_9 + 3)
        void* ebp = *(esp_9 + 7)
        entry_ebx = *(esp_9 + 0xf)
        edx_2 = *(esp_9 + 0x13)
        arg3 = *(esp_9 + 0x17)
        arg1 = *(esp_9 + 0x1b)
        esp_9 += 0x1f
        __bound_gprv_mema32(esp_9, *(ebp + 0x6c))
    label_4a0de6:
        *(arg1 + 0x5000003) ^= entry_ebx
        *entry_ebx += arg3.b
        edx_2 = &edx_2[1]
    label_4a0def:
        uint8_t* edi_6
        uint8_t temp0_8
        temp0_8, edi_6 = __insb(edi_2, edx_2.w, eflags_1)
        *edi_6 = temp0_8
        goto label_4a0df0
    
label_4a0d94:
    *(esp_9 - 4) = 0x886b6365
    eax_1 = &arg1[*arg1]
    *entry_ebx += eax_1.b
    char temp7_1 = *arg3
    *arg3 += edx_2.b
    c_1 = temp7_1 + edx_2.b u< temp7_1
    z_1 = temp7_1 == neg.b(edx_2.b)
    *(esp_9 - 8) = esp_9 - 4
    esp_9 -= 8
    
    if (not(c_1))
        goto label_4a0da2
    
    uint8_t temp0_9
    temp0_9, edi_7 = __insb(edi_2, edx_2.w, eflags_1)
    *edi_7 = temp0_9
label_4a0e05:
    *(eax_1 + 0x3000003) ^= esp_9
    *entry_ebx += edx_2.b
    uint8_t temp0_10
    temp0_10, edi_5 = __insb(&edi_7[1], edx_2.w, eflags_1)
    *edi_5 = temp0_10
    esi_5 = __outsd(edx_2.w, *esi, esi, eflags_1)
    __bound_gprv_mema32(esp_9, *(arg3 + 0x6c))
    *(esp_9 - 4) = entry_ebx
    *(esp_9 - 8) = 0x6374726f
    esp_9 -= 8
    
    if (edi_7 != 0xffffffff)
        esp_37 = 0x4000003
        char temp17_1 = *esi_5
        *esi_5 += arg3.b
        c_4 = temp17_1 + arg3.b u< temp17_1
        z_4 = temp17_1 == neg.b(arg3.b)
        goto label_4a0e96
else
    __outsb(edx_2.w, *esi, esi, eflags_1)
    uint8_t* edi_3
    uint8_t temp0_3
    temp0_3, edi_3 = __insb(edi_2, edx_2.w, eflags_1)
    *edi_3 = temp0_3
    void* eax = &arg1[*arg1]
    *arg3 += eax.b
    char temp10_1 = *entry_ebx
    *entry_ebx += arg3.b
    c_1 = temp10_1 + arg3.b u< temp10_1
    *(esp_3 - 4) = eax
    int32_t edi_4 = *(esp_3 - 4)
    uint16_t* esi_2 = *esp_3
    arg4 = *(esp_3 + 4)
    void* ebx = *(esp_3 + 0xc)
    edx_2 = *(esp_3 + 0x10)
    arg3 = *(esp_3 + 0x14)
    arg1 = *(esp_3 + 0x18)
    entry_ebx = ebx + 1
    z_1 = ebx == 0xffffffff
    uint16_t* esi_3 = __outsd(edx_2.w, *esi_2, esi_2, eflags_1)
    uint16_t* esi_4 = __outsb(edx_2.w, *esi_3, esi_3, eflags_1)
    void* esp_24
    
    if (not(z_1))
        esi = __outsd(edx_2.w, *esi_4, esi_4, eflags_1)
        uint8_t temp0_4
        temp0_4, edi_2 = __insb(edi_4, edx_2.w, eflags_1)
        *edi_2 = temp0_4
        bool cond:3_1
        
        if (add_overflow(ebx, 1))
            char temp14_1 = *arg3
            *arg3 += arg3.b
            bool cond:2_1 = temp14_1 == neg.b(arg3.b)
            cond:3_1 = temp14_1 == neg.b(arg3.b)
            *(esp_3 + 0x18) = esp_3 + 0x1c
            edi_2 = *(esp_3 + 0x18)
            esi = *(esp_3 + 0x1c)
            arg4 = *(esp_3 + 0x20)
            entry_ebx = *(esp_3 + 0x28)
            edx_2 = *(esp_3 + 0x2c)
            arg3 = *(esp_3 + 0x30)
            arg1 = *(esp_3 + 0x34)
            esp_9 = esp_3 + 0x38
            __bound_gprv_mema32(edx_2, *(entry_ebx + 0x68))
            
            if (cond:2_1)
                goto label_4a0d73
        else
            *arg1 += arg1.b
            arg1.b += *arg1
            int32_t temp15_1 = *(arg3 + 0x62) | edx_2
            *(arg3 + 0x62) = temp15_1
            cond:3_1 = temp15_1 == 0
            *(esp_3 + 0x18) = entry_ebx
            *(esp_3 + 0x14) = 0x31746565
            esp_9 = esp_3 + 0x14
        
        void* esp_13
        bool cond:5_1
        
        if (cond:3_1)
            char temp20_1 = *arg3
            *arg3 += arg3.b
            bool cond:4_1 = temp20_1 == neg.b(arg3.b)
            cond:5_1 = temp20_1 + arg3.b s< 0
            *(esp_9 - 4) = esp_9
            edi_2 = *(esp_9 - 4)
            esi = *esp_9
            arg4 = *(esp_9 + 4)
            entry_ebx = *(esp_9 + 0xc)
            edx_2 = *(esp_9 + 0x10)
            arg3 = *(esp_9 + 0x14)
            arg1 = *(esp_9 + 0x18)
            esp_13 = esp_9 + 0x1c
            __bound_gprv_mema32(edx_2, *(entry_ebx + 0x68))
            
            if (not(cond:4_1))
                goto label_4a0d51
        else
            *arg1 += arg1.b
            arg1.b += *arg1
            int32_t temp21_1 = *(arg3 + 0x62) | edx_2
            *(arg3 + 0x62) = temp21_1
            cond:5_1 = temp21_1 s< 0
            *(esp_9 - 4) = entry_ebx
            *(esp_9 - 8) = 0x32746565
            esp_13 = esp_9 - 8
        label_4a0d51:
            bool s
            
            if (cond:5_1)
                char temp27_1 = *arg3
                *arg3 += arg3.b
                bool z_2 = temp27_1 == neg.b(arg3.b)
                s = temp27_1 + arg3.b s< 0
                o = add_overflow(temp27_1, arg3.b)
                *(esp_13 - 4) = esp_13
                edi_2 = *(esp_13 - 4)
                esi = *esp_13
                arg4 = *(esp_13 + 4)
                entry_ebx = *(esp_13 + 0xc)
                edx_2 = *(esp_13 + 0x10)
                arg3 = *(esp_13 + 0x14)
                arg1 = *(esp_13 + 0x18)
                esp_9 = esp_13 + 0x1c
                __bound_gprv_mema32(edx_2, *(entry_ebx + 0x68))
                
                if (z_2)
                    goto label_4a0d94
            else
                *arg1 += arg1.b
                arg1.b += *arg1
                int32_t temp28_1 = *(arg3 + 0x62)
                *(arg3 + 0x62) |= edx_2
                s = (temp28_1 | edx_2) s< 0
                o = false
                *(esp_13 - 4) = entry_ebx
                esp_3 = esp_13 - 4
                *(esp_3 - 4) = 0x33746565
                esp_9 = esp_3 - 4
            
            if (s == o)
                *arg1 += arg1.b
                char* temp5_1 = arg1
                int32_t temp6_1 = *arg1
                arg1 = &arg1[*arg1]
                bool c_2 = &temp5_1[temp6_1] u< temp5_1
                *(arg3 + 0x6e)
                TEB* fsbase
                esi = __outsd(edx_2.w, *(fsbase + esi), esi, eflags_1)
                
                if (temp5_1 != neg.d(temp6_1) && not(c_2))
                    *(edx_2 + 0x6c)
                    goto label_4a0dde
                
                if (not(c_2))
                    goto label_4a0de5
                
                goto label_4a0d73
            
            *edi_2 += arg3.b
            *(esp_9 - 4) = edi_2
            esp_9 -= 4
            *(esi + 0x64)
            arg4 = *(esi + 0x64) * 0x656c776f
            bool c_3 = unimplemented  {imul ebp, dword [esi+0x64], 0x656c776f}
            
            if (not(c_3))
            label_4a0de5:
                uint8_t temp0_7
                temp0_7, edi_2 = __insb(edi_2, edx_2.w, eflags_1)
                *edi_2 = temp0_7
                goto label_4a0de6
            
        label_4a0d73:
            *(esp_9 - 4) = 0x806b6365
            esp_13 = esp_9 - 4
            arg1 = &arg1[*arg1]
            *(entry_ebx + 1) += arg1.b
            *arg3 += arg3.b
            void* temp12_1 = arg4
            arg4 += 1
            
            if (temp12_1 != 0xffffffff)
                esp_24 = esp_13 - 1
            label_4a0df5:
                __bound_gprv_mema32(esp_24 + 0x20, *(*(esp_24 + 8) + 0x6c))
                *(esp_24 + 0x1c) = zx.d(es)
                edi_7 = *(esp_24 + 0x1b)
                esi = *(esp_24 + 0x1f)
                arg4 = *(esp_24 + 0x23)
                entry_ebx = *(esp_24 + 0x2b)
                edx_2 = *(esp_24 + 0x2f)
                arg3 = *(esp_24 + 0x33)
                eax_1 = *(esp_24 + 0x37)
                esp_9 = esp_24 + 0x3b
                __bound_gprv_mema32(esp_9, *(arg4 + 0x6c))
                goto label_4a0e05
            
            esi = __outsd(edx_2.w, *esi, esi, eflags_1)
            entry_ebx += 2
        *(esp_13 - 4) = 0x846b6365
        esp_3 = esp_13 - 4
        arg1 = &arg1[*arg1]
        *entry_ebx += arg1.b
        *edx_2 += arg3.b
        uint8_t* temp16_1 = edi_2
        edi_2 -= 1
        o = add_overflow(temp16_1, 0xffffffff)
        esi = __outsb(edx_2.w, *esi, esi, eflags_1)
        goto label_4a0d90
    
    edi_2 = *(esp_3 + 0x1c)
    esi = *(esp_3 + 0x20)
    arg4 = *(esp_3 + 0x24)
    entry_ebx = *(esp_3 + 0x2c)
    edx_2 = *(esp_3 + 0x30)
    arg3 = *(esp_3 + 0x34)
    eax_1 = *(esp_3 + 0x38)
    esp_9 = esp_3 + 0x3c
label_4a0da2:
    esi = __outsb(edx_2.w, *esi, esi, eflags_1)
    
    if (not(c_1))
        int32_t eax_7 = sx.d(eax_1.w)
        *0x6c420b00 += eax_7.b + (*eax_7).b
    label_4a0df0:
        __outsb(edx_2.w, *(gsbase + esi), esi, eflags_1)
        esp_24 = esp_9 - 1
        goto label_4a0df5
    
    if (z_1)
        if (not(z_1))
            esi = __outsb(edx_2.w, *esi, esi, eflags_1)
            
            if (not(c_1))
                goto label_4a0def
            
            *(esp_9 - 4) = 0x8c6b6365
            void* eax_2 = eax_1 + *eax_1
            *entry_ebx += eax_2.b
            *edx_2 += arg3.b
            edx_2 = &edx_2[1]
            uint8_t temp0_5
            temp0_5, edi_5 = __insb(edi_2, edx_2.w, eflags_1)
            *edi_5 = temp0_5
            __outsb(edx_2.w, *(gsbase + esi), esi, eflags_1)
            entry_ebx += 1
            *(esp_9 - 8) = 0x906b6365
            void* eax_3 = eax_2 + *eax_2
            *(eax_3 * 2) += eax_3.b
            *(esp_9 - 0xc) = esp_9 - 8
            esp_20 = esp_9 - 0xc
            char temp0_6
            temp0_6, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x62), arg4.w)
            *(entry_ebx + 0x62) = temp0_6
            *esp_20
            esi = *(esp_20 + 4)
            *(esp_20 + 8)
            *(esp_20 + 0x10)
            edx_2 = *(esp_20 + 0x14)
            *(esp_20 + 0x18)
            arg1 = *(esp_20 + 0x1c)
            esp_9 = esp_20 + 0x20
            *0x6c420b00 += arg1.b + (*arg1).b
            goto label_4a0dde
        
        char temp0_11
        temp0_11, eflags_1 = __arpl_memw_gpr16(*(arg4 + 0x74), esi.w)
        *(arg4 + 0x74) = temp0_11
*(esp_9 - 4) = 0xa46b6365
*(entry_ebx + 1) += eax_1.b + (*eax_1).b
char temp18_1 = *(esp_9 - 4 + (edx_2 << 1))
*(esp_9 - 4 + (edx_2 << 1)) += arg3.b
c_4 = temp18_1 + arg3.b u< temp18_1
z_4 = temp18_1 == neg.b(arg3.b)
edi_5 = *(esp_9 - 4)
esi_5 = *esp_9
arg4 = *(esp_9 + 4)
entry_ebx = *(esp_9 + 0xc)
edx_2 = *(esp_9 + 0x10)
arg3 = *(esp_9 + 0x14)
eax_1 = *(esp_9 + 0x18)
esp_37 = esp_9 + 0x1c

if (not(c_4))
    goto label_4a0e96

z_4 = edx_2 == 0xffffffff
edi_5 = *esp_37
esi_5 = *(esp_37 + 4)
arg4 = *(esp_37 + 8)
entry_ebx = *(esp_37 + 0x10)
edx_2 = *(esp_37 + 0x14)
arg3 = *(esp_37 + 0x18)
eax_1 = *(esp_37 + 0x1c)
void* esp_33 = esp_37 + 0x20
void* esp_35
int32_t* edi_9

if (c_4)
    while (true)
        if (z_4)
            goto label_4a0ee3
        
        esi_5 = __outsb(edx_2.w, *esi_5, esi_5, eflags_1)
        eax_1:1.b = 3
        *eax_1 += eax_1.b
        __bound_gprv_mema32(esp_33, *(arg4 + 0x6c))
        __bound_gprv_mema32(esp_33, *(arg4 + 0x6c))
        int32_t eax_12
        eax_12.b = (((eax_1 + 0x614c0600) ^ 0x3b8) + 0x614c0600).b ^ 0xbc
        eax_1 = eax_12 + *eax_12
        char temp24_1 = *(eax_1 * 2)
        *(eax_1 * 2) += eax_1.b
        c_4 = temp24_1 + eax_1.b u< temp24_1
        z_4 = temp24_1 == neg.b(eax_1.b)
        int16_t cs
        *(esp_33 - 4) = zx.d(cs)
        esp_37 = esp_33 - 4
    label_4a0e96:
        *(esp_37 - 4) = esi_5
        esp_35 = esp_37 - 4
    label_4a0e97:
        esi_5 = __outsd(edx_2.w, *esi_5, esi_5, eflags_1)
        uint8_t temp0_15
        temp0_15, edi_9 = __insb(edi_5, edx_2.w, eflags_1)
        *edi_9 = temp0_15
        
        if (not(z_4))
            *esp_35
            *(esp_35 + 4)
            arg4 = *(esp_35 + 8)
            entry_ebx = *(esp_35 + 0x10)
            *(esp_35 + 0x14)
            *(esp_35 + 0x18)
            *(esp_35 + 0x1c)
            esp_33 = esp_35 + 0x20
            goto label_4a0f09
        
        *(esp_35 - 4) = esp_35
        esp_33 = esp_35 - 4
        
        if (c_4)
            *(esp_33 - 4) = esi_5
            esp_33 -= 4
            goto label_4a0f01
        
        char temp0_16
        temp0_16, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x62), arg4.w)
        *(entry_ebx + 0x62) = temp0_16
    label_4a0ea2:
        edi_5 = *esp_33
        esi_5 = *(esp_33 + 4)
        arg4 = *(esp_33 + 8)
        entry_ebx = *(esp_33 + 0x10)
        edx_2 = *(esp_33 + 0x14)
        arg3 = *(esp_33 + 0x18)
        eax_1 = *(esp_33 + 0x1c)
        esp_33 += 0x20
        
        if (not(c_4))
            void* eax_13 = eax_1 + *eax_1
            *0x614c0600 += eax_13.b
            __bound_gprv_mema32(esp_33, *(arg4 + 0x6c))
            eax_1 = eax_13 ^ *esi_5
            goto label_4a0eb2
        
        *(esp_33 - 4) = esi_5
        esp_33 -= 4
    label_4a0e66:
        esi_5 = __outsd(edx_2.w, *esi_5, esi_5, eflags_1)
        uint8_t temp0_14
        temp0_14, edi_5 = __insb(edi_5, edx_2.w, eflags_1)
        *edi_5 = temp0_14
        *(esp_33 - 4) = eax_1
        esp_33 -= 4
        
        if (c_4)
            goto label_4a0ed0
        
        if (z_4 || c_4)
            break
        
        if (not(z_4) && not(c_4))
            goto label_4a0eb2
        
        if (not(z_4))
            goto label_4a0ee6
    
    goto label_4a0ed6

*(esp_33 - 4) = 0xa86b6365
esp_20 = esp_33 - 4
eax_1 += *eax_1
*entry_ebx += eax_1.b
char temp25_1 = *esi_5
*esi_5 += arg3.b
c_4 = temp25_1 + arg3.b u< temp25_1
char* temp26_1 = arg3
arg3 = &arg3[1]
z_4 = temp26_1 == 0xffffffff

if (not(z_4))
    *(esp_20 - 4) = zx.d(es)
    esp_33 = esp_20 - 4
label_4a0eb2:
    *esi_5 += edx_2.b
    goto label_4a0eb4

esi_5 = __outsd(edx_2.w, *esi_5, esi_5, eflags_1)
*(esp_20 - 4) = entry_ebx
esp_33 = esp_20 - 4

if (z_4)
    goto label_4a0ea2

bool o_3

if (c_4)
    edx_2 -= 1
    uint8_t temp38_1 = *edi_5
    *edi_5 += arg3.b
    c_4 = temp38_1 + arg3.b u< temp38_1
    void* temp39_1 = eax_1
    eax_1 -= 1
    z_4 = temp39_1 == 1
    o_3 = add_overflow(temp39_1, 0xffffffff)
else
    entry_ebx += 1
    *(esp_33 - 4) = 0xac6b6365
    eax_1 += *eax_1
    *entry_ebx += eax_1.b
    char temp40_1 = *arg3
    *arg3 += arg3.b
    c_4 = temp40_1 + arg3.b u< temp40_1
    z_4 = temp40_1 == neg.b(arg3.b)
    *(esp_33 - 8) = esp_33 - 4
    esp_35 = esp_33 - 8
    
    if (not(c_4))
        if (temp40_1 + arg3.b s>= 0)
            goto label_4a0e97
        
        *(esp_35 - 4) = 0xb06b6365
        eax_1 += *eax_1
        *esi_5 += eax_1.b
        char temp45_1 = *esi_5
        *esi_5 += edx_2.b
        c_4 = temp45_1 + edx_2.b u< temp45_1
        z_4 = temp45_1 == neg.b(edx_2.b)
        *(esp_35 - 8) = entry_ebx
        esp_33 = esp_35 - 8
        
        if (not(add_overflow(temp45_1, edx_2.b)))
            char temp0_13
            temp0_13, eflags_1 = __arpl_memw_gpr16(*(gsbase + eax_1 + 0x56), arg4.w)
            *(gsbase + eax_1 + 0x56) = temp0_13
            goto label_4a0e66
        
        char temp0_19
        temp0_19, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x16), arg4.w)
        *(entry_ebx + 0x16) = temp0_19
        *(eax_1 + 0xf004a0f) += edx_2:1.b
        goto label_4a0ed0
    
    int16_t ss
    *(esp_35 - 4) = zx.d(ss)
    esp_33 = esp_35 - 4
label_4a0eb4:
    char temp37_1 = *(edi_5 + arg3 + 0x480f004a)
    *(edi_5 + arg3 + 0x480f004a) += entry_ebx.b
    c_4 = temp37_1 + entry_ebx.b u< temp37_1
    z_4 = temp37_1 == neg.b(entry_ebx.b)
    o_3 = add_overflow(temp37_1, entry_ebx.b)

uint8_t temp0_17
temp0_17, edi_9 = __insb(edi_5, edx_2.w, eflags_1)
*edi_9 = temp0_17

if (o_3)
    goto label_4a0f01

bool c_8

if (not(z_4))
    *edi_9
    arg3 = 0
    bool c_7 = unimplemented  {imul ecx, dword [edi], 0x0}
    *eax_1 = adc.b(*eax_1, 0x4a, c_7)
label_4a0f3b:
    char temp48_1 = *eax_1
    *eax_1 += arg3.b
    c_8 = temp48_1 + arg3.b u< temp48_1
    goto label_4a0f3e

if (z_4)
label_4a0f32:
    uint8_t temp0_28
    temp0_28, edi_9 = __insb(edi_9, edx_2.w, eflags_1)
    *edi_9 = temp0_28
    esp_33 = *(entry_ebx + 0x6b) * 0x1080000f
    edx_2 -= 1
    goto label_4a0f3b

esi_5 = __outsb(edx_2.w, *esi_5, esi_5, eflags_1)
entry_ebx += 1
uint8_t temp0_18
temp0_18, edi_5 = __insb(edi_9, edx_2.w, eflags_1)
*edi_5 = temp0_18
esp_33 = *(entry_ebx + 0x6b) * 0xfb00016
edx_2 -= 1
*edi_5 += arg3.b
label_4a0ed0:
edx_2 = &edx_2[1]
uint8_t temp0_20
temp0_20, edi_5 = __insb(edi_5, edx_2.w, eflags_1)
*edi_5 = temp0_20
esi_5 = __outsb(edx_2.w, *(gsbase + esi_5), esi_5, eflags_1)
entry_ebx += 1
label_4a0ed6:
*(esp_33 - 4) = 0x436b6365
uint8_t temp0_21
temp0_21, edi_5 = __insb(edi_5, edx_2.w, eflags_1)
*edi_5 = temp0_21
esp_33 = *(entry_ebx + 0x6b) * 0x1064001a
label_4a0ee3:
edx_2 -= 1
char temp23_1 = *entry_ebx
*entry_ebx += edx_2.b
c_4 = temp23_1 + edx_2.b u< temp23_1
label_4a0ee6:
edx_2 = &edx_2[1]
char* edi_10
uint8_t temp0_22
temp0_22, edi_10 = __insb(edi_5, edx_2.w, eflags_1)
*edi_10 = temp0_22
void* esi_8 = __outsb(edx_2.w, *(gsbase + esi_5), esi_5, eflags_1)
*(esp_33 - 4) = esp_33
esp_33 -= 4
uint16_t* esi_10

if (c_4)
    esi_10 = __outsd(edx_2.w, *(esi_8 + 1), esi_8 + 1, eflags_1)
    
    if (not(c_4))
        goto label_4a0f53
    
    *(eax_1 * 9 + 0x1b25c74) += eax_1.b
label_4a0fcf:
    (*(**(entry_ebx + 0x390) + 0x68))()
    goto label_4a0fe0

char temp0_23
temp0_23, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x62), arg4.w)
*(entry_ebx + 0x62) = temp0_23
edi_9 = *esp_33
esi_5 = *(esp_33 + 4)
arg4 = *(esp_33 + 8)
entry_ebx = *(esp_33 + 0x10)
edx_2 = *(esp_33 + 0x14)
arg3 = *(esp_33 + 0x18)
eax_1 = *(esp_33 + 0x1c)
esp_33 += 0x20

if (c_4)
    char temp35_1 = *(eax_1 + 0x8004a10)
    *(eax_1 + 0x8004a10) += eax_1.b
    c_8 = temp35_1 + eax_1.b u< temp35_1
label_4a0f3e:
    esi_10 = __outsd(edx_2.w, *(esi_5 + 1), &esi_5[1], eflags_1)
    
    if (c_8)
        goto label_4a0fb0
    
    *(esp_33 - 4) = entry_ebx
    *(esp_33 - 8) = 0x540d776f
    *(esp_33 - 0xc) = entry_ebx
    esp_33 -= 0xc
    
    if (esi_5 == 0xffffffff)
        *eax_1 += eax_1.b
    else
        arg4 = *(esi_10 + 0x67) * 0x726f4673
    label_4a0f52:
        char temp0_29
        temp0_29, edi_10 = __insd(edi_9, edx_2.w, eflags_1)
        *edi_10 = temp0_29
    label_4a0f53:
        *esp_33
        esp_33 += 2
        *((edx_2 << 2) + 0xd8080047) += eax_1.b
        edi_9 = &edi_10[1]
        char temp34_1 = *(eax_1 + 0x380047d1)
        *(eax_1 + 0x380047d1) += arg3:1.b
        
        if (temp34_1 s>= neg.b(arg3:1.b))
            edx_2[0x4adc0047] += eax_1:1.b
            goto label_4a0f6b
        
        eax_1.b += arg3:1.b
        *esp_33
        esp_33 += 2
        entry_ebx += 1
    label_4a0fb0:
        *(esp_33 - 4) = entry_ebx
        esp_33 -= 4
        entry_ebx = eax_1
    label_4a0fbb:
        eax_1, edx_2 = (*(**(entry_ebx + 0x38c) + 0xd8))()
    
    if (eax_1.b != 0)
        edx_2.b = 1
        goto label_4a0fcf
    
    (*(**(entry_ebx + 0x390) + 0x68))()
    sub_42b2b0(*(*(entry_ebx + 0x394) + 0x68), 0xff000015)
    sub_42b2b0(*(*(entry_ebx + 0x398) + 0x68), 0xff000015)
    int32_t eax_36 = sub_47382c(*data_4ac0ac, 0)
    *esp_33
    return eax_36

*(esp_33 - 4) = 0x65676e61
esp_33 -= 4
eax_1 = sbb.d(eax_1, *eax_1, c_4)
arg7 f- fconvert.t(*eax_1)
edx_2 -= 1
char temp36_1 = esi_5[edx_2 << 1]
esi_5[edx_2 << 1] += edx_2.b
c_4 = temp36_1 + edx_2.b u< temp36_1
z_4 = temp36_1 == neg.b(edx_2.b)
label_4a0f01:
esi_10 = __outsd(edx_2.w, *esi_5, esi_5, eflags_1)
uint8_t temp0_24
temp0_24, edi_9 = __insb(edi_9, edx_2.w, eflags_1)
*edi_9 = temp0_24
bool z_5

if (not(z_4))
    eax_1 += 1
    *(eax_1 + 0xf) += entry_ebx:1.b
label_4a0f76:
    edx_2 -= 1
    *edi_9 += eax_1.b
    char* eax_15 = eax_1 | 0x74655354
    
    if (eax_15 == 0)
        *eax_15 += eax_15.b
    label_4a0ff3:
        sub_42b2b0(*(eax_15 + 0x68), 0xff000008)
        sub_47382c(*data_4ac0ac, 1)
        edx_2 = zx.d(*(*(entry_ebx + 0x390) + 0x270))
    else
        uint16_t* esi_13 = __outsb(edx_2.w, *esi_10, esi_10, eflags_1)
        
        if (eax_15 u>= 0)
            *eax_15
            *(entry_ebx + 0x6851ff08) += arg3.b
        label_4a0fe0:
            sub_42b2b0(*(*(entry_ebx + 0x394) + 0x68), 0xff000008)
            eax_15 = *(entry_ebx + 0x398)
            goto label_4a0ff3
        
        esi_10 = __outsd(edx_2.w, *esi_13, esi_13, eflags_1)
        
        if (eax_15 u< 0)
            goto label_4a0ff9
        
        eax_1, edx_2, arg3 = 0xa44a5997()
    label_4a0f8c:
        *edi_9 = *esi_10
        esi_10 = &esi_10[2] + 1
        *eax_1 += arg3:1.b
        char temp44_1 = *(entry_ebx + 0x65)
        *(entry_ebx + 0x65) |= edx_2:1.b
        z_5 = (temp44_1 | edx_2:1.b) == 0
    label_4a0f94:
        
        if (not(z_5))
            *(esi_10 + 0x67)
            return eax_1
        
        *eax_1 += eax_1.b
        edx_2 = zx.d(*(eax_1 + 0x270))
else
    *(esp_33 - 4) = esp_33
    esp_33 -= 4
    bool c_6
    
    if (c_4)
        edx_2 -= 1
    label_4a0f6b:
        entry_ebx += 1
        char temp42_1 = eax_1.b
        char temp43_1 = eax_1.b
        eax_1.b *= 2
        c_6 = temp42_1 + temp43_1 u< temp42_1
    label_4a0f6e:
        
        if (c_6)
            goto label_4a0fbb
        
        *(arg4 + 0xf780040) += arg3.b
        goto label_4a0f76
    
label_4a0f09:
    char temp0_25
    temp0_25, eflags_1 = __arpl_memw_gpr16(*(entry_ebx + 0x62), arg4.w)
    *(entry_ebx + 0x62) = temp0_25
    edi_9 = *esp_33
    esi_10 = *(esp_33 + 4)
    arg4 = *(esp_33 + 8)
    entry_ebx = *(esp_33 + 0x10)
    edx_2 = *(esp_33 + 0x14)
    arg3 = *(esp_33 + 0x18)
    eax_1 = *(esp_33 + 0x1c)
    esp_33 += 0x20
    
    if (c_4)
        goto label_4a0f52
    
    *(esp_33 - 4) = 0x65676e61
    *eax_1
    eax_1.b &= *eax_1
    char temp31_1 = *edx_2
    *edx_2 = adc.b(temp31_1, arg3.b, false)
    bool c_5 = adc.b(temp31_1, arg3.b, false) u< temp31_1
    char* temp32_1 = edx_2
    int32_t temp33_1 = *(entry_ebx + 0x70)
    edx_2 = sbb.d(temp32_1, temp33_1, c_5)
    c_6 = unimplemented  {sbb edx, dword [ebx+0x70]}
    z_5 = sbb.d(temp32_1, temp33_1, c_5) == 0
    char temp0_26
    temp0_26, eflags_1 = __arpl_memw_gpr16(*(gsbase + eax_1 + 0x56), arg4.w)
    *(gsbase + eax_1 + 0x56) = temp0_26
    esi_10 = __outsd(edx_2.w, *esi_10, esi_10, eflags_1)
    uint8_t temp0_27
    temp0_27, edi_9 = __insb(edi_9, edx_2.w, eflags_1)
    *edi_9 = temp0_27
    *(esp_33 - 8) = eax_1
    esp_33 -= 8
    
    if (c_6)
        goto label_4a0f8c
    
    if (not(z_5) && not(c_6))
        if (not(z_5) && not(c_6))
            goto label_4a0f6e
        
        if (not(z_5))
            edx_2[0xa] += entry_ebx:1.b
            return sub_4773c4(eax_1, edx_2)
        
        if (not(z_5))
            esi_5 = __outsb(edx_2.w, *esi_10, esi_10, eflags_1)
            entry_ebx += 1
            goto label_4a0f32
        
        *(entry_ebx + 0xaba00) += arg3.b
        *eax_1 += eax_1.b
        return sub_4773c4(eax_1, edx_2 - 1)
    
    if (c_6)
        goto label_4a0f94
    
label_4a0ff9:
    eax_1.b = *esi_10
    *edx_2 = ror.b(*edx_2, 0x8b)
    edx_2[0x2826e801] += edx_2:1.b
    *(entry_ebx + 0x39083) -= 1
    char temp47_1 = *edi_9
    *edi_9 += arg3.b
    edx_2:1.b = 0x90
    
    if (not(add_overflow(temp47_1, arg3.b)))
        *eax_1 += eax_1.b
int32_t eax_28 = sub_473840(*data_4ac0ac, edx_2.b)
*esp_33
return eax_28
