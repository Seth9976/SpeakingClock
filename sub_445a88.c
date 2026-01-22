// 函数: sub_445a88
// 地址: 0x445a88
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = 0
void* edi = &data_4ab52c

do
    bool c_1 = ebx.b u< 0x1f
    
    if (ebx.b == 0x1f || c_1)
        c_1 = test_bit(*(*(arg1 + 8) + 0x64), ebx & 0x7f)
    
    if (c_1)
        void* ebp_1 = *(arg1 + 4)
        *(ebp_1 + 0x60) |= *edi
    
    ebx += 1
    edi += 4
while (ebx.b != 0x16)

void* result = *(arg1 + 8)

if ((*(result + 0xb8) & 1) != 0)
    void* ebx_1 = *(arg1 + 4)
    result = *(ebx_1 + 0x60) | 0x8000
    *(ebx_1 + 0x60) = result

return result
