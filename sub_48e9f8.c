// 函数: sub_48e9f8
// 地址: 0x48e9f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_2
int32_t __saved_edi_1 = __saved_edi_2
int32_t __saved_edi
int32_t* esp_1 = &__saved_edi
int32_t var_3c = *arg2
int32_t var_38
int32_t* edi = &var_38
void* esi_1 = &arg2[1]
*edi = *esi_1
void* edi_1 = &edi[1]
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
char var_9 = arg1
int32_t* eax
int32_t* var_8 = eax

if (arg4 == 0 || arg4[2] == 0)
    return 

int32_t edx
eax, edx = sub_406cb8(&var_3c)

if (eax.b != 0)
    return 

int32_t var_1c = arg4[2]
int32_t var_20 = 0
int32_t var_24 = 0
int32_t var_34
int32_t var_14 = var_34 - var_3c
int32_t var_30
int32_t var_18 = var_30 - var_38

if ((arg3 & 0x1000) == 0x1000 && (*(*data_4ac21c + 0x3c) & 1) != 0)
    char eax_11
    eax_11, edx, ebp = sub_48aff4()
    
    if (eax_11 u< 9)
        *(ebp - 0x21) = 0

*(ebp - 0x22) = (arg3 & 4) == 4

switch (zx.d(*(ebp - 5)))
    case 0, 1
        sub_406c1c(ebp[-4], 0, 0, &ebp[-0x16], ebp[-5])
        esp_1 = &__saved_edi
    case 2, 3
        int32_t eax_16 = ebp[-5]
        int32_t eax_17 = eax_16 s>> 1
        bool c_1 = unimplemented  {sar eax, 0x1}
        
        if (eax_16 s>> 1 s< 0)
            eax_17 = adc.d(eax_17, 0, c_1)
        
        int32_t ecx_1 = ebp[-4]
        int32_t ecx_2 = ecx_1 s>> 1
        bool c_2 = unimplemented  {sar ecx, 0x1}
        
        if (ecx_1 s>> 1 s< 0)
            ecx_2 = adc.d(ecx_2, 0, c_2)
        
        int32_t edx_1 = ebp[-5]
        edx = edx_1 s>> 1
        bool c_3 = unimplemented  {sar edx, 0x1}
        
        if (edx_1 s>> 1 s< 0)
            edx = adc.d(edx, 0, c_3)
        
        int32_t eax_19 = ebp[-4]
        int32_t eax_20 = eax_19 s>> 1
        bool c_4 = unimplemented  {sar eax, 0x1}
        
        if (eax_19 s>> 1 s< 0)
            eax_20 = adc.d(eax_20, 0, c_4)
        
        sub_406c1c(ecx_2, edx, eax_20, &ebp[-0x16], eax_17)
        esp_1 = &__saved_edi
    case 4
        int32_t var_c0_3 = 1
        sub_406c1c(1, 0, 0, &ebp[-0x16], 1)
        esp_1 = &__saved_edi
    case 5
        int32_t var_c0_4 = 0
        sub_406c1c(ebp[-4] + 1, 1, ebp[-4], &ebp[-0x16], 0)
        esp_1 = &__saved_edi
    case 6
        sub_406c1c(0, ebp[-5], 1, &ebp[-0x16], ebp[-5] + 1)
        esp_1 = &__saved_edi
    case 7
        sub_406c1c(ebp[-4] + 1, ebp[-5], ebp[-4], &ebp[-0x16], ebp[-5] + 1)
        esp_1 = &__saved_edi
    case 8
        int32_t var_c0_7 = 1
        sub_406c1c(1, 0, 0, &ebp[-0x16], 1)
        esp_1 = &__saved_edi
    case 9
        int32_t var_c0_8 = 0
        sub_406c1c(ebp[-4] + 1, 0, ebp[-4], &ebp[-0x16], 0)
        esp_1 = &__saved_edi

int32_t* esi_5

