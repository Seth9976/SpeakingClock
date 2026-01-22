// 函数: sub_403e34
// 地址: 0x403e34
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = arg1

while (true)
    int16_t* edi_1 = *(esi - 0x30)
    
    if (edi_1 != 0)
        uint32_t i = zx.d(*edi_1)
        uint32_t i_1 = i
        void* edi_2 = &edi_1[1]
        bool cond:1_1 = edi_1 == 0xfffffffe
        
        while (i != 0)
            int16_t temp2_1 = *edi_2
            cond:1_1 = arg2 == temp2_1
            edi_2 += 2
            i -= 1
            
            if (arg2 == temp2_1)
                break
        
        if (cond:1_1)
            uint32_t eax_3 = i_1 * 2 - i
            *(edi_2 + (eax_3 << 1) - 4)
            return eax_3
    
    void** esi_1 = *(esi - 0x24)
    
    if (esi_1 == 0)
        break
    
    esi = *esi_1

return arg2
