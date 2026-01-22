// 函数: sub_419fe8
// 地址: 0x419fe8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
int32_t* ebx = arg1
int32_t ecx

if (esi s< 0 || esi s>= ebx[2])
    *ebx
    ecx, ebx, esi = sub_41a080(esi, data_4ac394)

int32_t edi = *(ebx[1] + (esi << 2))
ebx[2] -= 1
int32_t result = ebx[2]

if (esi s< result)
    result, ecx = sub_4030d0(ebx[1] + (esi << 2) + 4, ebx[1] + (esi << 2), (result - esi) * 4)

if (edi == 0)
    return result

ecx.b = 2
return (*(*ebx + 4))()