if (*(ebp - 0x22) == 0)
    esi_5 = ebp[-1]
    
    if ((arg3 & 1) == 1)
        if (ebp[2] != 0)
            int32_t y2 = zx.d(sub_40795c(ebp[2])) + ebp[-0xb]
            uint32_t ebx_1 = zx.d(ebp[2].w)
            int32_t x2 = ebx_1 + ebp[-0xc]
            int32_t y1 = zx.d(sub_40795c(ebp[2])) + ebp[-0xd]
            ebp[-8] = CreateRectRgn(ebx_1 + ebp[-0xe], y1, x2, y2)
        else
            ebp[-8] = CreateRectRgnIndirect(&ebp[-0xe])
        
        SelectClipRgn(sub_42c73c(esi_5), ebp[-8])
        esp_1 = &__saved_edi
    
    sub_406cd0(&ebp[-0x16], ebp[-0xe], ebp[-0xd])
else
    edx.b = 1
    ebp[-7] = sub_430618(sub_42a104+0x140, edx)
    ebp[-5]
    (*(*ebp[-7] + 0x34))()
    void arg_4
    esp_1 = &arg_4
    ebp[-4]
    (*(*ebp[-7] + 0x40))()
    esi_5 = sub_430bec(ebp[-7])

*(esp_1 - 4) = ebp
*(esp_1 - 8) = j_sub_40443c
TEB* fsbase
*(esp_1 - 0xc) = fsbase->NtTib.ExceptionList
void* esp_4 = esp_1 - 0xc
fsbase->NtTib.ExceptionList = esp_4

if (*(ebp - 0x21) != 0)
    *(esp_4 - 4) = 0
    *(esp_4 - 8) = ebp[4]
    *(esp_4 - 0xc) = sub_42c73c(esi_5)
    SelectPalette()
    *(esp_4 - 4) = sub_42c73c(esi_5)
    RealizePalette()

sub_42bcec(esi_5[5], 0)
sub_42b99c(esi_5[4], 5)

