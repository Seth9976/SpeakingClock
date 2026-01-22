// 函数: sub_401d38
// 地址: 0x401d38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* edx = arg1[-1]
char* ebx
char* var_4 = ebx
ebx.b = data_4ad049
MEMORY_BASIC_INFORMATION buffer
int32_t esi

if ((edx.b & 7) == 0)
    bool cond:1_1 = ebx.b != 0
    ebx = *edx
    
    if (cond:1_1)
        while (true)
            bool z_1
            
            if (0 == *ebx)
                *ebx = 0
                z_1 = true
            else
                int32_t eax_4
                eax_4.b = *ebx
                z_1 = false
            
            if (z_1)
                break
            
            if (data_4ad5b1 == 0)
                Sleep(0)
                bool z_2
                
                if (0 == *ebx)
                    *ebx = 0
                    z_2 = true
                else
                    int32_t eax_5
                    eax_5.b = *ebx
                    z_2 = false
                
                if (z_2)
                    break
                
                Sleep(0xa)
    
    int32_t temp0_1 = edx[3]
    edx[3] -= 1
    int32_t eax = edx[2]
    
    if (temp0_1 != 1)
        edx[2] = arg1
        arg1[-1] = eax + 1
        
        if (eax != 0)
            *ebx = 0
            return 0
        
        void* ecx_1 = *(ebx + 4)
        edx[5] = ebx
        edx[1] = ecx_1
        *(ecx_1 + 0x14) = edx
        *(ebx + 4) = edx
        *ebx = 0
        return 0
    
    if (eax == 0)
        *(ebx + 0xc) = eax
    else
        void* eax_3 = edx[5]
        void* ecx_2 = edx[1]
        *(eax_3 + 4) = ecx_2
        *(ecx_2 + 0x14) = eax_3
        eax = 0
        
        if (*(ebx + 0x10) == edx)
            *(ebx + 0xc) = eax
    
    *ebx = eax.b
    arg1 = edx
    edx = edx[-1]
    ebx.b = data_4ad049
else if ((edx.b & 5) != 0)
    if ((edx.b & 3) != 0)
        return 0xffffffff
    
    char* var_4_1 = var_4
    int32_t var_8_4 = esi
    sub_401718()
    void* edx_4 = *(arg1 - 0x10)
    int32_t* edx_5 = *(arg1 - 0xc)
    int32_t edx_6 = *(arg1 - 4)
    int32_t result
    
    if ((edx_6.b & 8) != 0)
        void* lpAddress = arg1 - 0x10
        int32_t ebp_2 = edx_6 & 0xfffffff0
        result = 0
        
        while (true)
            VirtualQuery(lpAddress, &buffer, 0x1c)
            
            if (VirtualFree(lpAddress, 0, MEM_RELEASE) == 0)
                result = 0xffffffff
                break
            
            uint32_t RegionSize = buffer.RegionSize
            
            if (ebp_2 u<= RegionSize)
                break
            
            ebp_2 -= RegionSize
            lpAddress += RegionSize
    else if (VirtualFree(arg1 - 0x10, 0, MEM_RELEASE) == 0)
        result = 0xffffffff
    else
        result = 0
    
    if (result == 0)
        *edx_5 = edx_4
        *(edx_4 + 4) = edx_5
    
    data_4af7a4 = 0
    return result

void* ebx_3 = edx & 0xfffffff0
int32_t var_8_3 = esi
int32_t* esi_1 = arg1

if (ebx.b != 0)
    while (true)
        bool z_3
        
        if (0 == data_4ad714)
            data_4ad714 = 0
            z_3 = true
        else
            int32_t eax_6
            eax_6.b = data_4ad714
            z_3 = false
        
        if (z_3)
            break
        
        if (data_4ad5b1 == 0)
            Sleep(0)
            bool z_4
            
            if (0 == data_4ad714)
                data_4ad714 = 0
                z_4 = true
            else
                int32_t eax_7
                eax_7.b = data_4ad714
                z_4 = false
            
            if (z_4)
                break
            
            Sleep(0xa)

int32_t ecx_3 = *(ebx_3 + esi_1 - 4)
int32_t ecx_4

if ((*(ebx_3 + esi_1 - 4) & 1) != 0)
    int32_t* eax_11 = ebx_3 + esi_1
    ecx_4 = ecx_3 & 0xfffffff0
    ebx_3 += ecx_4
    
    if (ecx_4 u>= 0xb30)
        ecx_4 = sub_401594(eax_11)
else
    ecx_4 = ecx_3 | 8
    *(ebx_3 + esi_1 - 4) = ecx_4

if ((esi_1[-1].b & 8) != 0)
    ecx_4 = esi_1[-2]
    esi_1 -= ecx_4
    ebx_3 += ecx_4
    
    if (ecx_4 u>= 0xb30)
        ecx_4 = sub_401594(esi_1)

if (ebx_3 != 0x13ffe0)
    esi_1[-1] = ebx_3 + 3
    *(ebx_3 + esi_1 - 8) = ebx_3
    sub_4015d4(esi_1, ebx_3, ecx_4)
    data_4ad714 = 0
    return 0

if (data_4ad71c != 0x13ffe0)
    sub_401634()
    esi_1[0x4fff7] = 2
    data_4ad71c = 0x13ffe0
    data_4ad718 = &esi_1[0x4fff8]
    data_4ad714 = 0
    return 0

void* eax_13 = *(esi_1 - 0x10)
void** edx_3 = *(esi_1 - 0xc)
*(eax_13 + 4) = edx_3
*edx_3 = eax_13
data_4ad714 = 0
buffer.Type = esi_1 - 0x10
BOOL eax_14 = VirtualFree(buffer.Type, 0, MEM_RELEASE)
return sbb.d(eax_14, eax_14, eax_14 u< 1)
