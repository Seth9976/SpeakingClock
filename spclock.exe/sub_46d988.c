// 函数: sub_46d988
// 地址: 0x46d988
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg1
sub_459f74(ebx)

if (ebx[0x9a] != 0 && (ebx[0xc] == 0 || (ebx[7].b & 0x10) == 0))
    int32_t* edi_1 = ebx[0x9a]
    ebx[0x9a] = 0
    int32_t esi
    esi.w = 0xffb6
    
    if (sub_403e64(edi_1, esi) != 0)
        ebx = sub_470d84(ebx, edi_1)

char result = sub_478924(sub_478638(ebx))

if (result == 0)
    return result

return sub_4786ec(ebx)
