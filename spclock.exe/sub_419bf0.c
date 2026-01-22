// 函数: sub_419bf0
// 地址: 0x419bf0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = sub_406b68()
int32_t* edi = *(result + 8)
int32_t ebx_1 = edi[2] - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        result = (*(*sub_41a0f4(edi, esi_1) + 0xc))()
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
