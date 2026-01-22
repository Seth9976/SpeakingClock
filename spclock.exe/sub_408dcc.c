// 函数: sub_408dcc
// 地址: 0x408dcc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 == arg2)
    return 0

if ((arg1 & arg2) == 0)
    if (arg1 == 0)
        return arg1 - *(arg2 - 4)
    
    if (arg2 == 0)
        return *(arg1 - 4)

uint32_t ecx = zx.d(*arg2)

if (ecx.b != *arg1)
    return zx.d(*arg1) - ecx

int32_t ebx = *(arg1 - 4)
int32_t result = ebx - *(arg2 - 4)
void* ecx_3 = (adc.d(0, 0xffffffff, ebx u< *(arg2 - 4)) & result) - *(arg1 - 4)
void* eax_2 = arg1 - ecx_3
void* edx = arg2 - ecx_3
void* temp3_1

do
    int32_t ebx_2 = *(ecx_3 + eax_2) ^ *(ecx_3 + edx)
    
    if (ebx_2 != 0)
        int32_t eflags_1
        int32_t ebx_3
        ebx_3, eflags_1 = _bit_scan_forward(ebx_2)
        uint32_t ebx_4 = ebx_3 u>> 3
        void* ecx_4 = ecx_3 + ebx_4
        
        if (ecx_3 + ebx_4 s< 0)
            return zx.d(*(ecx_4 + eax_2)) - zx.d(*(ecx_4 + edx))
        
        break
    
    temp3_1 = ecx_3
    ecx_3 += 4
while (temp3_1 + 4 s< 0)
return result
