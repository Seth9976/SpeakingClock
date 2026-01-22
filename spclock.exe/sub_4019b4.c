// 函数: sub_4019b4
// 地址: 0x4019b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char ecx = data_4ad049
int32_t esi
int32_t edi

if (arg1 u> 0xa2c)
    if (arg1 u> 0x40a2c)
        if (arg1 s< 0)
            return 0
        
        int32_t ebx
        int32_t var_4_1 = ebx
        int32_t var_8_2 = esi
        int32_t var_c_2 = edi
        uint32_t dwSize = (arg1 + 0x10013) & 0xffff0000
        int32_t** ebx_14 = VirtualAlloc(nullptr, dwSize, MEM_COMMIT | 0x100000, PAGE_READWRITE)
        
        if (ebx_14 == 0)
            return ebx_14
        
        ebx_14[2] = arg1
        ebx_14[3] = dwSize | 4
        sub_401718()
        int32_t*** eax_32 = data_4af7ac
        *ebx_14 = &data_4af7a8
        data_4af7ac = ebx_14
        ebx_14[1] = eax_32
        *eax_32 = ebx_14
        data_4af7a4 = 0
        return &ebx_14[4]
    
    if (ecx != 0)
        while (true)
            bool z_7
            
            if (0 == data_4ad714)
                data_4ad714 = 0
                z_7 = true
            else
                int32_t eax_13
                eax_13.b = data_4ad714
                z_7 = false
            
            if (z_7)
                break
            
            if (data_4ad5b1 == 0)
                Sleep(0)
                bool z_8
                
                if (0 == data_4ad714)
                    data_4ad714 = 0
                    z_8 = true
                else
                    int32_t eax_14
                    eax_14.b = data_4ad714
                    z_8 = false
                
                if (z_8)
                    break
                
                Sleep(0xa)
    
    uint32_t edx_10 = (((arg1 + 0xd3) & 0xffffff00) - 0xb00) u>> 0xd
    uint32_t ecx_14 = (((arg1 + 0xd3) & 0xffffff00) - 0xb00) u>> 8
    int32_t eax_16 = 0xffffffff << ecx_14.b & *((edx_10 << 2) + &data_4ad724)
    int32_t ecx_16
    
    if (eax_16 == 0)
        int32_t eax_19 = 0xfffffffe << edx_10.b & data_4ad720
        
        if (eax_19 == 0)
            int32_t ecx_19 = data_4ad71c
            void* eax_24
            
            if (ecx_19 u< ((arg1 + 0xd3) & 0xffffff00) + 0x30)
                eax_24 = sub_4016a0(((arg1 + 0xd3) & 0xffffff00) + 0x30)
            else
                eax_24 = data_4ad718 - (((arg1 + 0xd3) & 0xffffff00) + 0x30)
                data_4ad718 = eax_24
                data_4ad71c = ecx_19 - (((arg1 + 0xd3) & 0xffffff00) + 0x30)
                *(eax_24 - 4) = (((arg1 + 0xd3) & 0xffffff00) + 0x30) | 2
            
            data_4ad714 = 0
            return eax_24
        
        int32_t eflags_4
        edx_10, eflags_4 = _bit_scan_forward(eax_19)
        int32_t eflags_5
        int32_t ecx_18
        ecx_18, eflags_5 = _bit_scan_forward(*((edx_10 << 2) + &data_4ad724))
        ecx_16 = ecx_18 | edx_10 << 5
    else
        int32_t eflags_3
        int32_t eax_17
        eax_17, eflags_3 = _bit_scan_forward(eax_16)
        ecx_16 = (ecx_14 & 0xffffffe0) | eax_17
    
    int32_t var_8_1 = esi
    int32_t var_c_1 = edi
    void* esi_8 = *((ecx_16 << 3) + 0x4ad7a8)
    void** eax_26 = *(esi_8 + 4)
    *((ecx_16 << 3) + 0x4ad7a8) = eax_26
    *eax_26 = (ecx_16 << 3) + &data_4ad7a4
    
    if ((ecx_16 << 3) + &data_4ad7a4 == eax_26)
        int32_t temp2_1 = *((edx_10 << 2) + &data_4ad724) & rol.d(0xfffffffe, ecx_16.b)
        *((edx_10 << 2) + &data_4ad724) = temp2_1
        
        if (temp2_1 == 0)
            data_4ad720 &= not.d(1 << (edx_10 u% 0x20))
    
    int32_t edi_8 = 0xfffffff0 & *(esi_8 - 4)
    void* edx_12 = edi_8 - (((arg1 + 0xd3) & 0xffffff00) + 0x30)
    
    if (edi_8 == ((arg1 + 0xd3) & 0xffffff00) + 0x30)
        *(edi_8 + esi_8 - 4) &= 0xf7
    else
        void* eax_28 = ((arg1 + 0xd3) & 0xffffff00) + 0x30 + esi_8
        *(eax_28 - 4) = edx_12 + 3
        *(edx_12 + eax_28 - 8) = edx_12
        
        if (edx_12 u>= 0xb30)
            sub_4015d4(eax_28, edx_12, edx_12 + 3)
    
    *(esi_8 - 4) = ((arg1 + 0xd3) & 0xffffff00) + 0x32
    data_4ad714 = 0
    return esi_8

void* ebx_1 = (zx.d(*(((arg1 + 3) u>> 3) + 0x4ad5bc)) << 3) + &data_4aa044

