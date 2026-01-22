// 函数: sub_46bce0
// 地址: 0x46bce0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi_1 = sub_474128(data_4b1ce4) - 1

if (esi_1 s>= 0)
    int32_t i_1 = esi_1 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        void* eax_3
        int32_t ecx_1
        eax_3, ecx_1 = sub_474114(data_4b1ce4, edi_1)
        
        if ((*(eax_3 + 0x1d) & 2) == 0 && sub_408ec8(arg1, *(eax_3 + 8), ecx_1) == 0)
            return eax_3
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t esi_3 = sub_4745e4(data_4b1ce4) - 1

if (esi_3 s< 0)
    return nullptr

int32_t esi_4 = esi_3 + 1
int32_t edi_2 = 0

while (true)
    void* eax_9
    int32_t ecx_2
    eax_9, ecx_2 = sub_4745d0(data_4b1ce4, edi_2)
    
    if (sub_408ec8(arg1, *(eax_9 + 8), ecx_2) == 0)
        return eax_9
    
    edi_2 += 1
    int32_t temp1_1 = esi_4
    esi_4 -= 1
    
    if (temp1_1 == 1)
        return nullptr
