// 函数: sub_4628b4
// 地址: 0x4628b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1

if (ebx == 0)
    ebx = *(*(arg3 + 0x64) + 8)
    
    if (arg4 != 0)
        while (true)
            void* eax_1 = *(ebx + 0xc)
            
            if (eax_1 == 0)
                break
            
            ebx = eax_1

if (arg4 == 0)
    *(arg2 + 0xc) = ebx
    void* eax_4 = *(ebx + 0x18)
    *(arg2 + 0x18) = eax_4
    
    if (eax_4 != 0)
        *(eax_4 + 0xc) = arg2
    
    *(ebx + 0x18) = arg2
    void* eax_5 = *(ebx + 0x14)
    *(arg2 + 0x14) = eax_5
    
    if (ebx == *(eax_5 + 8))
        *(eax_5 + 8) = arg2
else
    *(arg2 + 0x14) = *(ebx + 0x14)
    *(arg2 + 0x18) = ebx
    void* eax_3 = *(ebx + 0xc)
    *(arg2 + 0xc) = eax_3
    
    if (eax_3 != 0)
        *(eax_3 + 0x18) = arg2
    
    *(ebx + 0xc) = arg2

sub_461d7c(*(ebx + 0x14))
return sub_462114(*(ebx + 0x14))
