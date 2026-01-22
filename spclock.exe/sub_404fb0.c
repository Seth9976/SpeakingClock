// 函数: sub_404fb0
// 地址: 0x404fb0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 == arg2)
    return 

if ((arg1 & arg2) == 0)
    if (arg1 == 0)
        *(arg2 - 4)
        return 
    
    if (arg2 == 0)
        *(arg1 - 4)
        return 

uint32_t ecx_1 = zx.d(*arg1)
char temp0_1 = ecx_1.b
ecx_1.b -= *arg2

if (temp0_1 != *arg2)
    return 

int32_t ebx_1 = *(arg1 - 4)
int32_t* ecx_4 =
    (adc.d(ecx_1, 0xffffffff, ebx_1 u< *(arg2 - 4)) & (ebx_1 - *(arg2 - 4))) - *(arg1 - 4)
void* eax = arg1 - ecx_4
void* edx = arg2 - ecx_4
int32_t* temp5_1

do
    int32_t ebx_4 = *(ecx_4 + eax) ^ *(ecx_4 + edx)
    
    if (ebx_4 != 0)
        int32_t eflags_1
        int32_t ebx_5
        ebx_5, eflags_1 = _bit_scan_forward(ebx_4)
        uint32_t ebx_6 = ebx_5 u>> 3
        char* ecx_5 = ecx_4 + ebx_6
        
        if (ecx_4 + ebx_6 s>= 0)
            break
        
        eax.b = *(ecx_5 + eax)
        *(ecx_5 + edx)
        return 
    
    temp5_1 = ecx_4
    ecx_4 = &ecx_4[1]
while (&temp5_1[1] s< 0)
