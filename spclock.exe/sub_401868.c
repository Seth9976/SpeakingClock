// 函数: sub_401868
// 地址: 0x401868
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_2 = *(arg1 - 4)
int32_t** ebx_5

if ((eax_2 & 0xfffffff0) - 0x14 u< arg2)
    int32_t edx_2 = (((eax_2 & 0xfffffff0) - 0x14) u>> 2) + (eax_2 & 0xfffffff0) - 0x14
    int32_t ebp_1
    
    ebp_1 = edx_2 u<= arg2 ? arg2 : edx_2
    
    void* lpAddress = arg1 - 0x10 + (eax_2 & 0xfffffff0)
    MEMORY_BASIC_INFORMATION buffer
    VirtualQuery(lpAddress, &buffer, 0x1c)
    
    if (buffer.State == 0x10000)
        buffer.RegionSize &= 0xffff0000
        uint32_t RegionSize = buffer.RegionSize
        
        if (arg2 - ((eax_2 & 0xfffffff0) - 0x14) u< RegionSize)
            uint32_t dwSize = (ebp_1 - ((eax_2 & 0xfffffff0) - 0x14) + 0xffff) & 0xffff0000
            
            if (RegionSize u< dwSize)
                dwSize = RegionSize
            
            if (VirtualAlloc(lpAddress, dwSize, MEM_RESERVE, PAGE_READWRITE) != 0
                    && VirtualAlloc(lpAddress, dwSize, MEM_COMMIT, PAGE_READWRITE) != 0)
                *(arg1 - 8) = arg2
                *(arg1 - 4) = (dwSize + *(arg1 - 4)) | 8
                return arg1
    
    ebx_5 = sub_4019b4(ebp_1)
    
    if (ebx_5 != 0)
        if (ebp_1 u> 0x40a2c)
            *(ebx_5 - 8) = arg2
        
        sub_401548(arg1, ebx_5, *(arg1 - 8))
        sub_401d38(arg1)
else if (arg2 u< ((eax_2 & 0xfffffff0) - 0x14) u>> 1)
    ebx_5 = sub_4019b4(arg2)
    
    if (ebx_5 != 0)
        if (arg2 u> 0x40a2c)
            *(arg1 - 8) = arg2
        
        sub_401578(arg1, ebx_5, arg2)
        sub_401d38(arg1)
else
    ebx_5 = arg1
    *(arg1 - 8) = arg2

return ebx_5