if (*(ebp - 5) != 0)
    int32_t i = ebp[-6] - 1
    
    if (i s>= 0)
        do
            *(esp_4 - 4) = esi_5
            ebp[-0x12] = ebp[-0x16]
            void* edi_16 = &ebp[-0x11]
            void* esi_18 = &ebp[-0x15]
            *edi_16 = *esi_18
            void* edi_17 = edi_16 + 4
            void* esi_19 = esi_18 + 4
            *edi_17 = *esi_19
            *(edi_17 + 4) = *(esi_19 + 4)
            esi_5 = *(esp_4 - 4)
            int32_t eax_90 = sub_41a0f4(ebp[5], i)
            
            if (*(ebp - 0x21) == 0)
                sub_42bbb0(esi_5[5], eax_90)
            else
                *(esp_4 - 4) = sub_4079a0(eax_90)
                *(esp_4 - 8) = sub_40799c(eax_90)
                int32_t eax_96 = sub_40797c(eax_90.b, (*(esp_4 - 8)).b, (*(esp_4 - 4)).b)
                sub_42bbb0(esi_5[5], eax_96)
            
            switch (zx.d(*(ebp - 5)))
                case 1
                    *(esp_4 - 4) = ebp[-6]
                    *(esp_4 - 8) = ebp[-5]
                    *(esp_4 - 0xc) = i + 1
                    *(esp_4 - 4) = MulDiv() + ebp[-0x11]
                    *(esp_4 - 8) = &ebp[-0x1a]
                    *(esp_4 - 0xc) = ebp[-6]
                    *(esp_4 - 0x10) = ebp[-5]
                    *(esp_4 - 0x14) = i
                    int32_t edx_16 = MulDiv() + ebp[-0x11]
                    sub_406c1c(ebp[-0x10], edx_16, ebp[-0x12])
                    *(esp_4 - 4) = esi_5
                    ebp[-0x12] = ebp[-0x1a]
                    void* edi_22 = &ebp[-0x11]
                    void* esi_23 = &ebp[-0x19]
                    *edi_22 = *esi_23
                    void* edi_23 = edi_22 + 4
                    void* esi_24 = esi_23 + 4
                    *edi_23 = *esi_24
                    *(edi_23 + 4) = *(esi_24 + 4)
                    esi_5 = *(esp_4 - 4)
                    int32_t eax_111
                    eax_111, ebp = sub_42bc04(esi_5[5])
                    *(esp_4 - 4) = eax_111
                    *(esp_4 - 8) = &ebp[-0x12]
                    *(esp_4 - 0xc) = sub_42c73c(esi_5)
                    FillRect()
                case 2
                    *(esp_4 - 4) = ebp[-6]
                    *(esp_4 - 8) = ebp[-4]
                    *(esp_4 - 0xc) = i + 1
                    int32_t eax_118 = MulDiv()
                    int32_t edi_27 = eax_118 s>> 1
                    bool c_5 = unimplemented  {sar edi, 0x1}
                    
                    if (eax_118 s>> 1 s< 0)
                        edi_27 = adc.d(edi_27, 0, c_5)
                    
                    *(esp_4 - 4) = ebp[-6]
                    *(esp_4 - 8) = ebp[-5]
                    *(esp_4 - 0xc) = i + 1
                    int32_t eax_122 = MulDiv()
                    int32_t eax_123 = eax_122 s>> 1
                    bool c_6 = unimplemented  {sar eax, 0x1}
                    
                    if (eax_122 s>> 1 s< 0)
                        eax_123 = adc.d(eax_123, 0, c_6)
                    
                    ebp[-3] = eax_123
                    *(esp_4 - 4) = ebp[-0x11] + ebp[-3] + 2
                    *(esp_4 - 8) = ebp[-0x12] + edi_27 + 2
                    *(esp_4 - 0xc) = ebp[-0x11] - ebp[-3]
                    *(esp_4 - 0x10) = ebp[-0x12] - edi_27
                    *(esp_4 - 0x14) = sub_42c73c(esi_5)
                    Rectangle()
                case 3
                    *(esp_4 - 4) = ebp[-6]
                    *(esp_4 - 8) = ebp[-4]
                    *(esp_4 - 0xc) = i + 1
                    ebp[-0x1b] = MulDiv()
                    int32_t eax_140 = sub_403370(float.t(ebp[-0x1b]) / data_48f27c)
                    *(esp_4 - 4) = ebp[-6]
                    *(esp_4 - 8) = ebp[-5]
                    *(esp_4 - 0xc) = i + 1
                    ebp[-0x1b] = MulDiv()
                    ebp[-3] = sub_403370(float.t(ebp[-0x1b]) / data_48f27c)
                    *(esp_4 - 4) = ebp[-0x11] + ebp[-3]
                    *(esp_4 - 8) = ebp[-0x12] + eax_140
                    *(esp_4 - 0xc) = ebp[-0x11] - ebp[-3]
                    *(esp_4 - 0x10) = ebp[-0x12] - eax_140
                    *(esp_4 - 0x14) = sub_42c73c(esi_5)
                    Ellipse()
                case 4, 5, 6, 7
                    *(esp_4 - 4) = ebp[-6]
                    *(esp_4 - 8) = ebp[-4]
                    *(esp_4 - 0xc) = i + 1
                    int32_t eax_159 = MulDiv()
                    *(esp_4 - 4) = ebp[-6]
                    *(esp_4 - 8) = ebp[-5]
                    *(esp_4 - 0xc) = i + 1
                    ebp[-3] = MulDiv()
                    char eax_164 = *(ebp - 5)
                    
                    if (eax_164 == 4)
                        *(esp_4 - 4) = ebp[-0xf] + ebp[-3]
                        *(esp_4 - 8) = eax_159 + ebp[-0x10]
                        *(esp_4 - 0xc) = ebp[-0x11]
                        *(esp_4 - 0x10) = ebp[-0x12]
                        *(esp_4 - 0x14) = sub_42c73c(esi_5)
                        Rectangle()
                    else if (eax_164 == 5)
                        *(esp_4 - 4) = ebp[-0xf]
                        *(esp_4 - 8) = ebp[-0x10]
                        *(esp_4 - 0xc) = ebp[-0x11] + ebp[-3]
                        *(esp_4 - 0x10) = ebp[-0x12] - eax_159
                        *(esp_4 - 0x14) = sub_42c73c(esi_5)
                        Rectangle()
                    else if (eax_164 == 6)
                        *(esp_4 - 4) = ebp[-0xf]
                        *(esp_4 - 8) = ebp[-0x10]
                        *(esp_4 - 0xc) = ebp[-0x11] - ebp[-3]
                        *(esp_4 - 0x10) = eax_159 + ebp[-0x12]
                        *(esp_4 - 0x14) = sub_42c73c(esi_5)
                        Rectangle()
                    else if (eax_164 == 7)
                        *(esp_4 - 4) = ebp[-0xf]
                        *(esp_4 - 8) = ebp[-0x10]
                        *(esp_4 - 0xc) = ebp[-0x11] - ebp[-3]
                        *(esp_4 - 0x10) = ebp[-0x12] - eax_159
                        *(esp_4 - 0x14) = sub_42c73c(esi_5)
                        Rectangle()
                case 8, 9
                    *(esp_4 - 4) = ebp[-6]
                    *(esp_4 - 8) = ebp[-4]
                    *(esp_4 - 0xc) = i + 1
                    int32_t edi_33 = MulDiv() * 2
                    *(esp_4 - 4) = ebp[-6]
                    *(esp_4 - 8) = ebp[-5]
                    *(esp_4 - 0xc) = i + 1
                    ebp[-3] = MulDiv() * 2
                    char eax_202 = *(ebp - 5)
                    
                    if (eax_202 == 8)
                        sub_406c38(ebp[-0x12], ebp[-0x11], &ebp[-0x25])
                        ebp[-0x23] = ebp[-0x25]
                        ebp[-0x22] = ebp[-0x24]
                        sub_406c38(ebp[-0x12] + edi_33, ebp[-0x11], &ebp[-0x27])
                        ebp[-0x21] = ebp[-0x27]
                        ebp[-0x20] = ebp[-0x26]
                        sub_406c38(ebp[-0x12], ebp[-0xf] + ebp[-3], &ebp[-0x29])
                        ebp[-0x1f] = ebp[-0x29]
                        ebp[-0x1e] = ebp[-0x28]
                        sub_406c38(ebp[-0x12] - edi_33, ebp[-0xf] + ebp[-3], &ebp[-0x2b])
                        ebp[-0x1d] = ebp[-0x2b]
                        ebp[-0x1c] = ebp[-0x2a]
                        sub_42c35c(esi_5, &ebp[-0x23], 3)
                    else if (eax_202 == 9)
                        sub_406c38(ebp[-0x10], ebp[-0x11], &ebp[-0x25])
                        ebp[-0x23] = ebp[-0x25]
                        ebp[-0x22] = ebp[-0x24]
                        sub_406c38(ebp[-0x10] - edi_33, ebp[-0x11], &ebp[-0x27])
                        ebp[-0x21] = ebp[-0x27]
                        ebp[-0x20] = ebp[-0x26]
                        sub_406c38(ebp[-0x10], ebp[-0xf] + ebp[-3], &ebp[-0x29])
                        ebp[-0x1f] = ebp[-0x29]
                        ebp[-0x1e] = ebp[-0x28]
                        sub_406c38(ebp[-0x10] + edi_33, ebp[-0xf] + ebp[-3], &ebp[-0x2b])
                        ebp[-0x1d] = ebp[-0x2b]
                        ebp[-0x1c] = ebp[-0x2a]
                        sub_42c35c(esi_5, &ebp[-0x23], 3)
            
            i -= 1
        while (i != 0xffffffff)
