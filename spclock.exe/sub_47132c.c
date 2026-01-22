// 函数: sub_47132c
// 地址: 0x47132c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg2

if (ebx == 0)
    return 

while (true)
    int32_t* esi_1 = ebx[0xc]
    
    if (esi_1 == 0)
        break
    
    if (sub_403df4(ebx, 0x46a11c).b != 0)
        break
    
    ebx = esi_1

if (ebx != 0 && arg3 != ebx)
    SendMessageA(sub_45f888(ebx), arg1, 0, 0)
