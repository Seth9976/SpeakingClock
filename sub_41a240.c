// 函数: sub_41a240
// 地址: 0x41a240
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edi = arg3
int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s>= ebx[2])
    *ebx
    arg3, ebx, esi = sub_41a080(esi, data_4ac394)

int32_t edx_1 = ebx[1]
int32_t result = *(edx_1 + (esi << 2))

if (edi != result)
    *(edx_1 + (esi << 2)) = edi
    
    if (result != 0)
        arg3.b = 2
        result = (*(*ebx + 4))()
    
    if (edi != 0)
        return (*(*ebx + 4))()

return result