else
    int32_t eax_61 = ebp[-6] - 1
    
    if (eax_61 s>= 0)
        ebp[-0xa] = eax_61 + 1
        int32_t ebx_3 = 0
        int32_t i_1
        
        do
            *(esp_4 - 4) = esi_5
            ebp[-0x12] = ebp[-0x16]
            void* edi_5 = &ebp[-0x11]
            void* esi_7 = &ebp[-0x15]
            *edi_5 = *esi_7
            void* edi_6 = edi_5 + 4
            void* esi_8 = esi_7 + 4
            *edi_6 = *esi_8
            *(edi_6 + 4) = *(esi_8 + 4)
            void* esi_11 = *(esp_4 - 4)
            int32_t eax_64 = sub_41a0f4(ebp[5], ebx_3)
            
            if (*(ebp - 0x21) == 0)
                sub_42bbb0(*(esi_11 + 0x14), eax_64)
            else
                *(esp_4 - 4) = sub_4079a0(eax_64)
                *(esp_4 - 8) = sub_40799c(eax_64)
                int32_t eax_70 = sub_40797c(eax_64.b, (*(esp_4 - 8)).b, (*(esp_4 - 4)).b)
                sub_42bbb0(*(esi_11 + 0x14), eax_70)
            
            *(esp_4 - 4) = ebp[-0xf]
            *(esp_4 - 8) = &ebp[-0x1a]
            *(esp_4 - 0xc) = ebp[-6]
            *(esp_4 - 0x10) = ebp[-4]
            *(esp_4 - 0x14) = ebx_3 + 1
            *(esp_4 - 0xc) = MulDiv() + ebp[-0x12]
            *(esp_4 - 0x10) = ebp[-6]
            *(esp_4 - 0x14) = ebp[-4]
            *(esp_4 - 0x18) = ebx_3
            int32_t eax_83 = MulDiv() + ebp[-0x12]
            sub_406c1c(*(esp_4 - 0xc), ebp[-0x11], eax_83)
            *(esp_4 - 4) = esi_11
            ebp[-0x12] = ebp[-0x1a]
            void* edi_11 = &ebp[-0x11]
            void* esi_13 = &ebp[-0x19]
            *edi_11 = *esi_13
            void* edi_12 = edi_11 + 4
            void* esi_14 = esi_13 + 4
            *edi_12 = *esi_14
            *(edi_12 + 4) = *(esi_14 + 4)
            esi_5 = *(esp_4 - 4)
            int32_t eax_85
            eax_85, ebp = sub_42bc04(esi_5[5])
            *(esp_4 - 4) = eax_85
            *(esp_4 - 8) = &ebp[-0x12]
            *(esp_4 - 0xc) = sub_42c73c(esi_5)
            FillRect()
            esp_4 = esp_4
            ebx_3 += 1
            i_1 = ebp[-0xa]
            ebp[-0xa] -= 1
        while (i_1 != 1)

if (*(ebp - 0x21) != 0)
    *(esp_4 - 4) = 0
    *(esp_4 - 8) = ebp[4]
    *(esp_4 - 0xc) = sub_42c73c(ebp[-1])
    SelectPalette()
    *(esp_4 - 4) = sub_42c73c(ebp[-1])
    RealizePalette()

if (*(ebp - 0x22) != 0)
    *(esp_4 - 4) = ebp[-7]
    sub_42c1ac(ebp[-0xd], ebp[-0xe], ebp[-1])

*(esp_4 + 8)
fsbase->NtTib.ExceptionList = *esp_4
*(esp_4 + 8) = 0x48f270

if (*(ebp - 0x22) != 0)
    sub_403c68(ebp[-7])

if (ebp[-8] == 0)
    return 

*(esp_4 + 4) = ebp[-8]

if (DeleteObject() == 0)
    return 

*(esp_4 + 4) = 0
*esp_4 = sub_42c73c(ebp[-1])
SelectClipRgn()