if (ecx != 0)
    while (true)
        bool z_1
        
        if (0 == *ebx_1)
            *ebx_1 = 0
            z_1 = true
        else
            int32_t eax_2
            eax_2.b = *ebx_1
            z_1 = false
        
        if (z_1)
            break
        
        ebx_1 += 0x20
        bool z_2
        
        if (0 == *ebx_1)
            *ebx_1 = 0
            z_2 = true
        else
            int32_t eax_3
            eax_3.b = *ebx_1
            z_2 = false
        
        if (z_2)
            break
        
        ebx_1 += 0x20
        bool z_3
        
        if (0 == *ebx_1)
            *ebx_1 = 0
            z_3 = true
        else
            int32_t eax_4
            eax_4.b = *ebx_1
            z_3 = false
        
        if (z_3)
            break
        
        ebx_1 -= 0x40
        
        if (data_4ad5b1 == 0)
            Sleep(0)
            bool z_4
            
            if (0 == *ebx_1)
                *ebx_1 = 0
                z_4 = true
            else
                int32_t eax_5
                eax_5.b = *ebx_1
                z_4 = false
            
            if (z_4)
                break
            
            Sleep(0xa)

void* edx_1 = *(ebx_1 + 4)
void* eax_1 = *(edx_1 + 8)

if (edx_1 != ebx_1)
    *(edx_1 + 0xc) += 1
    int32_t ecx_1 = 0xfffffff8 & *(eax_1 - 4)
    *(edx_1 + 8) = ecx_1
    *(eax_1 - 4) = edx_1
    
    if (ecx_1 == 0)
        void* ecx_4 = *(edx_1 + 4)
        *(ecx_4 + 0x14) = ebx_1
        *(ebx_1 + 4) = ecx_4
        *ebx_1 = 0
        return eax_1
    
    *ebx_1 = 0
    return eax_1

void* edx_2 = *(ebx_1 + 0x10)
void* ecx_3 = zx.d(*(ebx_1 + 2)) + eax_1

if (eax_1 u<= *(ebx_1 + 0xc))
    *(edx_2 + 0xc) += 1
    *(ebx_1 + 8) = ecx_3
    *ebx_1 = 0
    *(eax_1 - 4) = edx_2
    return eax_1

int32_t var_8 = esi
int32_t var_c = edi

if (data_4ad049 != 0)
    while (true)
        bool z_5
        
        if (0 == data_4ad714)
            data_4ad714 = 0
            z_5 = true
        else
            int32_t eax_6
            eax_6.b = data_4ad714
            z_5 = false
        
        if (z_5)
            break
        
        if (data_4ad5b1 == 0)
            Sleep(0)
            bool z_6
            
            if (0 == data_4ad714)
                data_4ad714 = 0
                z_6 = true
            else
                int32_t eax_7
                eax_7.b = data_4ad714
                z_6 = false
            
            if (z_6)
                break
            
            Sleep(0xa)

int32_t esi_2 = sx.d(*(ebx_1 + 1)) & data_4ad720
void** esi_4
uint32_t edi_2

if (esi_2 == 0)
    edi_2 = data_4ad71c
    
    if (edi_2 u< zx.d(*(ebx_1 + 0x18)))
        uint32_t eax_10 = zx.d(*(ebx_1 + 0x1a))
        edi_2 = eax_10
        void* eax_11 = sub_4016a0(eax_10)
        esi_4 = eax_11
        
        if (eax_11 == 0)
            data_4ad714 = eax_11.b
            *ebx_1 = eax_11.b
            return eax_11
    else
        uint32_t ecx_10 = zx.d(*(ebx_1 + 0x1a))
        
        if (edi_2 u>= ecx_10 + 0xb30)
            edi_2 = ecx_10
        
        esi_4 = data_4ad718 - edi_2
        data_4ad71c -= edi_2
        data_4ad718 = esi_4
else
    int32_t eflags_1
    int32_t eax_8
    eax_8, eflags_1 = _bit_scan_forward(esi_2)
    int32_t eflags_2
    int32_t ecx_6
    ecx_6, eflags_2 = _bit_scan_forward(*((eax_8 << 2) + &data_4ad724))
    int32_t ecx_7 = ecx_6 + (eax_8 << 5)
    esi_4 = *((ecx_7 << 3) + 0x4ad7a8)
    void** edx_3 = esi_4[1]
    *((ecx_7 << 3) + 0x4ad7a8) = edx_3
    *edx_3 = (ecx_7 << 3) + &data_4ad7a4
    
    if ((ecx_7 << 3) + &data_4ad7a4 == edx_3)
        int32_t temp3_1 = *((eax_8 << 2) + &data_4ad724) & rol.d(0xfffffffe, ecx_7.b)
        *((eax_8 << 2) + &data_4ad724) = temp3_1
        
        if (temp3_1 == 0)
            data_4ad720 &= not.d(1 << (eax_8 u% 0x20))
    
    edi_2 = 0xfffffff0 & esi_4[-1]
    
    if (edi_2 u< 0x10a60)
        *(edi_2 + esi_4 - 4) &= 0xf7
    else
        uint32_t edx_5 = edi_2
        edi_2 = zx.d(*(ebx_1 + 0x1a))
        uint32_t edx_6 = edx_5 - edi_2
        void** eax_9 = edi_2 + esi_4
        eax_9[-1] = edx_6 + 3
        *(edx_6 + eax_9 - 8) = edx_6
        sub_4015d4(eax_9, edx_6, edx_6 + 3)

esi_4[-1] = edi_2 + 6
data_4ad714 = 0
*esi_4 = ebx_1
esi_4[2] = 0
esi_4[3] = 1
*(ebx_1 + 0x10) = esi_4
uint32_t ecx_12 = zx.d(*(ebx_1 + 2))
*(ebx_1 + 8) = ecx_12 + &esi_4[8]
*(ebx_1 + 0xc) = edi_2 + esi_4 - ecx_12
*ebx_1 = 0
esi_4[7] = esi_4
return &esi_4[8]
