// 函数: sub_40f964
// 地址: 0x40f964
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s>= ebx[2])
    *ebx
    ebx, esi = sub_40fa00(esi, data_41351c)

int32_t eax_2
int32_t ecx_2
eax_2, ecx_2 = sub_40fa54(ebx, esi)
ebx[2] -= 1
int32_t result = ebx[2]

if (esi s< result)
    result, ecx_2 = sub_4027b0(ebx[1] + (esi << 2) + 4, ebx[1] + (esi << 2), (result - esi) << 2)

if (eax_2 == 0)
    return result

ecx_2.b = 2
return (*(*ebx + 4))()
