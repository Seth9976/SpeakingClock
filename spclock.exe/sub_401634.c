// 函数: sub_401634
// 地址: 0x401634
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4ad71c == 0)
    return 

int32_t* eax = data_4ad718
void* eax_1
int32_t edx

if ((eax[-1].b & 1) != 0)
    int32_t edx_2 = 0xfffffff0 & eax[-1]
    
    if (edx_2 u>= 0xb30)
        sub_401594(eax)
        eax = data_4ad718
        edx_2 = 0xfffffff0 & eax[-1]
    
    int32_t ecx_3 = data_4ad71c
    eax_1 = eax - ecx_3
    edx = edx_2 + ecx_3
else
    eax[-1] |= 8
    edx = data_4ad71c
    eax_1 = eax - edx

*(eax_1 - 4) = edx + 3
*(edx + eax_1 - 8) = edx

if (edx u>= 0xb30)
    return sub_4015d4(eax_1, edx, edx + 3) __tailcall
